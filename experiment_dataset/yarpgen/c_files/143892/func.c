/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143892
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
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)0)), (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? ((+(((/* implicit */int) (unsigned char)8)))) : (((((/* implicit */int) (unsigned char)4)) + (((/* implicit */int) var_16))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) var_2)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
                arr_7 [(unsigned char)6] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((arr_3 [i_0]) - (arr_3 [(signed char)4]))))));
            }
        } 
    } 
}
