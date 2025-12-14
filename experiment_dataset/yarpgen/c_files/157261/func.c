/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157261
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_7)) & (((/* implicit */int) var_8))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_16 += ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0 + 1] [i_1 + 1])) << (((/* implicit */int) arr_0 [i_0 + 2] [i_1 + 1])))) & (((/* implicit */int) arr_0 [i_0 - 1] [i_1 + 1]))));
                var_17 += ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_1 [i_0] [i_0 + 2])) ^ (((/* implicit */int) arr_0 [i_0] [i_0 - 1])))) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((arr_3 [i_1] [i_0] [i_0]) / (arr_2 [i_0])))))));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 14; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_5 [i_0 + 2])) ^ (((/* implicit */int) arr_5 [i_0 + 2])))) * (((((/* implicit */int) arr_5 [i_0 - 2])) * (((/* implicit */int) arr_5 [i_0 + 1])))))))));
                            arr_12 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 1] [i_2 + 3] [i_0 - 1] [i_2 - 1]))) | (((arr_3 [i_0 + 1] [i_2 + 1] [i_2 + 1]) >> (((arr_3 [i_0 + 1] [i_2 + 1] [i_3]) - (3174744275U)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_8))));
}
