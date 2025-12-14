/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160707
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
    var_13 = (signed char)107;
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) > (((/* implicit */int) max((arr_6 [i_0] [i_0]), ((signed char)-108))))));
                var_14 = ((/* implicit */unsigned short) max((((((/* implicit */int) min((var_8), (((/* implicit */unsigned char) (signed char)-108))))) * (((/* implicit */int) arr_4 [i_0 - 1])))), (((/* implicit */int) (!(((/* implicit */_Bool) 0)))))));
            }
        } 
    } 
}
