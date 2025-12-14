/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12028
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
    for (int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_19 = (((-2147483647 - 1)) + (((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_2 [i_0] [i_0 + 1])))));
    }
    for (int i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_2 - 4]))) | (18446744073709551612ULL)))) ? ((-(((/* implicit */int) ((short) 2147483647))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_2] [i_1] [5])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_1] [i_2])) : (var_8)))))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                arr_11 [i_1] [i_1 + 1] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_2 - 3])) ? (var_10) : (((/* implicit */int) arr_3 [i_1 + 2] [i_2 - 3]))))) ? (arr_8 [i_1] [i_1] [i_3] [i_3]) : ((-(max((((/* implicit */unsigned long long int) arr_10 [i_1] [i_3])), (arr_8 [i_1] [i_2 + 1] [i_2] [i_3]))))));
                var_21 = ((/* implicit */unsigned short) max((((/* implicit */int) var_1)), ((~(arr_10 [i_1] [i_2 - 3])))));
            }
            arr_12 [i_2 - 1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_2])) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? ((-2147483647 - 1)) : (arr_10 [i_1] [i_2]))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (var_2) : (((/* implicit */int) arr_9 [i_1 + 3] [i_1 + 2] [i_1]))))))) < (((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_1 + 3])) ? (((1952990519886731073ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)117)))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            arr_15 [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [(short)15])) ? ((+(((/* implicit */int) arr_1 [i_1])))) : (-774319655)));
            arr_16 [i_1 + 2] [i_1] [i_4] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1 + 1]))) <= (7196686764646808984ULL))));
        }
        arr_17 [i_1] [i_1] = ((/* implicit */int) arr_5 [i_1] [i_1] [(unsigned short)15]);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        /* LoopSeq 3 */
        for (int i_6 = 1; i_6 < 15; i_6 += 2) /* same iter space */
        {
            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_6 + 2] [i_6])) ? (1952990519886731048ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 641474619340762701ULL))));
        }
        for (int i_7 = 1; i_7 < 15; i_7 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 3) 
            {
                for (unsigned short i_9 = 1; i_9 < 14; i_9 += 3) 
                {
                    {
                        arr_33 [i_8] [i_7] [i_7] [i_9 + 2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_9 + 2]))) + (16493753553822820542ULL)));
                        var_24 = ((/* implicit */unsigned short) arr_0 [i_5] [i_5]);
                    }
                } 
            } 
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_5] [i_7 + 2] [6ULL] [14ULL]))) : (7892660580318087264ULL)));
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_7 - 1] [i_7])) ? (((/* implicit */long long int) 718924668)) : (arr_0 [i_7 - 1] [i_5])));
            var_27 = ((/* implicit */unsigned short) arr_19 [i_5] [i_5]);
            var_28 = ((/* implicit */unsigned char) 1514385378559912241ULL);
        }
        for (int i_10 = 1; i_10 < 14; i_10 += 2) 
        {
            var_29 += ((/* implicit */int) arr_5 [i_10] [i_5] [i_5]);
            arr_38 [i_10] = ((/* implicit */int) arr_23 [i_10 + 3]);
        }
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)29067)) ? (((/* implicit */int) arr_24 [i_5] [16] [i_5])) : (((/* implicit */int) arr_24 [i_5] [(unsigned char)13] [(unsigned char)13]))));
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_30 [14] [14] [i_5] [i_5])) : (arr_18 [i_5])));
    }
    for (short i_11 = 1; i_11 < 21; i_11 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 4; i_12 < 20; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 2) 
                    {
                        for (short i_15 = 2; i_15 < 18; i_15 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned int) min((var_32), (((((/* implicit */_Bool) arr_45 [i_11 + 1] [i_11 + 1] [i_11 + 1])) ? (arr_44 [i_11 + 1] [i_12] [i_13]) : (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_3 [i_13] [(unsigned short)6])) ? (-774319667) : (((/* implicit */int) (short)32767))))))))));
                                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_54 [19] [i_15] [i_15] [i_15 + 4] [i_15 + 3])) / (((/* implicit */int) arr_54 [i_15] [i_15] [i_15] [i_15 + 4] [i_15 + 3]))))) ? (((/* implicit */long long int) arr_4 [i_12])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_6 [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_15] [i_12] [i_13])))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)251))))) : (arr_0 [i_15 - 1] [i_15 - 1])))));
                                arr_55 [i_12] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) arr_1 [i_11 + 1])) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (-1692655119) : (var_12)))))));
                                var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -96721968)) ? (((/* implicit */int) arr_51 [i_13] [i_15 + 3])) : (((/* implicit */int) (short)9883))))) ? (((/* implicit */int) arr_13 [i_14])) : (((/* implicit */int) ((short) arr_3 [i_13] [i_15]))))) * (((/* implicit */int) arr_14 [i_11] [i_12])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 22; i_16 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_17 = 0; i_17 < 22; i_17 += 4) 
                        {
                            arr_61 [i_11] [i_12] [i_13] [i_16] [i_17] [9ULL] [i_11] = ((/* implicit */unsigned char) var_9);
                            var_35 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_60 [i_17] [i_16] [i_16] [i_12 - 1] [i_11])) ? (var_14) : (443298759)));
                            var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
                        }
                        for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 3) 
                        {
                            arr_65 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_57 [i_11 + 1] [i_12] [i_12] [(unsigned char)1] [i_18])) ? (arr_50 [i_18] [1] [12] [12]) : (((/* implicit */unsigned long long int) arr_60 [i_11] [2U] [i_12] [16ULL] [i_18]))))));
                            arr_66 [i_13] [i_12] [i_13] [i_16] [i_13] [i_12] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_60 [i_12 - 1] [i_12 - 3] [i_12] [i_12 - 3] [(unsigned short)12])) ? (376457125616654284ULL) : (((/* implicit */unsigned long long int) arr_60 [i_12] [i_12 - 4] [i_12] [i_12 - 1] [i_16]))));
                            arr_67 [i_11] [i_11] [i_12] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_41 [i_12]))) ? (((((/* implicit */_Bool) arr_51 [i_11] [i_12])) ? (((/* implicit */int) arr_43 [i_12])) : (((/* implicit */int) var_9)))) : (arr_49 [i_11 - 1] [i_12] [(unsigned short)3] [(unsigned char)6] [(unsigned short)12] [i_16])));
                            var_37 = ((/* implicit */int) var_13);
                            arr_68 [i_12] [(short)14] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)60634)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_11] [i_12]))) : (arr_44 [i_11] [i_11 + 1] [i_11])));
                        }
                        for (unsigned short i_19 = 0; i_19 < 22; i_19 += 4) 
                        {
                            var_38 += ((((/* implicit */int) (unsigned short)36469)) >> (((arr_53 [i_19] [i_19]) + (2111228369))));
                            arr_72 [1U] [i_12] [i_12] [i_13] [i_13] [i_16] [i_12] = ((/* implicit */int) var_7);
                        }
                        var_39 *= ((/* implicit */short) ((int) arr_43 [i_16]));
                    }
                    for (int i_20 = 1; i_20 < 18; i_20 += 2) /* same iter space */
                    {
                        arr_76 [i_11 - 1] [i_11] [i_11] [i_11] [i_12] [(unsigned short)9] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_7 [i_12 + 1] [i_12 + 1] [i_12 + 1])) ? (arr_7 [i_11 - 1] [i_13] [6ULL]) : (arr_7 [i_20 + 2] [i_13] [i_11 - 1]))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65082))))) ? (arr_57 [i_20 + 4] [i_13] [i_13] [i_13] [i_12 - 3]) : (945088095)))));
                        var_40 = 376299546;
                    }
                    for (int i_21 = 1; i_21 < 18; i_21 += 2) /* same iter space */
                    {
                        var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((2026522599) <= (((((/* implicit */_Bool) (+(((/* implicit */int) (short)31744))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) >= (arr_42 [i_11])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_11] [21] [1] [i_21] [i_12] [i_13])) && (((/* implicit */_Bool) var_11))))))))))));
                        arr_79 [i_11 - 1] [i_21] [i_13] [i_11] [i_12] [i_21] = ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) arr_44 [i_12] [i_13] [i_21])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_54 [i_21 - 1] [i_13] [9U] [i_11] [i_11 - 1])))), (((((/* implicit */_Bool) arr_69 [i_13] [i_21 + 4] [i_21 + 4] [i_11] [i_12 - 3] [i_12] [i_11 + 1])) ? (var_11) : (2147483644)))))));
                    }
                    for (int i_22 = 1; i_22 < 18; i_22 += 2) /* same iter space */
                    {
                        var_42 *= ((/* implicit */int) ((((/* implicit */_Bool) (((~(var_14))) / (((((/* implicit */_Bool) var_3)) ? (-718924680) : (((/* implicit */int) arr_70 [i_11] [i_11] [i_12] [i_13] [i_13] [i_13] [i_13]))))))) || (((/* implicit */_Bool) arr_5 [i_11 - 1] [i_13] [i_13]))));
                        arr_82 [i_11] [i_12] [i_11] [i_12] = ((/* implicit */unsigned char) ((arr_57 [i_11 - 1] [i_12] [i_13] [i_22] [i_22]) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775801LL)) ? (((/* implicit */unsigned long long int) arr_7 [i_11] [i_13] [i_13])) : (arr_6 [(unsigned short)1] [i_22])))) ? (((/* implicit */int) (unsigned short)36481)) : (-718924705)))));
                        var_43 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (short)6144)), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [i_12] [i_12] [i_12] [i_12 - 2] [i_12])) ? (((/* implicit */int) arr_81 [i_13])) : (((/* implicit */int) arr_70 [i_11] [i_11] [i_11] [i_11 + 1] [i_11] [i_11] [i_11]))))), (arr_78 [i_12 - 1] [i_11 - 1] [i_11 - 1] [i_22 + 2])))));
                    }
                }
            } 
        } 
        var_44 = ((/* implicit */unsigned char) 786432);
        arr_83 [i_11] = ((/* implicit */unsigned long long int) ((var_14) >> (((((int) var_0)) - (44085)))));
        /* LoopNest 3 */
        for (unsigned int i_23 = 1; i_23 < 20; i_23 += 4) 
        {
            for (unsigned char i_24 = 1; i_24 < 19; i_24 += 3) 
            {
                for (unsigned short i_25 = 0; i_25 < 22; i_25 += 3) 
                {
                    {
                        var_45 = ((/* implicit */short) ((((/* implicit */int) arr_71 [i_11] [i_23] [i_24 + 1] [i_11 - 1] [i_11])) - (((/* implicit */int) ((-718924645) <= (-1652152518))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_26 = 0; i_26 < 22; i_26 += 2) 
                        {
                            var_46 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (2147483647) : (718924685)))) ? (((/* implicit */unsigned int) var_11)) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32752))) : (0U)))));
                            arr_93 [i_24] [i_23] [i_24 - 1] [i_24 + 1] [i_24] [4] = arr_44 [(unsigned short)11] [i_23 + 2] [i_24];
                        }
                    }
                } 
            } 
        } 
    }
    var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) + ((-(var_5)))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) 1973661332)) && (((/* implicit */_Bool) var_5))))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)7)) == (-1230289225)))))) : ((~(((/* implicit */int) (unsigned short)32768))))));
}
