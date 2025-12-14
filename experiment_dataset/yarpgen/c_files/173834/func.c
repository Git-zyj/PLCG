/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173834
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
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_12))));
    var_15 *= ((/* implicit */unsigned char) var_8);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = var_12;
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_3 = 2; i_3 < 9; i_3 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_4] [6] [i_2 + 1] [i_1] [i_0])) && (((/* implicit */_Bool) arr_12 [i_4] [i_3 + 1] [i_0] [i_1] [i_0]))));
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_4] [4]))) >= (1140275817295478737LL))))));
                        arr_14 [(signed char)2] [i_4] [(signed char)2] [i_3 + 1] [i_4] [i_3 + 1] |= ((/* implicit */signed char) var_12);
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1 - 4])) ? (((/* implicit */unsigned long long int) (~(2210205298U)))) : (arr_0 [i_1 - 4] [i_1]))))));
                        var_19 = ((/* implicit */signed char) ((long long int) arr_5 [i_2 - 2]));
                    }
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                    {
                        arr_17 [i_2] = ((var_9) + (((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_2 - 2] [i_2 - 2] [i_3 + 2])));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_1 - 4])) - (((/* implicit */int) arr_7 [i_0] [i_0] [i_5] [i_5])))))));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) 2210205273U))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
                    {
                        var_22 = ((((/* implicit */int) arr_12 [i_3 + 2] [i_2 + 2] [(unsigned char)11] [i_6] [i_6])) ^ (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [4U] [i_2 - 2])));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (-((+(2084761997U))))))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 4194559830U)) : (var_6))))))));
                    }
                    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1 - 4] [(short)1] [(short)1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2210205310U))))))));
                    var_26 ^= ((/* implicit */unsigned long long int) arr_19 [(short)6] [i_1] [i_1 - 4] [i_1] [i_1] [i_1] [(short)6]);
                }
                arr_21 [i_2] [2LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)62))) / (2210205298U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (-1LL) : (arr_19 [i_2] [i_2] [i_1 - 1] [i_0] [i_0] [i_2] [8ULL])))) : (var_3)));
            }
            for (short i_7 = 3; i_7 < 11; i_7 += 3) 
            {
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_0]) : (arr_5 [i_0]))))));
                var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (arr_0 [i_1 - 4] [i_0])))))))));
            }
            for (long long int i_8 = 2; i_8 < 11; i_8 += 1) 
            {
                var_29 ^= ((/* implicit */signed char) arr_18 [9U] [i_0] [i_0] [i_0] [i_8]);
                var_30 = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0])))) - (((/* implicit */int) (short)-22973))));
            }
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)52))) ^ (2084761968U))))));
            var_32 = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_1] [i_1 + 1] [i_1] [i_1])) & (((/* implicit */int) arr_23 [i_1]))));
            var_33 -= ((/* implicit */long long int) (unsigned char)184);
        }
        arr_27 [(signed char)6] = ((((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_1)))) / (((/* implicit */int) (unsigned char)52)));
    }
}
