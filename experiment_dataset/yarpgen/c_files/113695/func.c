/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113695
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_20 *= ((/* implicit */unsigned long long int) var_19);
                arr_4 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_1])) != (((/* implicit */int) arr_0 [i_0] [i_0]))))) * ((+(((/* implicit */int) arr_0 [i_0] [i_1]))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((short) var_18));
    var_22 = ((/* implicit */_Bool) var_9);
    var_23 = ((/* implicit */unsigned int) 124);
}
