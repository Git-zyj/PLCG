/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126032
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
    var_14 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) & (max((((/* implicit */unsigned long long int) 1902813256U)), (arr_5 [i_0] [i_0]))))) * (((/* implicit */unsigned long long int) min((arr_4 [i_0 - 2] [i_1 - 3] [i_1 + 1]), (((/* implicit */unsigned int) arr_1 [i_0] [i_1])))))));
                arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) min((8361530196685491781ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 4] [10U]))))) ? (var_10) : (arr_0 [i_0 + 1] [i_1 - 4]))) : (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) 222779082)) * (arr_4 [i_0] [i_0] [7ULL]))), (((/* implicit */unsigned int) min((var_4), (((/* implicit */int) arr_3 [i_1] [i_0] [i_0]))))))))));
                var_15 = (~(((((9889269942790671706ULL) | (var_0))) | (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0 + 1] [i_1 - 1])))));
                var_16 ^= ((/* implicit */int) min((((signed char) var_5)), (arr_3 [i_1 - 1] [i_1 - 2] [i_1 - 1])));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((int) var_2))) == (max((arr_0 [i_0 - 1] [i_1 - 4]), (arr_0 [i_0 + 1] [i_1 - 2])))));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1])) ? (((unsigned int) arr_9 [i_1 - 2] [i_0 + 1] [i_0])) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_0 - 1] [i_1 - 2] [i_2 + 2])))))));
                                var_19 = (-(var_2));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
