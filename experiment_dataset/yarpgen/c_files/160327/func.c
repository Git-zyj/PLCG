/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160327
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) var_11)), (1341633869U)))))) ? (((/* implicit */unsigned long long int) ((int) min((var_1), (((/* implicit */long long int) var_8)))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) 1226215148)) : (var_1)))), (var_14)))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) max((min((2401564501485432041ULL), (((/* implicit */unsigned long long int) (signed char)83)))), (((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (signed char)-81)), (var_3))), (arr_0 [i_0 - 1] [10ULL]))))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [(_Bool)1] [i_0]), (((/* implicit */long long int) arr_1 [i_0 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])))))) : (min((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (2401564501485432041ULL))), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
    }
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 18; i_2 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) (-(arr_8 [i_1] [i_1])));
                            arr_17 [i_1] [i_2] [i_3] [i_1] = ((((/* implicit */_Bool) arr_11 [i_1 + 3] [i_5 + 2] [10])) ? (4290288390U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1 + 2] [i_5 + 2] [i_5]))));
                        }
                    } 
                } 
                arr_18 [i_1] [i_2 + 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_2]))) : ((~(var_7)))));
            }
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_15 [10] [i_2] [i_2 - 1] [i_2] [i_2 - 1]), (arr_15 [i_2 + 1] [i_2] [i_2 - 1] [i_2] [(short)2])))) ? (min((arr_8 [i_2 + 1] [i_1]), (((/* implicit */unsigned int) arr_7 [i_1 + 1])))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_1 + 1])))))));
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    var_21 = (+(((/* implicit */int) ((((/* implicit */int) min((var_8), (var_8)))) >= (var_2)))));
                    var_22 &= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((long long int) min((var_15), (var_15))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_12 [i_1] [i_1])), (arr_4 [(unsigned char)17])))), (max((var_12), (((/* implicit */unsigned long long int) var_16))))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_28 [i_8] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_9 [i_1] [(_Bool)1]);
                    arr_29 [i_1] [15] [i_2] [15ULL] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) max((1169633362), (((/* implicit */int) (signed char)83)))))) < (((/* implicit */int) (signed char)-83))));
                    var_23 &= ((/* implicit */long long int) max((var_9), (arr_6 [6U] [6U])));
                    var_24 = ((/* implicit */unsigned long long int) min((min((arr_4 [i_1 + 2]), (arr_4 [i_1 + 2]))), (((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_1] [i_1 + 3] [i_2 + 2])))))));
                }
                for (unsigned char i_9 = 2; i_9 < 17; i_9 += 1) 
                {
                    var_25 += ((/* implicit */unsigned short) min((4294967283U), (((/* implicit */unsigned int) (signed char)72))));
                    arr_33 [(signed char)8] [12U] [14] [i_1] [(signed char)8] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (arr_22 [i_1] [i_1] [i_1])))) * (min((2401564501485432041ULL), (((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1)))))));
                    var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) -6132651331571868202LL))));
                }
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 18; i_10 += 1) 
                {
                    for (signed char i_11 = 3; i_11 < 17; i_11 += 4) 
                    {
                        {
                            arr_39 [(_Bool)1] [i_1] [(_Bool)1] [(_Bool)1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-83)))), (min((arr_25 [(_Bool)1] [i_10] [(short)10] [(short)10] [i_2 + 1] [i_1]), (((/* implicit */int) arr_14 [i_1] [i_10] [i_1] [i_1]))))))) ? (((unsigned int) ((((/* implicit */_Bool) var_6)) ? (arr_8 [i_1] [2U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 + 2])))))) : (arr_37 [i_1] [i_2] [15LL] [i_10] [i_11])));
                            arr_40 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_9 [i_11 + 2] [i_1])), (((((/* implicit */_Bool) arr_37 [i_1] [i_1] [i_6] [i_1] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-73))) : (-4091238228699944980LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) (unsigned short)51216)) : (((/* implicit */int) (unsigned short)14318))))) ? (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (signed char)63)) ? (2401564501485432041ULL) : (((/* implicit */unsigned long long int) 4678905U)))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_12 [4ULL] [i_11 + 1])) ? (arr_36 [i_1] [i_1] [i_1] [i_1 + 3] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1]))))))))));
                            arr_41 [i_1] [i_2 + 1] [i_1] = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) ((var_13) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6])))))), (arr_21 [i_6]))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_10] [i_11])) ? (((/* implicit */int) arr_24 [(unsigned char)1] [i_10] [i_1] [i_2] [i_1])) : (((/* implicit */int) var_15)))))))));
                            var_27 = var_6;
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_12 = 0; i_12 < 20; i_12 += 1) /* same iter space */
            {
                var_28 = ((((/* implicit */_Bool) arr_36 [i_1] [i_1 - 1] [i_12] [i_12] [i_1 - 1] [i_12] [i_2 + 1])) ? (arr_36 [i_1] [i_1 + 1] [i_12] [13U] [i_1] [i_12] [i_2 + 1]) : (arr_36 [i_1] [i_1 + 2] [6ULL] [i_1] [i_1] [i_2] [i_2 - 1]));
                var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)51217))));
                var_30 = ((/* implicit */int) (~(arr_16 [i_1 - 1] [i_2 + 1])));
                /* LoopNest 2 */
                for (signed char i_13 = 1; i_13 < 19; i_13 += 1) 
                {
                    for (int i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        {
                            arr_49 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) arr_48 [i_1] [i_2] [i_12] [i_13 - 1] [i_13] [i_14] [i_1])))));
                            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((unsigned char) (unsigned short)67)))));
                            var_32 = ((((/* implicit */_Bool) arr_20 [i_1 - 1])) ? (((/* implicit */int) arr_20 [i_1 - 1])) : (((/* implicit */int) arr_20 [i_1 - 1])));
                            arr_50 [i_14] [i_1] [i_14] [i_13] = ((/* implicit */long long int) (~(var_16)));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 20; i_15 += 3) 
            {
                for (signed char i_16 = 0; i_16 < 20; i_16 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 3; i_17 < 19; i_17 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) min((((max((arr_37 [i_1] [i_2] [i_15] [i_16] [(short)18]), (((/* implicit */unsigned int) var_4)))) << (((min((var_10), (((/* implicit */unsigned long long int) arr_55 [i_16] [i_17])))) - (7094802476154713541ULL))))), (((/* implicit */unsigned int) (-(max((((/* implicit */int) arr_54 [i_1])), (var_2)))))))))));
                            var_34 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_1] [(short)6] [i_2] [i_1])))))))), (max(((+(arr_35 [18] [i_15] [i_15] [11LL]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [2LL] [5U] [5U] [(signed char)13])))))))));
                            arr_58 [i_1] [(short)13] [i_15] [(short)13] [7LL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_16))))))));
                            arr_59 [i_1] [i_2] [i_15] [10] [(signed char)5] [i_17] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */short) arr_19 [i_17] [(_Bool)1] [i_2] [15LL])), (var_8)))), (arr_10 [i_2] [i_2] [i_2] [i_1]))))));
                            var_35 ^= ((/* implicit */unsigned int) (-(max((-4091238228699944980LL), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)83)))))))));
                        }
                        arr_60 [(signed char)1] [i_1] [i_15] = max((12912266838535967154ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */short) var_4)), (var_8))))))));
                    }
                } 
            } 
        }
        arr_61 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_19 [10LL] [i_1] [i_1] [(signed char)17])), (min(((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_22 [i_1] [i_1] [(short)4])) : (var_13))), (((/* implicit */unsigned long long int) min((1519062099U), (4290288367U))))))));
        var_36 = ((/* implicit */signed char) max((var_36), (min(((signed char)-40), (((/* implicit */signed char) (_Bool)0))))));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 10; i_18 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_19 = 0; i_19 < 10; i_19 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_20 = 0; i_20 < 10; i_20 += 3) 
            {
                arr_71 [i_18] [i_19] [i_18] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_18] [i_18] [i_18] [i_18]))) ^ (arr_45 [i_18] [i_18] [i_18] [(_Bool)1])));
                var_37 ^= ((/* implicit */signed char) var_1);
                var_38 = ((/* implicit */short) var_0);
            }
            var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) (~(var_12))))));
        }
        /* LoopSeq 4 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            arr_75 [i_18] |= ((/* implicit */_Bool) arr_55 [i_21] [i_18]);
            arr_76 [i_18] [i_18] = ((/* implicit */unsigned int) ((var_4) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-88))) : (arr_21 [i_18])));
            var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) var_1))));
            /* LoopSeq 1 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                arr_81 [i_21] = ((/* implicit */short) arr_13 [i_18] [i_18] [i_22]);
                arr_82 [i_18] [i_21] [i_22] [i_22] |= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-107)) < (var_2)));
            }
        }
        for (short i_23 = 0; i_23 < 10; i_23 += 1) 
        {
            var_41 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)83))));
            var_42 = ((/* implicit */unsigned int) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        }
        for (int i_24 = 3; i_24 < 7; i_24 += 1) /* same iter space */
        {
            var_43 = ((((/* implicit */int) ((9223372036854775807LL) == (((/* implicit */long long int) arr_62 [i_18]))))) << ((((+(arr_36 [i_24] [i_24 - 3] [i_18] [i_18] [i_18] [i_18] [i_18]))) - (6638817335996880017LL))));
            var_44 = ((/* implicit */unsigned char) var_9);
        }
        for (int i_25 = 3; i_25 < 7; i_25 += 1) /* same iter space */
        {
            arr_89 [(unsigned char)0] [(unsigned char)0] [i_25] = var_11;
            /* LoopNest 3 */
            for (unsigned int i_26 = 0; i_26 < 10; i_26 += 1) 
            {
                for (short i_27 = 0; i_27 < 10; i_27 += 2) 
                {
                    for (short i_28 = 0; i_28 < 10; i_28 += 2) 
                    {
                        {
                            arr_98 [i_18] [i_18] [i_25] [i_26] [(_Bool)1] [6U] [6LL] = ((/* implicit */long long int) ((var_11) ? (((((/* implicit */_Bool) (unsigned short)14320)) ? (((/* implicit */unsigned long long int) var_0)) : (var_13))) : (((/* implicit */unsigned long long int) 4678906U))));
                            arr_99 [i_25] [i_25] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)14320))) ? (arr_10 [i_26] [i_27] [i_26] [(unsigned short)8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-88))))))));
                            arr_100 [i_28] [i_27] [i_25] [i_18] [i_25] [i_25] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_44 [i_25 - 1] [i_26])) ? (arr_12 [i_25 + 2] [i_25 + 2]) : (arr_12 [i_25 + 2] [i_26])));
                        }
                    } 
                } 
            } 
            var_45 = ((unsigned short) (!(((/* implicit */_Bool) arr_27 [(unsigned char)11] [(unsigned char)11] [i_18] [i_25]))));
            arr_101 [i_25] [1] = ((/* implicit */_Bool) (+(var_14)));
            arr_102 [i_25] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_43 [i_18] [i_25])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_10))));
        }
        var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) (((!(((/* implicit */_Bool) arr_10 [i_18] [11U] [i_18] [i_18])))) ? (((/* implicit */long long int) (-(arr_62 [i_18])))) : (arr_15 [i_18] [i_18] [i_18] [i_18] [i_18]))))));
        arr_103 [i_18] = ((/* implicit */short) arr_24 [i_18] [i_18] [i_18] [i_18] [i_18]);
    }
    /* LoopNest 2 */
    for (short i_29 = 0; i_29 < 16; i_29 += 3) 
    {
        for (unsigned char i_30 = 2; i_30 < 14; i_30 += 2) 
        {
            {
                arr_108 [i_29] [i_30] [i_29] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) arr_45 [i_30 - 1] [i_30 - 2] [i_30 + 1] [i_30 + 1])), (arr_35 [i_30 - 1] [i_30 - 2] [i_30 + 1] [i_30 + 1]))), (((/* implicit */unsigned long long int) (+(arr_4 [i_30]))))));
                arr_109 [i_30] [i_30] |= ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (var_13) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) min((arr_104 [i_30 - 2]), (var_0)))) : (var_10)))));
                var_47 = (i_29 % 2 == zero) ? (((/* implicit */long long int) ((unsigned char) ((((((/* implicit */_Bool) arr_31 [i_29] [i_30 + 1] [i_29] [i_30])) ? (var_7) : (((/* implicit */unsigned int) arr_27 [i_29] [i_29] [i_29] [i_29])))) << (((((/* implicit */int) arr_31 [i_29] [10U] [i_30 - 2] [i_29])) - (46048))))))) : (((/* implicit */long long int) ((unsigned char) ((((((/* implicit */_Bool) arr_31 [i_29] [i_30 + 1] [i_29] [i_30])) ? (var_7) : (((/* implicit */unsigned int) arr_27 [i_29] [i_29] [i_29] [i_29])))) << (((((((/* implicit */int) arr_31 [i_29] [10U] [i_30 - 2] [i_29])) - (46048))) + (29147)))))));
                arr_110 [i_29] [i_29] = ((/* implicit */short) (+((+(min((arr_107 [i_29] [i_30]), (((/* implicit */long long int) var_5))))))));
            }
        } 
    } 
}
