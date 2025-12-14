/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156980
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
    var_17 = ((/* implicit */unsigned long long int) (-(min((max((((/* implicit */unsigned int) (unsigned char)255)), (4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_15)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_0 - 1])))))) : ((+(arr_0 [i_0 - 1] [i_1 + 1]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_0] = ((/* implicit */unsigned char) (!((_Bool)1)));
                    var_19 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)0)))) <= (0ULL)));
                    arr_8 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18))) : (arr_3 [i_1 + 1] [i_0 - 1] [i_2])));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_1] [i_1 - 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) (unsigned char)248)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14295900396069753915ULL)) ? (11U) : (((/* implicit */unsigned int) arr_6 [i_3] [i_2] [i_0] [i_0])))))));
                        arr_14 [i_0] [(_Bool)1] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (arr_11 [i_1 + 1] [i_1 + 1]) : (arr_11 [i_1 - 1] [i_1 + 1])));
                    }
                    for (int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        arr_18 [i_0] [i_0 - 1] [i_0] = ((_Bool) ((unsigned short) (-9223372036854775807LL - 1LL)));
                        var_20 = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                    }
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0] [(unsigned short)2] [i_0]))));
                            arr_23 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)39)) ? (((((/* implicit */_Bool) 7111308697239939824ULL)) ? (18409331510670249971ULL) : (arr_19 [i_0] [i_1] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551613ULL))))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_22 += ((/* implicit */long long int) ((unsigned int) arr_16 [i_0 - 1] [i_0 - 1] [i_1 - 1]));
                            arr_28 [i_1] [i_5] [i_7] = ((/* implicit */signed char) 8796093022208ULL);
                            var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)1023))));
                            var_24 = ((/* implicit */signed char) (unsigned short)64513);
                            arr_29 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] |= ((/* implicit */unsigned long long int) (short)-19150);
                        }
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            arr_32 [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned short)8196)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_0] [i_1] [i_2] [i_5] [i_8] [i_5] [i_5]))))) : (((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 - 1] [i_2])) ? (arr_17 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [(_Bool)1] [i_8]))))));
                            var_25 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (var_12))))));
                            var_26 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2032)) ^ (((/* implicit */int) (unsigned short)19581))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (((arr_24 [i_0] [(short)15]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)))));
                            arr_33 [i_8] [i_1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                            var_27 = ((/* implicit */unsigned int) ((long long int) (unsigned char)216));
                        }
                        for (int i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            var_28 = ((/* implicit */long long int) ((((/* implicit */int) arr_31 [11U] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) | (((/* implicit */int) (unsigned short)2022))));
                            arr_36 [i_0] [i_1] [i_2] [i_5] [(unsigned char)1] = ((/* implicit */unsigned short) ((arr_35 [i_0 - 1] [i_0 - 1]) * (arr_11 [i_0] [i_1 + 1])));
                            var_29 = arr_20 [i_9] [i_5] [i_0];
                            var_30 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (-1428511253)))));
                        }
                        arr_37 [i_0] [i_1] [i_2] [i_5] [i_1 - 1] [i_2] = ((/* implicit */int) (!((!(var_15)))));
                        /* LoopSeq 3 */
                        for (signed char i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            var_31 = ((/* implicit */long long int) ((signed char) arr_10 [i_0] [i_1 - 1] [(signed char)12] [i_5] [i_10]));
                            var_32 += ((/* implicit */int) (-(arr_17 [i_0 - 1])));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
                        {
                            arr_44 [i_11] [i_11] = ((/* implicit */short) ((unsigned long long int) arr_30 [i_0] [i_1 + 1] [i_0 - 1] [i_5] [i_1 + 1] [i_0]));
                            var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)63480))));
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)16)) | (((/* implicit */int) (signed char)-1))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 1) /* same iter space */
                        {
                            arr_47 [i_12] [i_12] [i_2] [i_5] [i_5] [i_12] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) | (arr_27 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_35 = ((/* implicit */long long int) (~(var_6)));
                            var_36 = var_6;
                        }
                    }
                }
                var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)199))) | (max((max((arr_25 [i_0] [i_1] [i_1] [i_1 + 1] [i_0 - 1] [i_0] [i_0]), (((/* implicit */long long int) (unsigned short)65526)))), (((/* implicit */long long int) (unsigned short)7)))))))));
            }
        } 
    } 
    var_38 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (max((var_2), (((/* implicit */unsigned int) (unsigned char)188)))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)54127), (((/* implicit */unsigned short) (_Bool)0))))))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    var_39 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) > (max((1292542205484216437ULL), (((/* implicit */unsigned long long int) (unsigned short)61606)))))) ? (((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) var_5)))) : (((((/* implicit */int) (short)4819)) - (((/* implicit */int) (unsigned char)99)))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61609))))), ((-(((/* implicit */int) (signed char)52))))))));
    var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) (+(((((/* implicit */int) (signed char)2)) - (((/* implicit */int) (unsigned short)15316))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96))) * (((((/* implicit */_Bool) (unsigned short)3079)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
}
