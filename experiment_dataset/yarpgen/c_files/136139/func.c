/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136139
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */int) arr_4 [i_0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_13 [i_3] [i_3] [i_2] [1LL] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) (-(-1259349726)))) & (((((/* implicit */_Bool) max((arr_5 [i_1] [i_1] [i_1]), (arr_9 [10] [i_1])))) ? (((arr_11 [i_3] [i_3] [(short)6] [i_3] [i_3]) | (arr_11 [i_0] [i_1] [i_2] [i_2] [i_4]))) : (((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) (-2147483647 - 1))))))))));
                                var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(max((((/* implicit */int) (short)-7359)), (arr_5 [10ULL] [i_1] [10ULL])))))), (((((long long int) arr_0 [i_1] [i_4 + 1])) >> (((((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0]))))) - (832981690U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        for (short i_6 = 1; i_6 < 18; i_6 += 3) 
        {
            {
                var_15 |= ((/* implicit */unsigned short) min((9852688874629665737ULL), (((/* implicit */unsigned long long int) var_5))));
                var_16 = (~(min((arr_9 [i_6 + 1] [i_6 - 1]), (arr_9 [i_6 + 1] [i_6 - 1]))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) (_Bool)0)), (min((var_12), (((/* implicit */int) (unsigned short)61689))))))));
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (~(min((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >= (var_6)))), (((((/* implicit */unsigned int) var_6)) & (var_5))))))))));
}
