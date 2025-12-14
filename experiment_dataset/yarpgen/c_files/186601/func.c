/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186601
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
    var_11 = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) 0U)) ? (var_0) : (((/* implicit */unsigned long long int) var_7)))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) var_10)))));
            arr_6 [i_0] [i_0] &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 24U)))) ? (arr_0 [i_1 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (unsigned char)251))) || (((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) arr_1 [i_1 - 1])))))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) var_7))));
                var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-112)) || (((/* implicit */_Bool) 4294967295U)))) || (((/* implicit */_Bool) arr_8 [i_0] [i_1 - 1] [i_2]))));
            }
            /* vectorizable */
            for (short i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
            {
                var_14 &= ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551603ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((~(arr_13 [i_0] [i_0])))));
                arr_14 [i_0] [i_3] = ((/* implicit */unsigned short) var_0);
                arr_15 [i_0] [i_3] = (+(((/* implicit */int) var_6)));
            }
            for (short i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    arr_21 [i_0] [i_4] [i_4] [i_5] = ((/* implicit */int) min((arr_7 [i_0]), (((/* implicit */unsigned char) ((arr_13 [i_0] [i_1]) < (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [(unsigned char)17] [i_0] [i_0]))) : (arr_8 [i_0] [i_0] [2LL]))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 2; i_6 < 22; i_6 += 3) 
                    {
                        var_15 |= ((8861495269457360189ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)198))));
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)183)) ? (-10668834946312090LL) : (((/* implicit */long long int) 14U)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_28 [i_0] [i_0] [i_1 - 1] [i_4] [i_1 - 1] [i_4] [i_7] = ((/* implicit */unsigned short) var_2);
                        arr_29 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((4294967267U) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                }
                /* vectorizable */
                for (long long int i_8 = 1; i_8 < 22; i_8 += 2) 
                {
                    var_17 = arr_0 [i_1 + 1];
                    /* LoopSeq 3 */
                    for (short i_9 = 0; i_9 < 23; i_9 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_36 [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1])) || (((/* implicit */_Bool) var_7)))))));
                        var_19 = ((((/* implicit */_Bool) arr_17 [i_1 - 1] [i_8 - 1])) ? (((/* implicit */int) arr_17 [i_1 - 1] [i_8 + 1])) : (var_1));
                    }
                    for (long long int i_10 = 0; i_10 < 23; i_10 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((int) arr_33 [i_0] [i_8] [i_8 - 1] [i_10])))));
                        arr_40 [i_0] [(short)13] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_36 [22LL] [i_1] [i_4] [i_8] [(unsigned char)10]);
                    }
                    for (long long int i_11 = 0; i_11 < 23; i_11 += 2) /* same iter space */
                    {
                        var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_41 [i_0] [(short)17] [i_4] [i_8] [i_11]))))) ? (((/* implicit */int) arr_42 [i_1 - 1] [i_1] [i_4] [i_8] [i_8 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (short)6868)))))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_30 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) (_Bool)1))));
                    }
                    arr_45 [i_8 + 1] [i_8] [i_8] [i_8 - 1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_30 [i_1 - 1] [(signed char)19])) || (((/* implicit */_Bool) arr_36 [i_1 + 1] [i_8] [i_8 - 1] [i_8] [i_8 + 1]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 0; i_12 < 23; i_12 += 1) 
                    {
                        arr_49 [i_0] [(unsigned char)9] [i_12] [i_0] [i_0] = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 4294967273U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_16 [(unsigned short)19] [i_1 + 1])));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_0))));
                    }
                }
                var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -2147483645)) ? ((-(((/* implicit */int) (signed char)-2)))) : (((((/* implicit */_Bool) arr_22 [(_Bool)1] [i_1 + 1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (var_1))))) % (((/* implicit */int) arr_31 [i_1]))));
                var_25 &= ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_2 [i_1 + 1]), (arr_2 [i_1 - 1])))) == (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)14)) ? (arr_47 [i_0] [i_0] [i_0] [i_4] [6U]) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0]))))))))));
            }
        }
        arr_50 [i_0] [i_0] = ((((((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_6)))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
}
