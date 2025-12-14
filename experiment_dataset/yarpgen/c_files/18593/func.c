/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18593
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */long long int) 565769255)) : (arr_2 [i_0 + 2] [i_0])));
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_0 - 1] [i_0] = ((/* implicit */signed char) ((unsigned short) ((((var_4) + (9223372036854775807LL))) << (((arr_5 [i_1]) - (7791260612158876646ULL))))));
            var_13 = ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_1 - 1] [i_1]));
            /* LoopSeq 3 */
            for (long long int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((unsigned long long int) arr_2 [i_0 + 3] [i_1 - 1])))));
                var_15 = ((/* implicit */unsigned long long int) var_6);
            }
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
            {
                arr_11 [i_0] [i_0] = ((/* implicit */unsigned int) var_4);
                arr_12 [i_0] [i_1 - 1] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) var_1));
                var_16 += ((long long int) arr_7 [i_0] [10U] [i_3]);
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (-2057038402840655118LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) <= (arr_3 [i_3]))))));
            }
            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
            {
                arr_16 [i_1 - 1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2642406358542450693LL)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_1] [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                /* LoopSeq 3 */
                for (short i_5 = 2; i_5 < 15; i_5 += 2) 
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)3357)) & (arr_19 [i_0] [(unsigned short)12])))) - (arr_10 [i_0] [i_0] [i_4] [i_5 + 1])));
                    var_19 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4] [i_1]))) | (arr_2 [i_0] [12ULL]))) * (((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) arr_7 [i_5] [i_0] [i_0])))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                {
                    var_20 = var_4;
                    arr_23 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) (signed char)-125)))));
                    arr_24 [i_6] [i_0] [i_1] [i_1] [i_0] [(unsigned short)13] = ((/* implicit */unsigned long long int) ((arr_20 [i_0 + 2] [6ULL] [6ULL] [i_0] [i_1 - 1]) / (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) arr_9 [i_7]);
                    arr_27 [i_0] [i_1] [i_0] = ((/* implicit */short) (unsigned char)190);
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        var_22 |= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) (signed char)-125)) / (arr_28 [i_0 + 2] [i_1 - 1] [i_1] [i_0 + 2] [i_7] [i_0 + 2] [i_8]))));
                        var_23 = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
                        var_24 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_7] [i_8])) ? (((/* implicit */int) arr_26 [i_0 + 2] [i_0] [i_0] [i_0 + 2] [i_0] [i_0])) : (((/* implicit */int) (signed char)110))))) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) ((signed char) arr_29 [i_8] [(short)7] [i_1] [i_1])))));
                    }
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (((+(((/* implicit */int) arr_0 [i_0])))) / (((/* implicit */int) arr_22 [i_1] [i_1 - 1])))))));
                        arr_32 [i_0] [i_1] [i_4] [i_7] [i_9] = (!(((/* implicit */_Bool) ((short) -2057038402840655125LL))));
                    }
                    var_26 = (unsigned short)46686;
                }
                var_27 += ((/* implicit */short) ((((/* implicit */int) arr_15 [i_1 - 1] [i_0 + 2] [4ULL] [4ULL])) / (((/* implicit */int) arr_15 [i_1 - 1] [i_0 - 1] [i_0 - 1] [i_4]))));
                arr_33 [i_0] [i_1 - 1] [i_4] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 2861576001U))));
            }
            arr_34 [i_0] = (((!(((/* implicit */_Bool) arr_7 [i_1 - 1] [i_0] [i_0 + 3])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [14LL])))))) : (arr_20 [i_0] [i_0] [i_1 - 1] [i_0] [i_1]));
        }
        for (short i_10 = 1; i_10 < 14; i_10 += 3) 
        {
            arr_37 [i_0] [i_0] [i_10 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((((/* implicit */int) var_10)) + (80))) - (31)))));
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-29075)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)50206)))))));
            arr_38 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_10])) + (2147483647))) << (((arr_28 [i_0] [i_0] [i_0] [i_10] [i_10] [i_10] [i_10]) - (898516423)))))) && (((/* implicit */_Bool) arr_35 [i_10 + 1] [i_0 + 3]))));
        }
        for (unsigned char i_11 = 0; i_11 < 16; i_11 += 2) 
        {
            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)52859)) ? (0U) : (4294967295U))))));
            arr_41 [i_0] = ((/* implicit */unsigned short) ((_Bool) arr_13 [i_0 + 1] [i_0 + 1]));
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 3) 
            {
                var_30 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_7 [i_12] [i_0] [i_0]))));
                var_31 = ((/* implicit */int) ((1U) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)3357)) >= (((/* implicit */int) (unsigned short)16384))))))));
                arr_45 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_11]);
            }
        }
    }
    var_32 = ((/* implicit */unsigned char) var_9);
    var_33 = ((/* implicit */signed char) var_1);
    var_34 ^= var_11;
}
