/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107100
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_1)))))) ? (((/* implicit */int) ((((_Bool) var_5)) || (((/* implicit */_Bool) ((unsigned long long int) (signed char)-17)))))) : (((/* implicit */int) max((((/* implicit */unsigned char) min(((_Bool)1), ((_Bool)1)))), (var_7))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_11 -= ((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2]);
                    arr_9 [i_0] [i_1] = ((/* implicit */short) ((min((-5970436869277415231LL), (((/* implicit */long long int) var_5)))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) (_Bool)1))))) ? (-1404894404848117485LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3)))))));
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1])) + (((/* implicit */int) arr_6 [i_1]))))) ^ (min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-2242229444786637575LL))), (arr_8 [i_0 - 3] [i_0 + 1] [i_0 - 3]))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_0] [(unsigned char)21] [i_3] [i_4] [6LL] [i_5] = ((/* implicit */signed char) (~(arr_0 [i_0])));
                                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45495)) ? (-675601887) : (((/* implicit */int) (signed char)17))))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */int) var_9)), (arr_3 [i_3] [i_0])))))));
                            }
                        } 
                    } 
                    var_14 -= ((/* implicit */long long int) (_Bool)1);
                    arr_18 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 1])) * (((/* implicit */int) arr_1 [i_0 + 1]))))) ? (((/* implicit */int) max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 2])))) : (((/* implicit */int) arr_1 [i_0 - 2]))));
                    var_15 = ((/* implicit */_Bool) max((var_15), (max(((_Bool)0), (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_3])) || (((/* implicit */_Bool) var_0))))))));
                    var_16 -= ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)2)), ((unsigned short)65535)))) ? (((arr_16 [i_3] [18ULL] [i_1] [i_0] [(_Bool)1]) ? (((/* implicit */int) arr_13 [i_3] [i_0] [i_0] [i_0] [i_0] [i_0])) : (var_5))) : (((/* implicit */int) (unsigned char)131)))), (((/* implicit */int) arr_4 [i_0] [i_1] [i_3]))));
                }
                for (signed char i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        var_17 = (short)26804;
                        var_18 -= ((/* implicit */int) (!(arr_5 [i_7])));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)150)) ? ((+(((((/* implicit */_Bool) (unsigned short)47319)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (unsigned short)8592)))))) : (((/* implicit */int) (!(min((arr_4 [0] [i_1] [(_Bool)1]), (arr_11 [2LL] [i_1] [i_1]))))))));
                        var_20 = ((/* implicit */_Bool) max((((/* implicit */int) var_6)), ((((-(((/* implicit */int) arr_2 [i_0])))) | (((/* implicit */int) max((arr_10 [i_0] [(_Bool)1] [i_0]), (((/* implicit */unsigned short) arr_11 [i_0] [i_1] [i_7])))))))));
                        arr_24 [(short)9] [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_19 [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_5 [i_0])))), (((/* implicit */int) (unsigned char)129))));
                    }
                    for (short i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((max((9223372036854775807LL), (((/* implicit */long long int) arr_26 [i_1])))), (max((4596876925109433199LL), (((/* implicit */long long int) (_Bool)1)))))))));
                        arr_29 [5LL] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_21 [i_0 - 3] [i_0 - 3] [i_0] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_21 [i_0 - 1] [i_1] [i_0] [i_1]))));
                    }
                    for (short i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
                    {
                        arr_34 [i_0] [i_0] [(short)10] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) max((((/* implicit */unsigned char) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)31))))), (arr_26 [i_0]))))));
                        var_22 = ((/* implicit */unsigned short) arr_33 [i_0] [i_0] [i_0] [(_Bool)1]);
                        var_23 = ((/* implicit */int) arr_33 [(signed char)18] [i_6] [i_1] [i_9]);
                        var_24 = ((/* implicit */long long int) max((((/* implicit */int) var_8)), (min((((/* implicit */int) arr_23 [i_0 - 3] [i_0 - 3])), (var_5)))));
                    }
                    var_25 = ((/* implicit */signed char) arr_13 [(short)12] [(short)12] [(short)12] [8] [(short)12] [i_6]);
                    var_26 -= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_7 [i_1])) ? (max((((/* implicit */unsigned long long int) (short)-1)), (6323978383646958567ULL))) : (arr_33 [i_0] [i_6] [i_6] [i_0 - 3]))));
                }
                for (signed char i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
                {
                    var_27 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_10])) && (((/* implicit */_Bool) arr_3 [i_0 - 2] [i_10]))))), ((signed char)-19))))));
                    var_28 -= ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */short) arr_16 [i_10] [i_1] [i_0 - 1] [i_0] [i_10])), (arr_12 [i_0] [i_1] [i_1] [i_10]))))));
                    var_29 -= ((/* implicit */unsigned long long int) arr_30 [i_0] [i_1] [i_1]);
                }
                /* LoopSeq 3 */
                for (short i_11 = 1; i_11 < 23; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_1] [i_0] [i_1])) && (var_6)));
                        arr_42 [(signed char)0] [i_11] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) ((_Bool) (_Bool)1))), (((((/* implicit */int) arr_2 [i_0])) << (((((/* implicit */int) arr_2 [i_0])) - (129)))))));
                        arr_43 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(var_3))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0] [i_1] [i_1]))) < (-1447389197918601040LL)))))))) ? ((-(10731798557056543105ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
                        var_31 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [i_11 + 1] [i_12 - 1] [i_0 - 2]))))) || ((_Bool)1));
                    }
                    var_32 = ((/* implicit */unsigned char) max((max((arr_21 [i_0 - 3] [i_11] [i_0] [(_Bool)1]), (((/* implicit */unsigned long long int) ((short) (unsigned short)38719))))), (((/* implicit */unsigned long long int) arr_5 [i_0]))));
                    var_33 -= ((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */unsigned char) min((((/* implicit */signed char) (_Bool)1)), ((signed char)14)))), ((unsigned char)31)))), ((+(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_5)))))))));
                }
                /* vectorizable */
                for (unsigned short i_13 = 3; i_13 < 22; i_13 += 1) 
                {
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_13 - 1] [i_0 - 2] [i_0])) || (((/* implicit */_Bool) arr_30 [i_13 - 3] [i_0 - 2] [i_0]))));
                    var_35 -= ((((/* implicit */_Bool) -4660108260044208126LL)) ? (((/* implicit */int) (short)25615)) : (1740260141));
                    var_36 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)36)) && ((_Bool)1)));
                }
                for (short i_14 = 0; i_14 < 24; i_14 += 1) 
                {
                    var_37 -= ((/* implicit */short) ((signed char) max((((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_1] [i_14])) ? (((/* implicit */int) (unsigned short)64623)) : (((/* implicit */int) (_Bool)0)))), ((-(((/* implicit */int) (signed char)30)))))));
                    /* LoopSeq 4 */
                    for (signed char i_15 = 3; i_15 < 23; i_15 += 1) /* same iter space */
                    {
                        arr_53 [i_14] [i_14] [i_0] [i_14] = ((/* implicit */short) ((arr_5 [i_0]) ? (arr_52 [18] [(unsigned char)13] [i_0] [(unsigned short)3]) : (((/* implicit */long long int) min((arr_0 [i_0 - 1]), (((/* implicit */int) ((((/* implicit */_Bool) -4660108260044208126LL)) && (((/* implicit */_Bool) var_7))))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_16 = 0; i_16 < 24; i_16 += 2) 
                        {
                            var_38 = ((/* implicit */int) max((var_38), ((~(((/* implicit */int) arr_51 [i_15] [i_15] [i_15 - 1] [i_15 - 2]))))));
                            arr_57 [i_0] [(_Bool)1] [(_Bool)1] [(unsigned char)15] [(_Bool)1] [i_0] = ((/* implicit */int) var_3);
                            var_39 -= ((/* implicit */int) ((((/* implicit */int) var_4)) != (((((/* implicit */_Bool) (short)-17068)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (unsigned short)64632))))));
                            var_40 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31652)) || (((/* implicit */_Bool) arr_8 [i_0 - 3] [i_15] [i_15 - 1]))));
                        }
                        for (long long int i_17 = 0; i_17 < 24; i_17 += 3) 
                        {
                            var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (short)28865)))), (((((/* implicit */int) var_7)) <= (((/* implicit */int) arr_10 [i_0] [i_0] [i_14])))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (max((((((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_14] [i_1] [(unsigned short)10] [i_1])) ? (var_2) : (((/* implicit */long long int) 1072206447)))), (((/* implicit */long long int) min((arr_61 [i_0 - 1] [i_0 - 3] [i_1] [i_14] [i_15] [i_17] [i_17]), (((/* implicit */unsigned short) arr_2 [i_1]))))))))))));
                            arr_62 [(_Bool)1] [i_1] [i_0] [i_15] [i_17] [i_17] = ((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-12)) <= (((/* implicit */int) (signed char)-2))))))));
                        }
                        var_42 -= ((/* implicit */unsigned long long int) ((short) (~(((((/* implicit */int) (unsigned short)26708)) + (((/* implicit */int) (signed char)-15)))))));
                    }
                    for (signed char i_18 = 3; i_18 < 23; i_18 += 1) /* same iter space */
                    {
                        var_43 = ((/* implicit */unsigned long long int) ((unsigned short) (~(arr_31 [i_14] [i_18]))));
                        arr_65 [i_0] [i_14] [i_14] [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
                    }
                    for (signed char i_19 = 3; i_19 < 23; i_19 += 1) /* same iter space */
                    {
                        var_44 = ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_0 [(signed char)7]), (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_1] [i_19 - 3] [i_19]))))) ? (min((12122765690062593028ULL), (6323978383646958580ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_0))))))) * (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (unsigned char)173)) ? (4637767144943790558LL) : (var_3)))))));
                        arr_69 [i_0] [(short)22] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) arr_40 [i_19] [i_1] [20])), ((~(((/* implicit */int) (unsigned char)203))))));
                    }
                    /* vectorizable */
                    for (short i_20 = 0; i_20 < 24; i_20 += 2) 
                    {
                        var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (arr_0 [i_0 - 1]) : (((((/* implicit */_Bool) 12122765690062593039ULL)) ? (((/* implicit */int) (_Bool)1)) : (var_5)))));
                        var_46 -= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 2 */
                        for (unsigned short i_21 = 0; i_21 < 24; i_21 += 4) /* same iter space */
                        {
                            var_47 = ((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)876)))) & ((~(((/* implicit */int) (_Bool)1))))));
                            var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6910)) ? (((/* implicit */unsigned long long int) 268435328)) : (arr_33 [i_0 - 3] [i_0] [i_14] [i_20])));
                        }
                        for (unsigned short i_22 = 0; i_22 < 24; i_22 += 4) /* same iter space */
                        {
                            var_49 -= ((/* implicit */signed char) arr_61 [i_0] [i_1] [i_1] [i_20] [i_20] [12LL] [i_22]);
                            var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) var_0))));
                        }
                        arr_77 [i_0] [i_0] [i_0] [(short)15] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) (short)-12487))));
                    }
                }
                /* LoopNest 2 */
                for (long long int i_23 = 1; i_23 < 20; i_23 += 4) 
                {
                    for (signed char i_24 = 0; i_24 < 24; i_24 += 1) 
                    {
                        {
                            var_51 -= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_20 [i_0 - 2] [i_1] [i_23] [i_23])))) ? (min((((/* implicit */unsigned long long int) arr_41 [i_0] [i_0] [i_23] [i_1])), ((-(arr_80 [(_Bool)1] [i_1] [(_Bool)1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                            /* LoopSeq 1 */
                            for (long long int i_25 = 0; i_25 < 24; i_25 += 2) 
                            {
                                arr_87 [i_0 - 2] [i_1] [i_0] [1] [i_25] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_79 [i_0] [i_0] [i_0 - 2]))) || (((/* implicit */_Bool) ((long long int) (unsigned char)200)))));
                                var_52 -= ((/* implicit */unsigned long long int) (_Bool)1);
                                var_53 = max(((unsigned char)10), (((/* implicit */unsigned char) (_Bool)1)));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_26 = 0; i_26 < 24; i_26 += 3) 
                {
                    for (unsigned long long int i_27 = 2; i_27 < 23; i_27 += 3) 
                    {
                        {
                            var_54 = ((/* implicit */unsigned long long int) min((var_54), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) min(((unsigned char)200), (arr_89 [i_0] [i_0])))) ? (((/* implicit */int) ((_Bool) arr_5 [i_1]))) : (((/* implicit */int) var_6))))))));
                            arr_93 [i_0] [i_26] [i_0] [i_27] = ((/* implicit */short) arr_10 [i_0] [i_1] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
