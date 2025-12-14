/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117863
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) arr_2 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_5 [i_1] [i_1]))))));
                                var_15 ^= ((/* implicit */int) min((max((((/* implicit */unsigned int) (unsigned char)235)), (3837666284U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_2] [2U] [i_1 + 1] [i_2] [i_2])) < (((/* implicit */int) arr_10 [i_2] [i_2] [i_1 - 2] [i_1] [i_2])))))));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((arr_2 [i_1 - 1]), (min((arr_8 [i_1 - 2]), (((/* implicit */int) arr_10 [i_1] [i_3] [i_1] [i_1] [i_1]))))))) == ((~(arr_5 [i_1 + 1] [i_1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */int) (-(max((arr_1 [i_1 - 1] [i_5]), (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_1] [i_1 + 1] [9LL]))))));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_6 [i_1] [i_1 + 1] [i_1 + 1] [i_5]), (((/* implicit */unsigned short) arr_15 [i_0] [i_0] [i_0] [i_0]))))) / (max((arr_8 [i_1 - 2]), (arr_8 [i_1 + 1])))));
                                arr_20 [i_6] [i_6] [i_6] [i_6] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((arr_14 [i_1] [i_1 - 1]), (arr_14 [i_1] [i_1 - 2])))), (min((arr_0 [i_1 - 1]), (((/* implicit */unsigned long long int) max((arr_11 [i_1] [i_2] [i_5] [i_6]), (arr_12 [i_1] [i_5]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */int) max((arr_11 [i_0] [i_0] [i_0] [i_0]), (min((((/* implicit */unsigned int) min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_4 [i_0])))), (arr_11 [i_0] [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned int i_7 = 1; i_7 < 12; i_7 += 2) 
    {
        var_20 = ((/* implicit */int) arr_23 [i_7]);
        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_23 [i_7 + 1]))));
        arr_24 [i_7] &= ((/* implicit */_Bool) ((arr_22 [i_7] [i_7 + 2]) - (arr_22 [i_7 - 1] [i_7 - 1])));
    }
    var_22 = ((/* implicit */int) ((min((var_13), (((/* implicit */long long int) var_5)))) - (((/* implicit */long long int) 3646502933U))));
}
