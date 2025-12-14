/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176786
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
    var_16 = var_13;
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        var_17 = min((max((arr_1 [i_0 - 3]), (arr_1 [i_0 - 1]))), (((int) 1631840048)));
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            var_18 = arr_1 [i_0 - 2];
            /* LoopSeq 1 */
            for (int i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                var_19 = 0;
                var_20 = min((((int) var_10)), (((/* implicit */int) (!(((/* implicit */_Bool) ((int) 1955202082)))))));
                var_21 = ((((/* implicit */_Bool) 405885879)) ? (-244579350) : (((/* implicit */int) ((255) > (-221059615)))));
            }
            /* LoopSeq 3 */
            for (int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                var_22 = ((((/* implicit */_Bool) 134086656)) ? (((((/* implicit */_Bool) 221059614)) ? (144484227) : (-409568650))) : (arr_4 [2] [2]));
                var_23 = var_1;
                var_24 = ((1618329116) ^ (min((1620072339), (arr_1 [i_0 - 2]))));
            }
            for (int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                var_25 = ((((/* implicit */_Bool) -1612374238)) ? (-767973128) : ((-2147483647 - 1)));
                var_26 = -487319577;
            }
            for (int i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                var_27 = ((((764487565) <= (296977530))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0 - 4] [i_1 - 1] [i_1] [i_1 - 1]))))) : (((((/* implicit */_Bool) -112723779)) ? (296977530) : (-1247287194))));
                var_28 = min((min((-16), (-1484621997))), (((((/* implicit */_Bool) -808672545)) ? (1334019508) : (-1591704879))));
                var_29 = arr_0 [i_0 - 4];
            }
            var_30 = min((2047), (487319576));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                for (int i_7 = 1; i_7 < 10; i_7 += 4) 
                {
                    {
                        var_31 = ((2147483647) / (min((-1591704879), (max((-757003216), (808672544))))));
                        var_32 = ((int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0 - 2] [i_1 - 1] [i_0 - 2])) ? (arr_16 [i_0] [i_0 + 1] [i_1 + 1] [i_0]) : (arr_16 [i_0 - 4] [i_0 - 4] [i_1 + 1] [i_0 - 4])));
                        var_33 = ((1520966228) << (((391014780) - (391014780))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 15; i_8 += 1) 
    {
        var_34 = (~(1618329123));
        var_35 = arr_21 [i_8];
    }
    for (int i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
        {
            var_36 = arr_17 [i_9];
            /* LoopSeq 2 */
            for (int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                var_37 = ((/* implicit */int) ((((int) -572917959)) <= (-1348671122)));
                var_38 = (-(max((((2080374784) - (2147483647))), (-1620072337))));
            }
            for (int i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                /* LoopSeq 4 */
                for (int i_13 = 2; i_13 < 10; i_13 += 4) 
                {
                    var_39 = ((((/* implicit */_Bool) (+(1558609124)))) ? (((((/* implicit */_Bool) arr_18 [i_13] [i_13 - 2] [i_13 - 1] [i_9] [i_9])) ? (2147483644) : (arr_18 [i_9] [i_13 - 1] [i_13 - 1] [i_13] [i_9]))) : (((((/* implicit */_Bool) arr_18 [i_13 - 1] [i_13 - 1] [i_13 - 2] [i_10] [11])) ? (var_5) : (arr_18 [i_13] [i_13 + 1] [i_13 - 2] [i_12] [i_12]))));
                    var_40 = (-(-808672544));
                    var_41 = 875031748;
                }
                /* vectorizable */
                for (int i_14 = 4; i_14 < 10; i_14 += 4) 
                {
                    var_42 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_14 - 1]))));
                    /* LoopSeq 1 */
                    for (int i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        var_43 = ((arr_27 [i_14 - 2] [i_14 - 2]) | ((-2147483647 - 1)));
                        var_44 = arr_21 [i_15];
                        var_45 = ((var_6) / (arr_24 [i_14 - 2] [5]));
                    }
                }
                /* vectorizable */
                for (int i_16 = 2; i_16 < 9; i_16 += 4) 
                {
                    var_46 = ((int) (~(arr_41 [i_9] [i_9] [i_12] [i_16] [10])));
                    var_47 = ((/* implicit */int) ((((/* implicit */_Bool) 1968888131)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (2096185134) : (268427264))))));
                    var_48 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_16 + 1] [i_12] [i_9] [i_16 + 2] [i_10]))));
                    var_49 = (-(875031748));
                }
                /* vectorizable */
                for (int i_17 = 2; i_17 < 9; i_17 += 1) 
                {
                    var_50 = ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_10] [i_17 - 1] [i_12] [i_17])) && (((/* implicit */_Bool) 268304384))));
                    var_51 = ((2147475456) - (909112218));
                    var_52 = ((/* implicit */int) (((-2147483647 - 1)) > (2147483647)));
                }
                var_53 = 0;
                var_54 = max((((((int) var_1)) * (((/* implicit */int) ((arr_13 [i_9] [10] [i_9] [i_9]) >= ((-2147483647 - 1))))))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (-297546200) : (max((-441558290), (arr_41 [i_9] [i_9] [i_10] [i_9] [i_12]))))));
                var_55 = var_14;
                var_56 = -1655824542;
            }
            /* LoopNest 2 */
            for (int i_18 = 2; i_18 < 10; i_18 += 4) 
            {
                for (int i_19 = 0; i_19 < 11; i_19 += 1) 
                {
                    {
                        var_57 = (+(((((/* implicit */_Bool) arr_11 [i_18 - 1] [i_18 + 1])) ? (arr_11 [i_18 - 1] [i_18 - 1]) : (arr_11 [i_18 - 2] [i_18 - 2]))));
                        /* LoopSeq 2 */
                        for (int i_20 = 3; i_20 < 10; i_20 += 1) /* same iter space */
                        {
                            var_58 = (~(((int) -1967433449)));
                            var_59 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) max((-837646185), (1657958292)))))));
                            var_60 = ((int) min((((-909112218) | (var_11))), (((/* implicit */int) ((-297546175) >= (-487319582))))));
                            var_61 = ((int) (~(((int) var_5))));
                            var_62 = ((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (arr_10 [i_9] [i_10] [i_18 + 1]) : (((-440902719) / (((((/* implicit */_Bool) 1520966212)) ? (-832458931) : (var_1))))));
                        }
                        for (int i_21 = 3; i_21 < 10; i_21 += 1) /* same iter space */
                        {
                            var_63 = 909112218;
                            var_64 = ((((/* implicit */_Bool) ((arr_15 [i_18 - 2]) / (arr_15 [i_18 + 1])))) ? ((-(-1020382617))) : ((-(2047))));
                            var_65 = max((((((/* implicit */_Bool) 1946488333)) ? (arr_33 [i_18 - 1] [i_18 - 1] [i_18 - 2]) : (arr_33 [i_18 - 1] [i_18] [i_18 - 1]))), (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 1520966212))))));
                            var_66 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_21 + 1] [i_18 - 1] [i_18 - 2]))))) != (arr_43 [3] [i_10] [i_18 - 1] [i_19] [3])));
                            var_67 = 893921408;
                        }
                        var_68 = -893921431;
                        var_69 = ((((((((/* implicit */_Bool) arr_9 [i_9] [i_18 - 2] [i_18] [i_9])) ? (-1520966228) : (var_10))) + (2147483647))) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_19] [i_18 + 1] [i_9])) ? (262543983) : (arr_22 [i_18])))) ? (((/* implicit */int) ((-703206310) == (var_10)))) : ((~(935548169))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (int i_22 = 0; i_22 < 11; i_22 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 11; i_23 += 4) 
            {
                for (int i_24 = 0; i_24 < 11; i_24 += 2) 
                {
                    {
                        var_70 = (+(-1180028550));
                        var_71 = (((~(var_3))) | (arr_59 [i_23]));
                    }
                } 
            } 
            var_72 = ((((/* implicit */_Bool) ((var_0) >> (((var_2) + (457846679)))))) ? (((int) 1520966228)) : (((int) var_12)));
            var_73 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((var_10) + (2147483647))) >> (((var_11) - (1727689073))))))));
        }
        var_74 = ((int) ((arr_21 [i_9]) == (arr_21 [i_9])));
        var_75 = ((/* implicit */int) (((-(((((/* implicit */_Bool) var_0)) ? (var_8) : (arr_51 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [5]))))) >= (max((arr_35 [2] [i_9] [i_9] [2] [i_9]), (arr_35 [i_9] [i_9] [i_9] [i_9] [i_9])))));
        var_76 = (+(347081466));
        var_77 = max((((int) arr_15 [i_9])), ((((~(arr_35 [5] [i_9] [5] [i_9] [9]))) / (arr_44 [i_9] [i_9] [i_9] [i_9]))));
    }
    var_78 = var_5;
    var_79 = ((((((/* implicit */_Bool) 2086115282)) && (((/* implicit */_Bool) 49718540)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((((/* implicit */_Bool) -1613163116)) ? (1126521329) : (-487319577))) << (((var_9) - (318139474))))));
    /* LoopNest 2 */
    for (int i_25 = 0; i_25 < 20; i_25 += 3) 
    {
        for (int i_26 = 4; i_26 < 17; i_26 += 4) 
        {
            {
                var_80 = ((/* implicit */int) (((-(var_5))) <= (((int) 1879048192))));
                var_81 = ((((/* implicit */_Bool) min((var_9), (49718561)))) ? ((-(1520966228))) : ((~(((/* implicit */int) ((-598476929) == (-1226498241)))))));
                var_82 = var_14;
            }
        } 
    } 
}
