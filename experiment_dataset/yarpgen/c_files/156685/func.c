/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156685
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                            {
                                var_16 = ((/* implicit */signed char) ((arr_0 [1ULL]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((max((-5223705552053790022LL), (-2894470100216279842LL))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 254299846))))))))))));
                                arr_11 [i_0] [i_1] [i_2] [i_1] [(unsigned char)7] = ((int) max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0])));
                            }
                            for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] [i_3] [i_3] = ((/* implicit */int) arr_12 [i_5] [i_3] [i_2] [(_Bool)1] [i_0] [i_0] [i_0]);
                                var_17 -= ((/* implicit */short) (~(max((((/* implicit */unsigned int) arr_13 [i_0])), (((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */unsigned int) 816977735)) : (arr_0 [i_3])))))));
                                arr_16 [i_2] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_3] [i_2] [i_2] [i_0] [i_0])) ? (arr_5 [i_2] [(signed char)9] [i_2]) : (((/* implicit */unsigned long long int) arr_1 [i_0])))))), ((((!(((/* implicit */_Bool) var_12)))) ? (min((arr_12 [(signed char)8] [(signed char)7] [(signed char)7] [i_3] [i_3] [1ULL] [i_3]), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((-254299847) % (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))));
                            }
                            arr_17 [15U] [i_1] [(signed char)7] [9U] [i_3] = ((/* implicit */signed char) max((((/* implicit */short) ((-2940092312556708179LL) >= (((/* implicit */long long int) -254299847))))), (arr_2 [i_1])));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_22 [(unsigned char)2] [i_1] [i_6] [i_1] [i_1] [i_0] = ((/* implicit */long long int) 2147483647);
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) 816977737))));
                        arr_23 [i_1] [i_1] [i_6] [i_7] = ((/* implicit */long long int) ((max((((/* implicit */long long int) ((((/* implicit */long long int) arr_13 [i_0])) >= (arr_8 [i_6] [i_6] [i_6] [i_1] [i_1] [i_0])))), (((var_5) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1]))) : (var_3))))) < (((/* implicit */long long int) ((/* implicit */int) min((arr_20 [i_7] [i_1] [i_0]), (arr_20 [i_0] [2ULL] [i_0])))))));
                        /* LoopSeq 2 */
                        for (short i_8 = 0; i_8 < 16; i_8 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((arr_1 [i_7]) - (arr_1 [i_0])))) * ((+((-(arr_10 [i_0] [10LL] [i_6] [i_7] [10U]))))))))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((-254299847), (((/* implicit */int) ((arr_1 [i_1]) >= (((/* implicit */int) arr_21 [i_0] [i_7] [i_6] [i_1] [i_0] [i_0])))))))) & (max((((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) arr_9 [(unsigned short)12] [i_1] [i_0] [(short)12])))))))));
                            var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 816977735)), (5764527303916562961ULL)))) ? (((arr_0 [i_6]) % (((/* implicit */unsigned int) max((2147483647), (((/* implicit */int) (unsigned char)235))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((var_1), (((/* implicit */long long int) (unsigned short)52056)))))))));
                            arr_28 [i_0] [i_0] [i_0] [i_7] [i_1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [(short)15]))) | (arr_25 [(_Bool)1] [i_1] [i_6] [i_6] [i_8] [i_0])))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-15881)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)11))) : (arr_27 [12U] [i_6] [i_6] [(signed char)6]))) << (((max((((/* implicit */long long int) 3578076766U)), (var_14))) - (3578076753LL)))))) : (max((arr_12 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (+(var_1))))))));
                            arr_29 [i_1] [i_1] = ((/* implicit */_Bool) ((min((((/* implicit */int) ((short) 12197428561357790872ULL))), (((((/* implicit */int) arr_14 [i_6] [i_6] [i_1] [i_6] [i_6])) & (((/* implicit */int) (unsigned short)52056)))))) * (((/* implicit */int) ((((/* implicit */int) arr_14 [13ULL] [(signed char)0] [i_1] [i_7] [i_8])) >= (((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_6] [i_0])))))));
                        }
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
                        {
                            var_22 -= ((/* implicit */short) (+(((/* implicit */int) arr_6 [(signed char)9] [5LL] [5LL] [(short)14] [i_9]))));
                            arr_32 [i_1] [i_7] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_27 [i_0] [i_1] [i_0] [i_9]) : (arr_27 [i_0] [(unsigned char)2] [i_0] [i_0])));
                            arr_33 [i_1] [i_9] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (arr_10 [i_0] [i_0] [i_6] [i_7] [i_9])));
                            var_23 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_6] [i_1] [i_6] [i_7] [i_0] [i_7] [i_0]))) : (arr_24 [i_6] [i_1] [i_1])))));
                        }
                    }
                    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
                    {
                        var_24 = ((/* implicit */signed char) 254299826);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            arr_41 [1LL] [i_1] [i_6] [i_1] [(_Bool)1] = var_15;
                            arr_42 [i_1] [(_Bool)1] [i_10] [i_6] [(short)12] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_38 [11U] [i_1] [i_1] [13] [i_6] [13] [i_1])) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_11] [i_1] [i_10] [i_6] [i_6] [i_1] [4U]))))))))) / (min((((((/* implicit */long long int) ((/* implicit */int) (short)15881))) / ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) -816977737))))));
                            arr_43 [14] [i_1] [i_6] [i_6] [10U] [10U] = ((/* implicit */signed char) (((~(arr_1 [i_0]))) >= (((arr_4 [i_0] [i_1] [(unsigned char)6] [i_10]) | (((/* implicit */int) (unsigned short)13470))))));
                        }
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            arr_47 [i_1] [i_10] [i_10] [i_10] [i_10] [i_10] = min((((/* implicit */unsigned int) -254299836)), (4294967295U));
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_12 - 1] [5LL] [i_12 - 1] [i_12 - 1] [i_12 - 1])) || (((/* implicit */_Bool) arr_4 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12]))))) - ((-(arr_4 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1]))))))));
                        }
                        arr_48 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) * (max((((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (signed char)-42)))), (((/* implicit */int) (short)-15886))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_52 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((arr_12 [i_13] [i_1] [i_6] [7LL] [(signed char)4] [i_13] [i_6]) - (((/* implicit */unsigned long long int) arr_46 [9ULL] [i_1] [i_6] [(_Bool)1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1])))))))) ? (arr_46 [i_0] [(unsigned char)14] [(unsigned char)14] [i_0]) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)67)))))));
                        arr_53 [i_1] [i_1] [i_6] [i_1] = ((/* implicit */unsigned char) max((((((((/* implicit */int) arr_2 [i_1])) - (((/* implicit */int) (unsigned char)128)))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_1] [i_13])) && (((/* implicit */_Bool) var_7))))))), (min((2147483647), (((/* implicit */int) var_8))))));
                        arr_54 [i_0] [(_Bool)1] [i_13] [i_13] [i_6] [i_6] |= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [0LL] [i_0] [i_1] [i_6] [i_13])))))));
                        arr_55 [i_0] [i_0] [4LL] [i_1] [i_13] = arr_39 [2LL] [2LL] [i_0] [i_1] [i_1] [(unsigned char)2];
                        /* LoopSeq 2 */
                        for (int i_14 = 0; i_14 < 16; i_14 += 1) 
                        {
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) arr_8 [i_14] [i_14] [i_13] [(short)12] [i_1] [10]))));
                            arr_58 [(short)3] [i_1] [i_6] [i_13] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [i_1] [i_1])) && (((/* implicit */_Bool) arr_44 [i_0] [i_1] [(signed char)10] [i_13]))))), (min((arr_27 [8ULL] [(short)2] [i_6] [i_13]), (((/* implicit */unsigned int) arr_21 [3ULL] [i_1] [i_6] [i_13] [i_13] [i_14]))))));
                        }
                        for (long long int i_15 = 1; i_15 < 15; i_15 += 2) 
                        {
                            var_27 = ((/* implicit */long long int) min((var_27), (((((long long int) ((1899103784U) != (((/* implicit */unsigned int) -2023693013))))) | (arr_57 [i_0] [i_1] [i_15 + 1] [i_13] [(signed char)2])))));
                            arr_62 [(signed char)4] [i_1] [i_1] [i_15 + 1] = ((/* implicit */unsigned long long int) ((((arr_8 [i_15 - 1] [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_15 - 1]) == (((/* implicit */long long int) ((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_15 - 1] [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15 + 1] [i_15 - 1])))))) : (4294967286U)));
                            arr_63 [i_0] [i_1] [i_1] [i_13] [i_15] [i_15 + 1] [i_15] = ((/* implicit */unsigned long long int) max(((~(6646486239942705559LL))), (((/* implicit */long long int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            arr_64 [i_1] [i_1] [11ULL] [(short)2] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) (_Bool)1)), (4294967286U)));
                        }
                    }
                    for (unsigned int i_16 = 0; i_16 < 16; i_16 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (int i_17 = 0; i_17 < 16; i_17 += 3) 
                        {
                            arr_71 [i_1] [i_1] [i_1] [i_6] [i_6] [i_16] [(unsigned char)13] = ((/* implicit */short) ((unsigned int) ((arr_5 [i_16] [i_6] [i_0]) & (arr_5 [i_0] [i_0] [i_0]))));
                            arr_72 [i_0] [i_0] [i_6] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [2ULL] [8LL] [9LL] [13LL] [i_16] [i_17]))) % (var_6)));
                        }
                        for (short i_18 = 2; i_18 < 14; i_18 += 1) 
                        {
                            arr_77 [i_6] [i_6] [i_6] [(unsigned char)0] [i_1] = ((/* implicit */signed char) arr_27 [i_0] [10ULL] [i_6] [i_16]);
                            var_28 ^= ((/* implicit */long long int) max((((/* implicit */int) arr_59 [i_0] [i_1] [i_18 + 2] [i_1])), ((+(((/* implicit */int) (unsigned short)39222))))));
                        }
                        for (signed char i_19 = 0; i_19 < 16; i_19 += 2) 
                        {
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) arr_57 [i_0] [i_1] [10ULL] [(unsigned char)6] [i_19]))))))));
                            arr_80 [(signed char)10] [i_1] [i_6] [(unsigned char)11] [i_1] = ((/* implicit */unsigned int) -6275058574338596189LL);
                            arr_81 [i_1] [i_16] [i_6] [i_0] [i_19] = var_11;
                        }
                        arr_82 [i_1] [i_1] = ((/* implicit */signed char) max((((arr_36 [i_0] [i_1] [i_6]) * (((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_44 [i_0] [i_1] [i_0] [i_0]))))), (((/* implicit */long long int) ((short) arr_24 [i_0] [i_1] [i_1])))));
                    }
                    arr_83 [i_1] [i_1] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_67 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_38 [i_0] [i_0] [i_1] [i_1] [i_1] [i_6] [i_1])) : (((/* implicit */int) ((short) 808008587)))))) ? (arr_27 [i_0] [i_0] [i_0] [i_6]) : ((+(arr_60 [i_0] [i_1] [i_6])))));
                    /* LoopSeq 1 */
                    for (long long int i_20 = 4; i_20 < 13; i_20 += 3) 
                    {
                        arr_87 [i_0] [i_1] [i_6] [(signed char)11] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)0))));
                        arr_88 [i_1] [i_0] [i_1] [i_6] [(signed char)13] = ((/* implicit */unsigned char) var_7);
                        arr_89 [i_0] [(unsigned char)5] [(short)11] [i_20] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_57 [i_1] [i_20] [i_20 - 3] [i_1] [i_1]), (((/* implicit */long long int) (short)-1))))) ? (min((((/* implicit */int) (unsigned char)164)), ((-(-1749521567))))) : (((/* implicit */int) arr_74 [i_0] [i_1] [i_6] [i_20] [i_20] [i_1] [i_6]))));
                        arr_90 [i_1] [3U] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((arr_20 [i_20 - 4] [i_20] [i_20 - 3]), (arr_20 [i_20 - 2] [i_20 + 2] [i_20 - 1])))), (((3065845710199934772ULL) << (((((/* implicit */int) arr_20 [i_20 - 4] [i_20] [i_20 + 1])) + (120)))))));
                    }
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_21 = 0; i_21 < 15; i_21 += 2) 
    {
        for (signed char i_22 = 1; i_22 < 12; i_22 += 1) 
        {
            {
                arr_98 [i_22] = (!(((/* implicit */_Bool) ((unsigned int) arr_60 [i_22] [i_22] [i_22 + 2]))));
                arr_99 [i_22] [i_22] [i_21] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_60 [i_22 + 2] [i_22 + 2] [i_22 + 1])))));
            }
        } 
    } 
    var_30 |= ((/* implicit */signed char) ((short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) > (9223372036854775807LL)))), (2571552113960207521ULL))));
    var_31 = ((/* implicit */short) -2147483647);
}
