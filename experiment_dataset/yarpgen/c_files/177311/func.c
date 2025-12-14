/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177311
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */long long int) (_Bool)1)))))));
        var_15 *= ((/* implicit */unsigned long long int) min(((_Bool)1), ((_Bool)1)));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        var_17 = ((/* implicit */_Bool) arr_1 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_4])) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_0] [i_4]))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_0 [i_4]))))) : (((/* implicit */unsigned long long int) arr_1 [i_2]))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_1] [i_4])) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_2] [i_4])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] [i_4]))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0] [i_1])), (arr_0 [i_3])))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */long long int) arr_9 [i_0] [i_1] [i_3] [i_1])), (arr_3 [i_0] [i_1] [i_4]))))) : (((((/* implicit */_Bool) arr_6 [i_4] [i_3] [i_1])) ? (arr_1 [i_1]) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_4]))) : (arr_3 [i_0] [i_0] [i_3])))))));
                                arr_14 [i_4] [i_2 + 3] [i_1] [i_2 + 3] [i_1] [i_4] |= ((/* implicit */signed char) arr_4 [i_1] [i_1] [i_1]);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((arr_13 [i_0] [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]) ? (min((((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2] [i_0])), (arr_6 [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_2] [i_2 - 2]))) : (arr_6 [i_2 + 1] [i_1] [i_0])))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [i_2 + 1])), (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))) : (min((arr_0 [i_1]), (arr_0 [i_1])))))));
                    var_21 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_2 + 4]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2]))) : (arr_6 [i_0] [i_1] [i_2 + 3])))) : (arr_3 [4LL] [i_2 + 4] [i_2 + 4]))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 + 2] [i_2 + 3] [12ULL] [i_2 + 2])))));
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        arr_19 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (arr_15 [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5] [i_5])))));
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5]))) : (arr_18 [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (((/* implicit */int) arr_17 [i_5] [i_5])) : (((/* implicit */int) arr_17 [i_5] [i_5])))))));
    }
}
