/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126105
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
    var_15 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 *= ((/* implicit */unsigned int) ((((0LL) % (((/* implicit */long long int) 1800253579U)))) >= (((/* implicit */long long int) ((/* implicit */int) ((((unsigned int) 1332371457U)) >= (3053114484U)))))));
                var_17 = -9223372036854775786LL;
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_18 = (+(max((((unsigned int) var_10)), (((var_9) + (arr_10 [i_4]))))));
                                var_19 = ((/* implicit */long long int) min((arr_11 [i_0] [i_0] [i_0] [i_0]), (((((/* implicit */_Bool) 1486572041U)) ? (255U) : (511U)))));
                            }
                        } 
                    } 
                    arr_13 [i_2] = 2867926995U;
                    var_20 = ((/* implicit */unsigned int) 6430874621897814524LL);
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                arr_20 [i_5] = ((long long int) arr_12 [i_5 + 3] [i_5 + 2]);
                                arr_21 [i_5] [i_1] [i_2] [i_5] [i_5] = (-(9223372036854775807LL));
                            }
                        } 
                    } 
                    var_21 = ((((/* implicit */long long int) arr_8 [i_0] [i_2] [i_2] [1LL] [i_1] [i_2])) ^ (max((arr_7 [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 + 1]), (arr_7 [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 + 1]))));
                }
                for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 2; i_8 < 13; i_8 += 4) /* same iter space */
                    {
                        arr_29 [3U] [3U] [i_7] [i_7] [11U] [i_7] = max((((((/* implicit */_Bool) 4464163145707910314LL)) ? (1023LL) : (((/* implicit */long long int) 4095U)))), (min((((-9223372036854775799LL) / (((/* implicit */long long int) 3455417587U)))), (((long long int) var_13)))));
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 2] [i_7] [i_8 + 1])) ? (arr_7 [i_0] [i_1 - 1] [9U] [i_8 + 2]) : (arr_7 [2U] [i_1 + 1] [i_7] [i_8 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_1 - 1] [i_1 + 2])) ? (arr_24 [i_1 - 1] [i_1 + 1]) : (arr_24 [i_1 + 2] [i_1 + 2])))) : (((((/* implicit */_Bool) ((unsigned int) -2614476062781449114LL))) ? (arr_26 [i_0] [0LL] [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_0])) ? (arr_11 [i_0] [i_1] [13LL] [i_0]) : (4294967287U)))))));
                    }
                    for (unsigned int i_9 = 2; i_9 < 13; i_9 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [10U])) ? (arr_1 [i_0]) : (-3420376511613736941LL)))) ? (((/* implicit */long long int) (-(arr_24 [11U] [11U])))) : (((long long int) -830365745122342258LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2270423221U)) && (((/* implicit */_Bool) 9223372036854775807LL)))))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) max((-8656619496168696385LL), (((/* implicit */long long int) 2769684683U)))))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_0] [i_7])) || (((/* implicit */_Bool) 8796093022144LL))));
                        var_26 = ((long long int) arr_2 [i_0] [i_0] [i_9]);
                        arr_32 [11U] [i_1 + 1] = ((/* implicit */long long int) ((4294967295U) >> (((((((unsigned int) var_3)) | ((~(arr_19 [i_7]))))) - (1845458394U)))));
                    }
                    var_27 |= ((long long int) ((arr_12 [i_0] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_7])) && (((/* implicit */_Bool) 3882223040U))))))));
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_17 [i_0] [i_1 - 1] [i_1] [i_1 + 2] [i_1 + 2]), (((/* implicit */long long int) arr_24 [i_1] [i_1 - 1]))))) || (((/* implicit */_Bool) (-(((9223372036854775807LL) ^ (arr_2 [i_7] [i_7] [i_7]))))))));
                    var_29 = max((((/* implicit */long long int) min((arr_8 [i_0] [0LL] [3LL] [3LL] [i_0] [i_0]), (arr_8 [i_7] [i_7] [11LL] [i_7] [9LL] [i_7])))), (min((((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) arr_3 [i_7] [i_1] [i_0])) : (2989844369411728508LL))), (((/* implicit */long long int) 183821754U)))));
                }
                for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        var_30 = ((unsigned int) -6018891137731586143LL);
                        var_31 ^= 692532773U;
                    }
                    for (unsigned int i_12 = 1; i_12 < 12; i_12 += 1) 
                    {
                        var_32 ^= 7207040958771891623LL;
                        arr_41 [i_0] [i_1] [i_10] [i_12 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2409643884238240382LL)) ? (((((/* implicit */_Bool) ((17179344896LL) + (3219636726371259451LL)))) ? (-355249366397837764LL) : (arr_17 [i_0] [i_1] [i_1] [4LL] [i_12]))) : (max((((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) arr_24 [i_0] [i_1])) : (arr_7 [i_1] [i_1] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1138816806U)) ? (arr_18 [i_0]) : (arr_3 [i_1] [i_10] [i_12 + 1]))))))));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(var_13))), (min((arr_15 [i_0] [i_1] [i_0] [i_12]), (((/* implicit */long long int) arr_39 [i_0] [i_1 - 1] [i_1 - 1] [i_12 - 1] [i_12 - 1]))))))) ? (((((/* implicit */_Bool) (+(32767U)))) ? (((/* implicit */long long int) ((arr_18 [i_0]) * (862621168U)))) : (((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0] [i_10] [i_0] [i_12])) ? (((/* implicit */long long int) arr_40 [i_0] [i_0] [i_10] [i_12] [i_1] [14LL])) : (-1LL))))) : (((max((arr_27 [i_1] [i_10] [i_12]), (6933570139211192707LL))) / (((/* implicit */long long int) var_7))))));
                        var_34 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 4294967290U)) > (134216704LL)));
                        arr_42 [i_1] [i_12] = -710072194029348973LL;
                    }
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((long long int) arr_14 [i_0])), (((/* implicit */long long int) ((32LL) > (((/* implicit */long long int) 4U)))))))))))));
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (-(-2458969640777645409LL))))));
                        var_37 = ((/* implicit */unsigned int) (+(var_3)));
                        var_38 = ((/* implicit */long long int) 116313004U);
                    }
                    for (long long int i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        arr_48 [i_0] [i_1 + 2] [i_10] = ((/* implicit */long long int) ((((arr_46 [i_1] [i_1 + 1] [i_1] [7U] [i_1 + 1] [i_10]) + (arr_46 [i_1] [i_1 + 2] [i_1] [i_1 - 1] [i_1 + 1] [i_10]))) + (1680510866U)));
                        var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4264861635U)) || (((/* implicit */_Bool) 6777459478551971111LL))));
                        var_40 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2827023470U)) ? (arr_35 [i_1 + 1] [i_1] [i_10] [i_14]) : (var_11))) + (min((((long long int) arr_14 [i_14])), (((/* implicit */long long int) (~(arr_40 [i_0] [9U] [i_1 - 1] [i_10] [i_14] [6LL]))))))));
                        arr_49 [i_0] [i_0] [14LL] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 0U)) : (-8090656670399205733LL)))) ? (((/* implicit */long long int) ((unsigned int) 392386936U))) : (((((/* implicit */_Bool) var_7)) ? (-1LL) : (((/* implicit */long long int) 610185633U)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(-81648952294134329LL)))))))));
                        var_41 = ((((/* implicit */_Bool) ((6LL) - (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_1 + 2] [i_1] [i_1 + 2] [i_14]))))) ? ((+(5045664598707958642LL))) : (min((((/* implicit */long long int) 1371817587U)), (68719476735LL))));
                    }
                    var_42 = ((unsigned int) arr_27 [i_1 + 2] [i_1 + 1] [i_1 + 1]);
                    var_43 = ((/* implicit */unsigned int) max((var_43), (((unsigned int) var_9))));
                    /* LoopSeq 3 */
                    for (unsigned int i_15 = 2; i_15 < 14; i_15 += 1) /* same iter space */
                    {
                        arr_54 [i_0] [i_1 + 2] [i_10] = ((((/* implicit */_Bool) (~((+(7511509476835846781LL)))))) ? (((arr_47 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 + 2] [i_1 - 1]) ^ (max((4172959104U), (3482147228U))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_51 [i_0] [i_1] [i_0])), (6729831283570344625LL)))))))));
                        var_44 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_0] [i_1 + 2] [2LL] [i_15])) ? (arr_19 [i_0]) : (min((arr_40 [i_0] [i_1 + 1] [8U] [i_15] [1U] [i_15 - 1]), (0U)))));
                    }
                    for (unsigned int i_16 = 2; i_16 < 14; i_16 += 1) /* same iter space */
                    {
                        var_45 = arr_6 [i_1];
                        arr_57 [i_0] [i_1] [i_16] [i_16] [i_0] = ((/* implicit */unsigned int) var_14);
                        var_46 += ((/* implicit */unsigned int) ((long long int) 0U));
                    }
                    for (long long int i_17 = 4; i_17 < 14; i_17 += 3) 
                    {
                        var_47 = 2577002403U;
                        var_48 = 3690526635U;
                        var_49 += ((/* implicit */unsigned int) ((((long long int) var_6)) >= ((((~(arr_0 [i_17] [i_1]))) / (((/* implicit */long long int) ((/* implicit */int) ((var_5) <= (((/* implicit */long long int) 3624893971U))))))))));
                        var_50 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 274877906943LL)) ? (min((((/* implicit */long long int) 749323743U)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_15 [i_0] [i_0] [i_0] [i_0]) > (-672555563660031377LL))))))) / (((/* implicit */long long int) arr_44 [i_0] [i_1 + 1] [2U] [i_1] [i_1]))));
                    }
                    var_51 = -4143309351129776677LL;
                }
                for (unsigned int i_18 = 0; i_18 < 15; i_18 += 3) 
                {
                    var_52 = ((unsigned int) (+(((unsigned int) 4026531840U))));
                    var_53 = ((/* implicit */long long int) 4294967295U);
                    var_54 = ((/* implicit */long long int) max((var_54), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((long long int) 4294967295U)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(7U)))) ? (arr_24 [i_1 + 2] [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -8550206176413766733LL)) && (((/* implicit */_Bool) 4294967275U)))))))))))));
                    arr_63 [i_0] [i_1] [i_0] = min((((long long int) arr_30 [i_1] [i_1 - 1] [i_1] [i_1] [11U])), (min((262143LL), (-2528383667121726035LL))));
                    arr_64 [i_0] [i_1] [i_18] = arr_52 [i_0];
                }
                var_55 = ((/* implicit */unsigned int) 3930180340015679598LL);
                var_56 = ((/* implicit */long long int) (-(((unsigned int) ((((/* implicit */long long int) var_7)) >= (arr_26 [i_0] [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
    var_57 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((~(var_9))))))));
}
