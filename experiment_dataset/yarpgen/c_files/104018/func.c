/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104018
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_20 -= ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 4; i_1 < 14; i_1 += 3) 
    {
        for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                {
                    var_21 += ((/* implicit */unsigned char) min((max((arr_6 [i_3]), (arr_6 [i_1]))), (max((((((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_3])) & (arr_6 [i_1]))), (((/* implicit */int) arr_7 [i_1 - 4] [(short)7] [i_2] [i_3]))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (short i_5 = 4; i_5 < 13; i_5 += 3) 
                        {
                            {
                                var_22 ^= ((/* implicit */short) arr_9 [i_2]);
                                arr_15 [i_5] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned int) -1438548624);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 3; i_6 < 15; i_6 += 3) 
                    {
                        for (short i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_3]))));
                                var_24 = ((/* implicit */short) max((var_24), (arr_1 [i_1] [i_2])));
                                arr_22 [i_1] [i_7] [i_1] [i_1] [i_7] [i_7] [i_1] = ((/* implicit */unsigned long long int) (+(arr_3 [i_1])));
                                var_25 = ((/* implicit */unsigned int) max((((arr_3 [i_1]) != (min((var_9), (((/* implicit */long long int) (short)-29)))))), (((((/* implicit */int) ((unsigned short) arr_18 [i_3]))) < ((+(((/* implicit */int) var_4))))))));
                                var_26 = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_14 [i_6 + 1] [15LL] [i_6])) - (((/* implicit */int) arr_18 [i_1 + 1])))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_14 [i_6 - 3] [i_6] [i_7])) : (((/* implicit */int) arr_14 [i_6 - 2] [i_7] [i_7]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */short) ((int) -1580724434));
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1] [i_3])) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)25460)) && (((/* implicit */_Bool) var_9))))))))));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) > (((/* implicit */int) arr_13 [i_1] [i_1] [i_2] [i_3] [(signed char)12] [(signed char)12]))));
                    }
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        var_30 = ((/* implicit */short) arr_14 [13LL] [i_2] [13LL]);
                        var_31 = ((/* implicit */long long int) var_17);
                        arr_29 [i_1] [i_3] [i_9] [i_2] [i_1] = ((/* implicit */short) ((int) ((((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_1] [i_1])) - (((((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_3])) ? (arr_0 [i_9]) : (((/* implicit */unsigned long long int) var_13)))))));
                        var_32 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_2] [i_3] [10U])) ? (((/* implicit */int) arr_18 [i_1])) : (((/* implicit */int) (signed char)64))))) ? (var_16) : (var_12))), (((/* implicit */long long int) ((unsigned int) max((((/* implicit */int) arr_7 [i_1] [i_1] [(short)0] [i_9])), (var_1)))))));
                    }
                }
            } 
        } 
    } 
}
