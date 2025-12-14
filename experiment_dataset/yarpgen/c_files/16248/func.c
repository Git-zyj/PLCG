/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16248
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
    var_12 = ((((/* implicit */_Bool) ((int) ((var_4) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) || (((/* implicit */_Bool) var_11)));
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [i_0] [i_4] [i_3 - 1] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((-5470661052701163434LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)124))))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_5 [i_3 + 2] [i_3 + 2] [i_3] [i_0])) <= (var_9)))) : (((((/* implicit */int) (_Bool)1)) ^ (arr_5 [i_3 - 1] [i_3] [i_4] [i_0])))));
                                var_13 = ((((/* implicit */_Bool) ((signed char) arr_2 [i_0] [i_0]))) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_0 - 1] [i_1] [i_2] [i_1]))) ? (((/* implicit */int) ((((/* implicit */int) (short)-139)) > (-278538822)))) : (((/* implicit */int) ((short) -6424376488221566999LL))))) : (((((/* implicit */_Bool) (short)-132)) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]) : (arr_5 [i_0 - 1] [i_0] [i_0] [i_0]))));
                                var_14 += ((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) arr_8 [i_4] [(_Bool)0] [(_Bool)0] [i_1 - 1])) : (((((/* implicit */int) (signed char)117)) | ((~(((/* implicit */int) (short)-147)))))));
                                var_15 = ((/* implicit */unsigned int) (short)154);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_16 += ((/* implicit */_Bool) var_2);
                                arr_19 [i_0] [i_5] [i_2] [i_1 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5] [i_0] [i_5] [i_5] [(short)6])) || (((/* implicit */_Bool) (signed char)104))))))) : (((/* implicit */int) max((arr_6 [i_0 - 1] [i_1 - 1] [i_2 - 2]), (((_Bool) arr_3 [i_2] [i_2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            arr_22 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [(_Bool)0] [i_7] [(short)4] [i_0] [i_0])) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) ((((/* implicit */int) (short)-130)) <= (arr_5 [i_0] [(short)2] [(_Bool)1] [i_0])))));
            arr_23 [i_0] = ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]);
        }
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 4; i_9 < 10; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2214267540U)) ? (1027368186115604182ULL) : (7479247174565309929ULL)));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)24))) : (((long long int) (short)130))));
                    /* LoopSeq 3 */
                    for (short i_11 = 2; i_11 < 10; i_11 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_12 = 0; i_12 < 11; i_12 += 2) 
                        {
                            var_19 = ((((/* implicit */_Bool) arr_34 [i_11 + 1] [i_8 - 1] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((2052217360) < (((/* implicit */int) (signed char)4)))))) : (((unsigned int) var_7)));
                            arr_37 [i_8] [i_9] [i_12] [(signed char)0] [(short)10] [i_12] |= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))) < ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-24))) : (2317089290U)))));
                        }
                        var_20 ^= ((/* implicit */unsigned int) arr_15 [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_11 + 1] [i_11]);
                        var_21 ^= ((/* implicit */signed char) arr_26 [i_11 + 1]);
                    }
                    for (short i_13 = 2; i_13 < 10; i_13 += 1) /* same iter space */
                    {
                        arr_40 [i_8] [i_10] [i_8] = ((/* implicit */_Bool) max(((+(((/* implicit */int) (short)-4)))), ((+(((int) arr_33 [i_8] [i_8]))))));
                        /* LoopSeq 2 */
                        for (int i_14 = 0; i_14 < 11; i_14 += 2) /* same iter space */
                        {
                            arr_44 [i_14] [i_13] [i_8] [(short)0] [i_8] [(_Bool)1] [i_8] = ((/* implicit */signed char) arr_33 [i_8] [i_8]);
                            var_22 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) (signed char)104)) << (((arr_18 [i_13 - 1] [i_13] [i_13] [i_13 - 2] [i_13] [i_13]) + (1891842887))))));
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */short) ((((((/* implicit */int) var_7)) + (2147483647))) << (((13297957953341081718ULL) - (13297957953341081718ULL)))));
                            arr_47 [i_8] = ((/* implicit */short) arr_36 [8] [i_8] [i_10] [i_13 + 1] [i_15]);
                            var_24 = ((/* implicit */_Bool) -1855490075);
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_39 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1])) + (((/* implicit */int) arr_39 [i_8] [i_8 - 1] [i_8 - 1] [(short)10]))));
                        }
                        arr_48 [i_8] [i_8] [i_8] = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
                        /* LoopSeq 1 */
                        for (int i_16 = 1; i_16 < 10; i_16 += 1) 
                        {
                            var_26 = ((/* implicit */short) arr_17 [i_13 - 2] [0U] [i_10] [i_8 - 1] [i_13] [i_8 - 1] [(_Bool)0]);
                            arr_53 [(short)6] &= ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_18 [i_16] [i_13 - 1] [8ULL] [i_10] [i_9 + 1] [i_8]))))));
                        }
                    }
                    for (int i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)130)) : (((/* implicit */int) arr_20 [i_17])))) : ((-(arr_26 [i_9])))))) ? (((/* implicit */unsigned int) 311519734)) : (min((arr_30 [i_8 - 1] [i_9 - 1] [i_8]), (((/* implicit */unsigned int) arr_27 [i_9 - 3]))))));
                        var_28 = ((/* implicit */_Bool) arr_54 [i_8] [i_8] [i_10] [i_17]);
                    }
                }
            } 
        } 
        var_29 -= ((/* implicit */_Bool) arr_17 [i_8] [i_8] [i_8] [i_8] [i_8] [3ULL] [(_Bool)1]);
        var_30 = ((/* implicit */unsigned int) (signed char)111);
        var_31 = ((/* implicit */long long int) arr_32 [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8] [i_8]);
        var_32 = ((/* implicit */long long int) var_2);
    }
    for (signed char i_18 = 0; i_18 < 19; i_18 += 1) /* same iter space */
    {
        arr_60 [i_18] = ((/* implicit */_Bool) arr_59 [i_18]);
        var_33 = arr_59 [i_18];
        /* LoopNest 2 */
        for (long long int i_19 = 1; i_19 < 17; i_19 += 4) 
        {
            for (signed char i_20 = 3; i_20 < 17; i_20 += 3) 
            {
                {
                    arr_65 [i_18] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) arr_63 [i_19 + 2] [i_20 + 2]))) >= ((((_Bool)1) ? (arr_63 [i_19 + 2] [i_20 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-127)))))));
                    var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_59 [i_20 - 1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -311519735)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)23232))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 311519734)) ? (arr_59 [i_18]) : (((/* implicit */unsigned long long int) 568243978U))))) ? (((/* implicit */int) arr_58 [i_18])) : (((((/* implicit */_Bool) 1238320653U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
        var_35 |= ((/* implicit */short) arr_63 [i_18] [i_18]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_21 = 1; i_21 < 17; i_21 += 2) 
        {
            var_36 = ((/* implicit */int) arr_61 [6ULL] [i_21]);
            var_37 = ((/* implicit */_Bool) -1898324143);
            var_38 *= ((/* implicit */_Bool) (+((~(arr_67 [10U] [10U])))));
            /* LoopSeq 1 */
            for (signed char i_22 = 0; i_22 < 19; i_22 += 2) 
            {
                arr_70 [i_18] [(signed char)8] = ((/* implicit */_Bool) (+(((int) (signed char)4))));
                var_39 = ((4106527875U) > (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) -200467884)))));
                var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_67 [i_22] [i_21 - 1])))))));
            }
            var_41 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_62 [i_21 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (short)8485))) : (3574771642923685902LL)));
        }
        /* vectorizable */
        for (long long int i_23 = 1; i_23 < 15; i_23 += 3) 
        {
            arr_73 [i_18] [i_18] = ((/* implicit */_Bool) 9202875017427477675LL);
            var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1238320653U)) ? ((~(-293163997))) : (((/* implicit */int) ((_Bool) arr_58 [i_18])))));
            arr_74 [i_18] [i_18] = (signed char)-40;
            /* LoopNest 3 */
            for (unsigned long long int i_24 = 1; i_24 < 17; i_24 += 3) 
            {
                for (signed char i_25 = 3; i_25 < 17; i_25 += 2) 
                {
                    for (long long int i_26 = 0; i_26 < 19; i_26 += 2) 
                    {
                        {
                            arr_84 [i_26] [i_18] [i_24] [i_18] [i_18] = ((/* implicit */long long int) (_Bool)1);
                            arr_85 [i_18] [i_18] [i_23 - 1] [i_23 - 1] [16U] [(_Bool)1] = ((/* implicit */long long int) arr_83 [i_18] [i_18] [i_18] [i_18]);
                        }
                    } 
                } 
            } 
            var_43 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        }
    }
    for (signed char i_27 = 0; i_27 < 19; i_27 += 1) /* same iter space */
    {
        var_44 = ((/* implicit */int) (short)31224);
        arr_89 [i_27] = ((((/* implicit */int) ((_Bool) (short)-16))) == (arr_77 [(short)16] [i_27] [(short)2] [(_Bool)1]));
    }
    /* LoopNest 2 */
    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
    {
        for (long long int i_29 = 0; i_29 < 25; i_29 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (int i_30 = 0; i_30 < 25; i_30 += 4) /* same iter space */
                {
                    var_45 = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_98 [i_28] [i_29] = ((/* implicit */unsigned int) max((max((((/* implicit */int) (signed char)124)), (-425628281))), (min((arr_95 [i_28] [i_29] [i_30]), (arr_95 [i_30] [6] [i_30])))));
                }
                for (int i_31 = 0; i_31 < 25; i_31 += 4) /* same iter space */
                {
                    arr_102 [0ULL] [0ULL] [23ULL] = ((/* implicit */unsigned int) (_Bool)1);
                    arr_103 [i_28] [i_29] [i_29] = ((/* implicit */unsigned long long int) (+((~((-(((/* implicit */int) (signed char)-93))))))));
                }
                /* vectorizable */
                for (int i_32 = 0; i_32 < 25; i_32 += 4) /* same iter space */
                {
                    var_46 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)27051))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_97 [i_32]))) : (((((/* implicit */_Bool) 3056646619U)) ? (7479247174565309929ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                    arr_106 [i_28] [i_32] = ((/* implicit */int) (+(((arr_96 [i_32] [i_29] [i_28]) ? (1289214152U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32760)))))));
                    var_47 = ((/* implicit */signed char) -311519718);
                }
                /* vectorizable */
                for (int i_33 = 0; i_33 < 25; i_33 += 4) /* same iter space */
                {
                    arr_110 [i_28] [i_29] [i_33] [i_29] = ((/* implicit */long long int) ((arr_96 [i_28] [(short)6] [i_33]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_96 [i_28] [i_28] [i_33]))) : (9143532500476197959ULL)));
                    arr_111 [i_28] = arr_97 [i_28];
                    /* LoopNest 2 */
                    for (unsigned long long int i_34 = 3; i_34 < 24; i_34 += 3) 
                    {
                        for (_Bool i_35 = 1; i_35 < 1; i_35 += 1) 
                        {
                            {
                                var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) (~(17492507363723648063ULL))))));
                                arr_118 [i_28] [i_28] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_90 [i_33])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-25119)))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (signed char i_36 = 0; i_36 < 25; i_36 += 2) 
                {
                    for (signed char i_37 = 1; i_37 < 23; i_37 += 2) 
                    {
                        {
                            arr_126 [i_36] [i_29] [i_36] [i_37] = min((((/* implicit */unsigned long long int) arr_93 [(_Bool)1] [i_36] [i_36])), (min((arr_99 [i_37 + 2] [i_37 + 2] [i_37 + 1] [i_37 + 1]), ((+(10967496899144241686ULL))))));
                            arr_127 [i_28] [i_29] [22] [i_36] [i_36] [i_37 + 2] = ((/* implicit */short) arr_114 [i_37] [i_36] [i_29] [i_28]);
                        }
                    } 
                } 
                arr_128 [i_29] = var_11;
                /* LoopNest 2 */
                for (short i_38 = 0; i_38 < 25; i_38 += 2) 
                {
                    for (short i_39 = 3; i_39 < 22; i_39 += 1) 
                    {
                        {
                            var_49 -= ((/* implicit */_Bool) 1289214136U);
                            /* LoopSeq 3 */
                            for (unsigned int i_40 = 1; i_40 < 23; i_40 += 2) 
                            {
                                var_50 = ((/* implicit */short) 3005753153U);
                                arr_135 [i_40] [i_29] [i_40] = ((((/* implicit */int) ((4569343568832543386ULL) != (7479247174565309914ULL)))) != (min((((/* implicit */int) (short)-32767)), ((+(((/* implicit */int) var_5)))))));
                                arr_136 [i_28] [13ULL] [i_40] [i_39] [(short)13] [i_40 + 1] [i_28] = ((/* implicit */short) arr_113 [i_29] [(_Bool)1] [i_29] [i_40 + 1] [(_Bool)1] [i_40 + 2]);
                                var_51 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) 2620324270U))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)120)) ? (var_1) : (-434831150)))), (arr_92 [i_28] [(_Bool)1])))));
                            }
                            for (int i_41 = 2; i_41 < 24; i_41 += 1) 
                            {
                                arr_139 [i_39] [21LL] = ((/* implicit */_Bool) (((!(arr_96 [i_29] [i_38] [i_38]))) ? (((/* implicit */int) max(((short)2757), (((/* implicit */short) ((7479247174565309921ULL) < (((/* implicit */unsigned long long int) -419795506)))))))) : (((/* implicit */int) var_5))));
                                arr_140 [i_28] [i_29] [i_38] [i_39] [i_39 - 2] [i_41 - 1] = ((/* implicit */int) (signed char)-64);
                                var_52 = ((/* implicit */unsigned long long int) max((arr_115 [(short)14] [(short)14] [i_38] [i_39] [i_39] [i_28] [i_39]), ((-(((/* implicit */int) (signed char)-120))))));
                                var_53 = ((/* implicit */unsigned int) ((max((6728751659533485994ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_138 [i_28] [(short)10] [i_38] [i_39] [i_41 + 1]))))))) << (((((/* implicit */int) (short)10413)) - (10413)))));
                            }
                            for (_Bool i_42 = 0; i_42 < 1; i_42 += 1) 
                            {
                                var_54 &= ((/* implicit */short) 6828078071805331377ULL);
                                var_55 = ((/* implicit */short) min((var_55), (((/* implicit */short) ((((/* implicit */int) var_0)) / (1425434288))))));
                                arr_145 [(signed char)10] [i_29] [i_38] [i_39] [i_42] = ((/* implicit */int) var_6);
                            }
                            arr_146 [(short)9] [i_38] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_91 [i_38]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
