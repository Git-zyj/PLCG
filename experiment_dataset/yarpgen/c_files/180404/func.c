/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180404
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
    var_16 += ((/* implicit */short) var_13);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-17)) ? (((/* implicit */long long int) ((/* implicit */int) (short)5))) : (0LL)));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)18))) : (-23LL)));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -13LL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)0))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_1]))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) 4294967276U);
            var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_2 - 1]))) * (arr_6 [i_2 - 1] [i_2 - 1])));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                var_21 = (i_3 % 2 == 0) ? (((arr_14 [i_3]) << (((arr_14 [i_3]) - (654228340U))))) : (((arr_14 [i_3]) << (((((arr_14 [i_3]) - (654228340U))) - (106447976U)))));
                var_22 *= ((/* implicit */unsigned int) -15);
            }
            for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 3; i_6 < 14; i_6 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        var_23 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_1] [i_3 - 1] [i_5 + 2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (arr_1 [i_1] [i_3 - 1])));
                        var_24 *= ((/* implicit */unsigned long long int) ((((0LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))))) ? (((/* implicit */int) ((short) (short)-17))) : (((/* implicit */int) var_6))));
                        var_25 += ((/* implicit */short) (~(((/* implicit */int) (signed char)-10))));
                        arr_26 [i_3] [i_3] [i_5] [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_8 [i_1] [i_3] [i_1])))) | (((((/* implicit */int) var_10)) | (((/* implicit */int) var_3))))));
                    }
                    for (short i_8 = 1; i_8 < 14; i_8 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (_Bool)1))));
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_3] [i_8 + 1])) ? (((/* implicit */int) arr_17 [i_1] [i_3] [i_3] [i_1])) : (((/* implicit */int) arr_2 [i_1]))));
                    }
                    for (short i_9 = 1; i_9 < 14; i_9 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-20))) - (((((/* implicit */_Bool) arr_22 [i_1] [i_3] [i_5] [i_6] [i_6] [i_6])) ? (arr_1 [i_1] [i_3 - 1]) : (((/* implicit */long long int) arr_0 [i_1] [i_3]))))));
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_9 - 1] [i_3] [i_5] [i_5 + 1])) != (((/* implicit */int) arr_15 [i_9 + 1] [i_3] [i_9] [i_5 + 1]))));
                    }
                    arr_33 [i_1] [i_3] [i_5 + 1] [i_6 - 1] [i_6 - 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((14) >= (((/* implicit */int) arr_18 [i_1] [i_1] [i_3] [i_5] [i_5] [i_6 - 1])))))));
                    var_30 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)0))));
                    /* LoopSeq 3 */
                    for (long long int i_10 = 1; i_10 < 14; i_10 += 3) /* same iter space */
                    {
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10] [i_10 - 1] [i_10 + 1])) % (((/* implicit */int) (_Bool)1)))))));
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (0LL)))) || ((!(((/* implicit */_Bool) arr_9 [10LL] [i_3])))))))));
                        arr_38 [i_1] [i_3 - 1] [i_5 + 1] [i_6] [i_3] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_3])) / (((/* implicit */int) var_1))))) * (((((/* implicit */_Bool) var_9)) ? (arr_1 [i_3 - 1] [i_10]) : (((/* implicit */long long int) arr_14 [i_3]))))));
                        var_33 = ((((-1LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_10] [i_3] [i_3] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_5 + 2] [i_5 + 2]))));
                    }
                    for (long long int i_11 = 1; i_11 < 14; i_11 += 3) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_1] [i_3] [i_3] [i_6 - 1] [13U] [i_11])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) ? (((arr_21 [i_3] [i_3] [i_5] [i_6 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_11] [i_3] [i_3] [i_1])) ? (((/* implicit */int) var_11)) : (arr_36 [i_1] [i_3] [i_3] [i_5 + 2] [i_6 + 1] [i_11]))))));
                        var_35 = ((/* implicit */unsigned short) (signed char)0);
                    }
                    for (long long int i_12 = 1; i_12 < 14; i_12 += 3) /* same iter space */
                    {
                        var_36 = ((/* implicit */long long int) min((var_36), (((((/* implicit */long long int) (+(((/* implicit */int) (short)16))))) / (var_14)))));
                        var_37 ^= ((/* implicit */long long int) arr_8 [(short)8] [2] [2]);
                        var_38 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_1] [i_3] [i_5] [i_3 - 1])) | (((/* implicit */int) arr_41 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_5 + 2] [i_6 - 1]))));
                        var_39 = ((/* implicit */long long int) ((((arr_19 [i_1] [i_5] [i_6] [i_12]) | (((/* implicit */unsigned int) arr_13 [(short)5])))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [(short)3] [i_3] [i_6] [i_3])) ? (-1) : (((/* implicit */int) arr_20 [i_3])))))));
                    }
                    arr_45 [i_1] [i_3] [i_1] [i_5] [i_6 + 1] = ((/* implicit */unsigned char) 18446744073709551598ULL);
                }
                var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (short)0))) ? (((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (0ULL))) : (((/* implicit */unsigned long long int) var_7))));
                var_41 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_1] [i_3 - 1] [i_3 - 1] [i_3]))) == (arr_42 [i_5] [i_3] [i_3 - 1] [(signed char)7] [i_1]))))) / (((((/* implicit */_Bool) arr_13 [i_1])) ? (var_0) : (0U)))));
                arr_46 [i_3] [i_3] [i_1] [i_3] = (short)4;
                arr_47 [i_1] [i_5] [i_5 + 3] [i_3] = ((/* implicit */signed char) (((~(((/* implicit */int) var_1)))) & (((/* implicit */int) var_1))));
            }
            var_42 = ((/* implicit */unsigned int) var_12);
            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551598ULL)) ? (((/* implicit */int) (short)16)) : (((/* implicit */int) (short)-3))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_2 [i_3 - 1])))))));
            arr_48 [i_3] [i_3] = (-(((((/* implicit */_Bool) arr_31 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (0U))));
        }
        var_44 += ((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
    }
    var_45 = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))))), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_14)))));
}
