/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177537
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
    var_13 = ((/* implicit */int) var_0);
    var_14 ^= ((/* implicit */int) (-(max((var_3), (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) arr_1 [i_1 + 1])), (2201513913U))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_1 [i_1 + 1])))))));
                var_16 = min(((!(arr_2 [i_0]))), (arr_2 [i_1 + 1]));
                var_17 = ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_1])));
            }
        } 
    } 
    var_18 = min((var_7), (((/* implicit */short) var_8)));
}
