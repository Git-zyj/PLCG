/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113950
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) >= (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) max((var_6), (var_6)))))))));
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_3))))), (((unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_2))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))))))))));
    var_12 = ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) ((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_7)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)255)), (559712054U)))) : (arr_1 [i_0] [(short)5])));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [1ULL]);
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
        {
            arr_9 [i_1] = ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) 1027491900U)) : (14735221048215058760ULL));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_3 = 1; i_3 < 9; i_3 += 3) 
            {
                arr_12 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_7 [i_3 + 3]);
                /* LoopSeq 4 */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    var_14 -= ((/* implicit */unsigned int) var_5);
                    var_15 = ((((arr_0 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_2]))))) >> (((((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) - (15453249867582112571ULL))));
                }
                for (unsigned char i_5 = 3; i_5 < 11; i_5 += 1) 
                {
                    arr_17 [i_1] [i_5] = ((/* implicit */signed char) ((unsigned long long int) arr_14 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 1]));
                    arr_18 [i_1] [i_2] [i_3] [i_1] [5U] [(short)5] = ((/* implicit */unsigned int) var_8);
                }
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                {
                    arr_22 [i_2] [i_3 - 1] [i_3 - 1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1])) >= (((/* implicit */int) arr_19 [i_1] [3U] [(signed char)8] [(signed char)8] [i_6] [(short)3])))))) * (((((/* implicit */_Bool) arr_13 [i_1] [i_1])) ? (arr_2 [i_3]) : (arr_2 [i_1]))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_3 + 3] [i_6]))))) ? (arr_16 [i_3 + 2] [i_3] [i_3] [i_3] [i_3 + 3] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_1] [8ULL] [8ULL] [i_1] [i_1] [i_1]))))))));
                    arr_23 [i_1] [i_1] [i_3] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_3] [i_6] [i_2] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((arr_11 [(short)4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_2]))))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
                {
                    var_17 *= ((signed char) arr_20 [i_3] [i_3 + 1] [i_3 - 1]);
                    arr_27 [i_7] [i_3] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [(unsigned char)10] [i_3 + 2] [(unsigned char)10] [i_3 + 2] [i_3 + 3] [i_3 + 3])) + (((/* implicit */int) arr_21 [i_2] [i_3 + 1] [i_3 + 3] [i_3] [i_3 + 1] [i_3 + 2]))));
                    arr_28 [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (8883987092114799499ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_7])))))) ? (5245006101969914510ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((3267475395U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))))));
                    arr_29 [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1]))) != (arr_15 [i_1] [i_2] [i_3] [i_7]))))) : (((unsigned int) arr_8 [i_2]))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)62)) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))) < (1027491900U))))));
                    arr_33 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_6)) ? (arr_16 [i_8] [i_3] [i_3] [i_3] [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [3U] [i_1]))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-116)))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        arr_36 [i_9] [i_8] [i_3 - 1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)180))) <= (9430581588301456713ULL)));
                        var_19 = ((/* implicit */unsigned char) ((short) (+(((/* implicit */int) arr_21 [i_1] [i_8] [i_8] [i_9] [i_2] [i_3 - 1])))));
                        var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_26 [i_3] [i_3] [i_3 - 1] [i_3 + 2])) > (arr_16 [i_3] [i_3 - 1] [i_3] [i_3] [i_3 + 1] [i_3 + 1])));
                    }
                    for (unsigned int i_10 = 4; i_10 < 10; i_10 += 3) 
                    {
                        arr_39 [i_8] [i_8] [i_10] [i_8] [(short)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_5 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_2] [i_2] [i_1] [i_2] [i_8])))))) ? (((/* implicit */int) arr_19 [i_10 - 4] [i_2] [i_3 - 1] [i_8] [i_3 + 1] [i_2])) : (((/* implicit */int) ((arr_26 [i_1] [i_1] [i_1] [i_1]) > (arr_31 [i_1] [i_2] [i_3] [i_1] [i_1]))))));
                        arr_40 [i_1] [i_1] [i_3] [2U] [i_10 + 2] [i_2] [i_3 - 1] = ((short) arr_25 [i_3] [i_3 - 1] [i_3 + 2] [i_3] [i_3]);
                        var_21 = ((/* implicit */unsigned int) ((unsigned char) ((arr_24 [i_1] [i_1] [i_1] [i_3 + 3] [i_8] [3ULL]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_10 - 3]))))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        arr_44 [i_8] [(short)11] [i_3] [9ULL] [i_1] = ((/* implicit */signed char) ((unsigned long long int) (signed char)11));
                        arr_45 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_3 + 3] [i_3 + 2] [i_3 + 2])) / (((/* implicit */int) arr_6 [i_1] [2ULL]))));
                    }
                    arr_46 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_8]))) / (arr_16 [i_1] [i_2] [i_2] [i_8] [i_2] [i_2]))))));
                }
                for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_1] [i_2] [i_2] [i_3] [i_12])) / (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (short)-28212)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_11 [i_3 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_1] [i_1] [i_3 + 2] [i_12])))))));
                    arr_49 [i_1] [10U] = ((/* implicit */short) ((((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_3 + 1] [i_3 + 2] [i_12])) * (((/* implicit */int) ((arr_10 [i_1] [i_2] [i_3 + 2] [i_12]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                    arr_50 [i_1] [i_2] [i_3] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3 + 3])) ? (arr_0 [i_3 - 1]) : (arr_0 [i_3 + 3])));
                    var_23 = ((/* implicit */short) ((unsigned int) arr_34 [i_3 + 3]));
                }
            }
            for (unsigned int i_13 = 0; i_13 < 12; i_13 += 1) 
            {
                arr_54 [i_1] [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_2] [i_13] [i_13])) ? (arr_26 [i_2] [i_2] [i_2] [i_2]) : (arr_24 [i_1] [i_2] [i_2] [i_2] [i_13] [i_13])))));
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        {
                            arr_61 [i_14] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_1] [i_2] [i_13] [(unsigned char)1] [i_15])) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (arr_51 [i_1] [i_14]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_2 [i_15]) : (arr_48 [i_1] [i_2])))) ? (max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_2])), (arr_10 [i_1] [i_2] [i_14] [i_15]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_1] [i_2])) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (((/* implicit */int) var_1))))))));
                            arr_62 [i_1] [i_1] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_34 [i_13])) ? (arr_11 [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))) : (arr_34 [i_13]))) <= (((((/* implicit */_Bool) ((((/* implicit */int) arr_60 [i_1] [i_1] [i_2] [i_13] [i_13] [i_13] [i_15])) - (((/* implicit */int) arr_58 [i_15] [i_14] [i_14] [i_13] [i_1] [6U] [i_1]))))) ? (((/* implicit */unsigned long long int) max((arr_41 [i_1] [i_13] [i_14]), (arr_0 [i_14])))) : (((((/* implicit */_Bool) arr_14 [i_14] [i_2] [i_14] [i_14])) ? (arr_34 [i_15]) : (arr_48 [i_14] [i_2])))))));
                            var_24 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_58 [i_1] [i_1] [i_2] [i_13] [i_2] [8ULL] [i_15]))))));
                            arr_63 [i_1] [i_1] [i_1] [(unsigned char)7] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_57 [i_1] [i_1] [i_14] [i_13] [i_1] [i_2] [i_1])), (arr_1 [i_1] [i_2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_1] [i_2] [i_14])) ? (((/* implicit */int) arr_19 [i_1] [6ULL] [i_13] [i_1] [i_15] [i_1])) : (((((/* implicit */_Bool) arr_32 [i_13] [i_2])) ? (((/* implicit */int) arr_38 [i_1])) : (((/* implicit */int) arr_38 [i_1]))))))) : (min((((((/* implicit */_Bool) arr_35 [i_13] [i_13])) ? (arr_34 [i_13]) : (var_7))), (((((/* implicit */_Bool) var_8)) ? (arr_34 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_15] [i_13] [i_13] [i_13] [i_2] [i_2] [5U]))))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_16 = 0; i_16 < 12; i_16 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned char)128))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_26 [i_1] [i_16] [i_1] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_16]))) : (arr_11 [i_1]))) << (((((/* implicit */int) max((var_1), (arr_64 [i_1] [7ULL] [i_16])))) + (22535)))))))))));
            arr_68 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (arr_15 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_1] [i_16] [i_16] [i_16] [i_16]))) : (arr_37 [i_1] [i_1] [i_1] [i_16] [i_1])))) || (((/* implicit */_Bool) min((arr_26 [i_1] [i_1] [i_16] [i_16]), (((/* implicit */unsigned int) arr_4 [2ULL] [2ULL])))))))))));
            arr_69 [i_1] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_43 [i_16] [i_16] [i_1] [i_1])) >> (((((/* implicit */int) arr_43 [i_1] [i_16] [i_16] [i_16])) - (41)))))) & (((((/* implicit */_Bool) arr_42 [i_1] [i_1] [i_16] [i_16] [i_16] [i_16])) ? (arr_1 [i_1] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))))));
            arr_70 [i_16] [i_1] |= (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)12)) ? (6634485257132770045ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)97)))))) ? (min((arr_32 [i_1] [i_16]), (((/* implicit */unsigned long long int) (signed char)-1)))) : (max((9174156559143030654ULL), (5158263374684290157ULL))))));
        }
        arr_71 [i_1] = ((/* implicit */unsigned char) (-(((((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) 1027491900U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_8 [i_1])), (arr_30 [i_1] [i_1] [i_1] [i_1]))))) : (arr_56 [i_1] [i_1] [(signed char)10] [i_1])))));
    }
}
