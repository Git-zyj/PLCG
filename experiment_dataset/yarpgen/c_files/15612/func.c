/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15612
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
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)43940)) <= (((/* implicit */int) (short)32740))))) : ((~(-2147483645))))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            arr_7 [i_1] [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) (short)32760)) <= (((/* implicit */int) (signed char)-121))))), (((((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0])) ? (((/* implicit */int) ((var_1) < (((/* implicit */int) (short)32767))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) >= (5U))))))));
            var_17 = ((/* implicit */signed char) (((+(arr_1 [i_0 - 3] [i_1]))) < (((((/* implicit */_Bool) (unsigned short)0)) ? (3129600279U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20446)))))));
            arr_8 [i_0 - 1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_4 [i_0 + 3] [i_0]))) <= (((((/* implicit */int) var_12)) * (((/* implicit */int) ((var_13) < (((/* implicit */unsigned long long int) arr_1 [19U] [i_1])))))))));
        }
        for (unsigned char i_2 = 4; i_2 < 23; i_2 += 4) /* same iter space */
        {
            arr_13 [i_2 - 1] [i_0] [i_0 - 2] = max((((((/* implicit */int) (unsigned short)10)) - (8388096))), (((/* implicit */int) arr_4 [i_0] [i_0])));
            arr_14 [i_0] [i_2] &= ((/* implicit */unsigned long long int) ((short) ((4026531840U) << (((-8388096) + (8388127))))));
            arr_15 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) 1868384194)) / (arr_3 [(_Bool)1] [i_0] [i_2]))))));
            var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_12))));
        }
        for (unsigned char i_3 = 4; i_3 < 23; i_3 += 4) /* same iter space */
        {
            arr_18 [i_3] [(unsigned short)2] [i_3] &= ((((/* implicit */_Bool) 268435441U)) ? (2299340772U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max(((unsigned short)51484), (((/* implicit */unsigned short) var_6))))) == (((/* implicit */int) arr_10 [i_0 - 2])))))));
            var_19 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_0] [i_3]))));
        }
    }
    var_20 = ((/* implicit */unsigned int) ((short) max((var_5), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)22))))))));
    var_21 ^= var_3;
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        for (int i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            {
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 1U)) ? (((((/* implicit */_Bool) 2147483639)) ? (((/* implicit */int) (signed char)57)) : (((/* implicit */int) (signed char)-81)))) : (((/* implicit */int) ((signed char) 361153992)))));
                arr_23 [i_4 + 1] [i_5] [i_4] = (!(((/* implicit */_Bool) (short)-32741)));
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            arr_30 [i_4 - 1] [i_8] [i_4] [i_4 - 1] = ((((/* implicit */int) (short)-32761)) % (((/* implicit */int) var_9)));
                            var_23 = (unsigned short)45089;
                        }
                        arr_31 [9] [(unsigned short)0] [6] [2] [(short)9] [i_5] = ((2U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))));
                    }
                    for (short i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
                    {
                        arr_34 [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [0] [i_5])) || (((/* implicit */_Bool) ((arr_11 [i_4] [i_9]) - (((((/* implicit */_Bool) (unsigned char)63)) ? (2771209626U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(unsigned short)14] [i_5]))))))))));
                        var_24 = ((/* implicit */short) ((long long int) (-(((unsigned int) 991222940U)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 1; i_10 < 6; i_10 += 2) 
                    {
                        arr_38 [i_4] [i_10] [7] = ((/* implicit */short) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_26 [i_6] [i_4] [i_10 + 1] [i_6 - 2]))));
                        var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_29 [i_5]))) ? (((var_14) ? (var_3) : (var_16))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)12005)))))));
                        arr_39 [5U] [i_5] [i_6] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-46)) <= (-1051506505)));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_5]))) / (arr_28 [i_5] [i_10] [i_5] [i_10 - 1] [i_5] [i_10])))) ? (arr_3 [i_4 - 1] [i_5] [i_6 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (1051506499) : (((/* implicit */int) var_15))))))))));
                        arr_40 [4U] [1ULL] [4U] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_10 + 2] [i_10 + 2])) ? (((/* implicit */int) arr_17 [i_10 + 3] [i_10 + 1])) : (((/* implicit */int) arr_17 [i_10 + 4] [i_10 + 3]))));
                    }
                    var_27 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_1))))))));
                }
                for (unsigned short i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    var_28 = ((/* implicit */int) ((unsigned int) arr_27 [i_5] [i_5] [i_11] [5]));
                    /* LoopSeq 2 */
                    for (int i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)65524)), (0U)))) ? (((((/* implicit */_Bool) arr_26 [i_4] [i_4 - 1] [i_4] [i_4])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_4] [i_4] [0] [(short)2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)17791), (((/* implicit */short) (unsigned char)36)))))))))));
                        /* LoopSeq 1 */
                        for (short i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            var_30 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) -1051506503)) <= (arr_43 [i_4] [i_4] [i_4 - 1]))))) <= (((arr_43 [i_4] [i_5] [i_4 + 1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                            arr_48 [0] [i_5] [i_5] [i_5] [5ULL] [i_5] [i_5] = ((/* implicit */_Bool) ((unsigned short) arr_32 [i_4 + 1] [i_4 + 1] [i_11] [i_12]));
                            arr_49 [i_4 - 1] [i_5] [i_11] [i_12] [(signed char)2] [i_5] = ((/* implicit */unsigned long long int) max((arr_9 [(unsigned short)20]), (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))));
                            arr_50 [i_4] [i_5] [i_11] [(signed char)9] [i_5] = ((/* implicit */unsigned int) -2125806725);
                        }
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_53 [i_14] = ((var_1) / (((/* implicit */int) ((short) ((arr_11 [i_4] [i_14]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)73))))))));
                        arr_54 [i_14] [i_11] [i_4] [1U] [(unsigned char)5] [i_4 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_4 + 1] [i_5] [i_11])) ? (((/* implicit */int) arr_17 [i_4 + 1] [8])) : (((/* implicit */int) arr_17 [i_4] [i_4 - 1]))))) - (((((/* implicit */_Bool) ((unsigned char) 2867322572U))) ? ((+(var_5))) : (((arr_24 [i_11] [i_5]) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
                        var_31 &= ((/* implicit */unsigned char) -1870572311);
                        arr_55 [i_4] [i_4 + 1] [i_14] = ((unsigned short) ((max((((/* implicit */unsigned long long int) 722371021)), (18446744073709551615ULL))) != (((/* implicit */unsigned long long int) ((-6468368722552798151LL) % (1121501860331520LL))))));
                    }
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    var_32 = ((/* implicit */unsigned int) ((unsigned short) arr_44 [i_4] [i_5] [i_5] [i_4] [(signed char)7] [(signed char)0]));
                    arr_58 [i_15] [i_5] [(short)4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (3182266782U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                }
                var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_46 [9U] [i_5] [i_5] [i_4] [i_4 + 1] [(unsigned short)6] [(signed char)4])) || (((((/* implicit */int) var_12)) >= (((/* implicit */int) var_11))))))), ((-(((/* implicit */int) arr_4 [i_4 - 1] [i_5])))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_16 = 0; i_16 < 20; i_16 += 4) 
    {
        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_3 [i_16] [i_16] [i_16]), (((/* implicit */unsigned int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((3684964105U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46)))))))) : (arr_3 [i_16] [i_16] [i_16]))))));
        arr_62 [i_16] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_16] [i_16] [i_16]))) | (var_13))) >> (((((((/* implicit */_Bool) var_9)) ? (max((arr_11 [(unsigned short)20] [i_16]), (arr_3 [i_16] [i_16] [(unsigned char)0]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_11))))))) - (3306233645U)))));
    }
}
