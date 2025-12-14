/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109432
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
    var_14 = ((/* implicit */_Bool) ((int) var_13));
    var_15 *= (((((+(var_11))) << (((((/* implicit */int) (short)25373)) - (25358))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_5), (var_3)))) & (((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (var_9))))))));
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (~(((887863641418381123ULL) ^ (var_11))))))));
    var_17 = ((/* implicit */short) (unsigned char)255);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_2)), (min((arr_2 [i_0] [i_0]), (((/* implicit */long long int) (unsigned char)10))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-112))))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-4347))))), (((((arr_3 [i_0] [i_0] [i_0]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)255)) - (255)))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (_Bool)1);
                                var_20 |= ((((17558880432291170492ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_2 + 3]))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 1])) ^ (((/* implicit */int) arr_6 [i_1] [i_2 - 1] [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_14 [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255))))) + (min((arr_5 [i_0] [i_0]), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) var_0))))))) : (887863641418381123ULL));
    }
    for (unsigned int i_5 = 2; i_5 < 12; i_5 += 4) 
    {
        var_21 = ((/* implicit */signed char) ((max((((/* implicit */long long int) (unsigned short)3781)), (-3736931985093594102LL))) & (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) (unsigned short)61755))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5 + 3]))) <= (5795525369505418854ULL)))) : (((/* implicit */int) (!(arr_11 [i_5] [i_5 + 1] [i_5] [i_5])))))))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_0))));
    }
    for (short i_6 = 0; i_6 < 12; i_6 += 1) 
    {
        /* LoopSeq 4 */
        for (short i_7 = 1; i_7 < 10; i_7 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_7 + 2] [i_7])))))));
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) (~(((8733313784330867441ULL) + (((/* implicit */unsigned long long int) arr_10 [i_6] [i_6] [i_6] [i_9] [i_7 + 1]))))));
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_13))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (short i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 12; i_12 += 2) 
                {
                    for (long long int i_13 = 1; i_13 < 10; i_13 += 2) 
                    {
                        {
                            var_26 |= ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) max(((unsigned short)3780), (((/* implicit */unsigned short) (_Bool)0))))) << (((((long long int) 4433230883192832ULL)) - (4433230883192829LL))))));
                            var_27 = ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((/* implicit */int) (short)-13692))) & (arr_21 [i_7] [i_6]))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) var_6))));
                /* LoopSeq 1 */
                for (signed char i_14 = 1; i_14 < 10; i_14 += 2) 
                {
                    var_29 = ((/* implicit */unsigned char) ((2721640070977761705ULL) << (((2565792269U) - (2565792246U)))));
                    var_30 = ((/* implicit */signed char) (-(max((min((arr_21 [i_6] [i_6]), (((/* implicit */long long int) arr_31 [i_6] [i_7 - 1] [i_6] [i_14])))), (((/* implicit */long long int) arr_34 [i_6] [i_6] [i_6] [i_7] [i_6] [i_14]))))));
                    arr_39 [i_6] [i_6] [i_11] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_6] [i_6] [i_6] [i_6]))) / (arr_35 [i_6] [i_11] [i_6]))))) << (((((/* implicit */int) var_5)) + (14507)))));
                }
                /* LoopNest 2 */
                for (unsigned char i_15 = 3; i_15 < 9; i_15 += 2) 
                {
                    for (unsigned char i_16 = 1; i_16 < 10; i_16 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_36 [i_6] [i_7] [i_11] [i_16 + 1] [i_16 + 1])) ? (var_4) : (((((/* implicit */_Bool) var_6)) ? (arr_38 [i_6] [i_6] [i_7] [i_6] [i_15] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) & (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */int) arr_30 [i_16 + 1] [i_16] [i_15 - 2] [i_11]))))))))));
                            var_32 = ((/* implicit */short) (+(((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */_Bool) 6208075082528147375ULL)) ? (arr_26 [i_15 - 3] [i_7] [i_7] [i_6]) : (((/* implicit */unsigned int) arr_7 [i_7] [i_7])))) - (1306677796U)))))));
                            var_33 = ((/* implicit */short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81))) - (var_4))) != (((((/* implicit */_Bool) arr_33 [i_7 + 1] [i_15] [i_7 + 1])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22443))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)4347)) << (((var_1) + (8595434522225100280LL)))))))))) : (min((arr_10 [i_7 - 1] [i_15 - 1] [i_16 + 1] [i_16] [i_16]), (arr_10 [i_7 - 1] [i_15 - 1] [i_16 + 1] [i_16] [i_16])))));
                            var_34 = ((/* implicit */short) max(((!((_Bool)1))), (((_Bool) (signed char)88))));
                        }
                    } 
                } 
            }
            for (short i_17 = 3; i_17 < 11; i_17 += 1) 
            {
                var_35 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)7))));
                var_36 = ((unsigned long long int) min((((/* implicit */unsigned long long int) (unsigned char)162)), (18442310842826358784ULL)));
                var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) (+(min((((/* implicit */long long int) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_2))))), (arr_3 [i_6] [i_6] [i_6]))))))));
                var_38 = ((/* implicit */signed char) var_5);
            }
            var_39 = ((/* implicit */unsigned long long int) max((1761052222U), (((/* implicit */unsigned int) 54871091))));
        }
        for (int i_18 = 2; i_18 < 9; i_18 += 4) 
        {
            var_40 = ((/* implicit */signed char) ((unsigned int) 54871091));
            var_41 = ((/* implicit */unsigned long long int) var_0);
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            /* LoopSeq 4 */
            for (long long int i_20 = 0; i_20 < 12; i_20 += 2) 
            {
                var_42 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_13 [i_6] [i_6])))));
                var_43 = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) ((var_11) > (var_6)))), (arr_35 [i_6] [i_19] [i_20])))));
                arr_57 [i_6] = ((((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned short)22443))))), ((unsigned char)255)))) > (((/* implicit */int) (!(((var_1) >= (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
            }
            for (short i_21 = 4; i_21 < 11; i_21 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_22 = 1; i_22 < 11; i_22 += 2) 
                {
                    var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_54 [i_21 - 2] [i_21 - 3] [i_21 - 3] [i_21 - 3])) ? (((/* implicit */int) ((((/* implicit */int) arr_34 [i_19] [i_19] [i_21 - 3] [i_21 - 2] [i_6] [i_22 + 1])) == (((/* implicit */int) arr_34 [i_6] [i_6] [i_21 - 2] [i_21 - 1] [i_6] [i_22 + 1]))))) : (((((var_13) + (2147483647))) << (((((/* implicit */int) arr_34 [i_19] [i_21 - 4] [i_21 - 1] [i_21 + 1] [i_6] [i_22 - 1])) - (67)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_23 = 2; i_23 < 9; i_23 += 3) 
                    {
                        var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_6] [i_6] [i_6])) << (((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (signed char)7))))) ? (((/* implicit */long long int) ((int) arr_25 [i_6] [i_6]))) : (((((/* implicit */_Bool) (signed char)31)) ? (558551906910208LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)235))))))) - (381404582LL)))));
                        var_46 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_21 [i_21] [i_21]) >= (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_21] [i_21])))))) + (min((((/* implicit */int) arr_4 [i_21 - 3] [i_22 - 1] [i_23 - 1])), (54871091)))));
                        var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_6] [i_19]))))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_63 [i_23 - 1] [i_23 - 1] [i_23] [i_23] [i_23 - 1])) || (((/* implicit */_Bool) ((var_1) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))))));
                        arr_65 [i_23] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_53 [i_6] [i_22 - 1]))))));
                    }
                }
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_48 = (i_6 % 2 == 0) ? (((/* implicit */unsigned char) ((min((((/* implicit */int) ((((/* implicit */int) arr_42 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) == (((/* implicit */int) (_Bool)0))))), (((((/* implicit */int) (unsigned char)8)) + (((/* implicit */int) var_10)))))) >> (((((/* implicit */int) arr_31 [i_6] [i_21 - 4] [i_6] [i_21 - 3])) - (100)))))) : (((/* implicit */unsigned char) ((min((((/* implicit */int) ((((/* implicit */int) arr_42 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) == (((/* implicit */int) (_Bool)0))))), (((((/* implicit */int) (unsigned char)8)) + (((/* implicit */int) var_10)))))) >> (((((((/* implicit */int) arr_31 [i_6] [i_21 - 4] [i_6] [i_21 - 3])) - (100))) - (38))))));
                        arr_71 [i_6] [i_19] [i_6] [i_6] [i_6] = (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_69 [i_6] [i_6] [i_24] [i_25])), (var_6)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_26 = 0; i_26 < 12; i_26 += 4) 
                    {
                        var_49 = ((/* implicit */int) ((short) min((((((/* implicit */long long int) ((/* implicit */int) arr_59 [i_19] [i_21] [i_24]))) + (558551906910208LL))), (((/* implicit */long long int) arr_56 [i_6])))));
                        var_50 &= ((/* implicit */unsigned long long int) arr_49 [i_6] [i_6] [i_6]);
                        var_51 &= ((/* implicit */short) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)25012)) : (((/* implicit */int) (unsigned char)235)))) << (((((arr_62 [i_21] [i_21 - 2] [i_21 - 4] [i_21 - 2] [i_21 + 1]) << (((((/* implicit */int) (short)10944)) - (10944))))) - (8938285690519983437LL)))));
                    }
                    var_52 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (signed char)-121))) ? (((/* implicit */int) (short)12148)) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_54 [i_19] [i_19] [i_21 - 2] [i_24])), ((unsigned short)51440))))));
                    var_53 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [i_6] [i_21 - 3]))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_27 = 0; i_27 < 12; i_27 += 3) 
                {
                    for (short i_28 = 1; i_28 < 11; i_28 += 1) 
                    {
                        {
                            var_54 = ((/* implicit */unsigned long long int) var_5);
                            var_55 = ((/* implicit */unsigned int) min((var_55), (((/* implicit */unsigned int) ((_Bool) (+(((/* implicit */int) arr_47 [i_21 + 1] [i_28 + 1] [i_28 + 1]))))))));
                        }
                    } 
                } 
                var_56 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_21 - 3]))) : (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_21 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_21 - 1])))))));
            }
            for (short i_29 = 4; i_29 < 11; i_29 += 4) /* same iter space */
            {
                var_57 |= ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-10))));
                arr_84 [i_6] [i_6] = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) & (((((/* implicit */_Bool) var_12)) ? (18442310842826358784ULL) : (17073096017015271366ULL))))), (((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_64 [i_29]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_6] [i_29] [i_29 - 4] [i_6])))))));
            }
            for (short i_30 = 4; i_30 < 11; i_30 += 4) /* same iter space */
            {
                arr_89 [i_19] [i_19] [i_6] [i_19] = ((/* implicit */short) max((((((/* implicit */int) arr_60 [i_30 - 2] [i_30 - 3] [i_19] [i_6] [i_6] [i_6])) ^ (((/* implicit */int) arr_60 [i_6] [i_6] [i_30] [i_30] [i_30 - 3] [i_6])))), (var_13)));
                arr_90 [i_6] [i_19] [i_6] [i_6] = ((/* implicit */long long int) 1806640413);
                var_58 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99))) ^ (5792675068461561157ULL)));
            }
            var_59 += ((/* implicit */_Bool) ((((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (var_6)))) & (((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)0)))) & (max((((/* implicit */int) arr_36 [i_6] [i_6] [i_6] [i_19] [i_19])), (arr_7 [i_6] [i_19]))))))));
        }
        for (signed char i_31 = 2; i_31 < 8; i_31 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_32 = 0; i_32 < 12; i_32 += 4) 
            {
                /* LoopNest 2 */
                for (short i_33 = 0; i_33 < 12; i_33 += 4) 
                {
                    for (signed char i_34 = 0; i_34 < 12; i_34 += 3) 
                    {
                        {
                            var_60 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_31 + 3] [i_31 - 2])) ? (arr_20 [i_31 + 3] [i_31 - 2]) : (arr_20 [i_31 + 3] [i_31 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) var_3)) << (((var_13) + (1224797289))))) != (((((/* implicit */_Bool) arr_17 [i_6] [i_6])) ? (((/* implicit */int) arr_37 [i_6])) : (((/* implicit */int) var_3)))))))) : ((~(max((arr_74 [i_6] [i_33] [i_32] [i_6]), (((/* implicit */unsigned int) (short)(-32767 - 1)))))))));
                            var_61 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_99 [i_6] [i_6] [i_6] [i_6] [i_6]))))) + (141849102U))))));
                            var_62 = ((/* implicit */long long int) (unsigned char)47);
                        }
                    } 
                } 
                var_63 |= ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)235)) / (((/* implicit */int) (unsigned short)34023))))));
                var_64 = ((/* implicit */_Bool) (short)-12493);
            }
            var_65 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_52 [i_31 + 2] [i_31])) + (((/* implicit */int) arr_52 [i_31 + 4] [i_31 - 1]))))) + (min((((/* implicit */unsigned long long int) arr_52 [i_31 + 2] [i_31])), (arr_86 [i_31 + 4] [i_31 + 4] [i_31 + 3] [i_31 + 1])))));
        }
        var_66 = ((/* implicit */unsigned long long int) ((unsigned char) 8713629496846670159ULL));
        arr_102 [i_6] = ((/* implicit */signed char) arr_76 [i_6] [i_6] [i_6] [i_6]);
        arr_103 [i_6] = (_Bool)0;
    }
}
