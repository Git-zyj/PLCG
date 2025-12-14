/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179092
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_11 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 3])))), (arr_2 [i_0])));
                var_12 = ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) var_3)))));
                var_13 = ((/* implicit */_Bool) arr_0 [i_0 + 2]);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((int) -959106212));
    var_15 += var_3;
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) ((_Bool) ((1613408305U) == (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
}
