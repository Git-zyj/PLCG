/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139914
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 = ((/* implicit */unsigned char) min(((((_Bool)1) ? (((/* implicit */int) ((signed char) (unsigned char)255))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (var_5)))))), (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_2)))))));
    var_11 = ((/* implicit */int) (unsigned short)14);
    var_12 = ((signed char) ((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) (-((-(((((/* implicit */_Bool) (unsigned short)1016)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (signed char)-124))))))));
                var_13 = ((/* implicit */unsigned short) arr_0 [i_1]);
            }
        } 
    } 
}
