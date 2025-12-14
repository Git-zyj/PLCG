/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143792
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
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) -126877135702713111LL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_3 [i_1 - 1])))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_15))));
                arr_5 [i_0] [i_0] [i_1] = (~(((/* implicit */int) arr_2 [i_0] [i_0] [i_1])));
                var_21 = ((/* implicit */signed char) var_11);
            }
        } 
    } 
    var_22 = (signed char)92;
}
