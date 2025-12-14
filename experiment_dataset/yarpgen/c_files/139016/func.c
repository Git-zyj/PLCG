/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139016
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
    var_10 &= ((/* implicit */short) (((((+(var_0))) | ((+(var_5))))) + (((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */int) (signed char)-111)), (var_7))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))));
    var_11 = ((/* implicit */short) (+(((((/* implicit */int) var_3)) + (((/* implicit */int) var_3))))));
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((short) ((((var_0) ^ (((/* implicit */int) var_3)))) << (((((/* implicit */int) var_9)) - (80)))))))));
    var_13 ^= ((/* implicit */short) ((var_6) + (((((/* implicit */_Bool) min((-506426075), (-613671773)))) ? (((((/* implicit */_Bool) (signed char)7)) ? (0) : (((/* implicit */int) (signed char)44)))) : (((/* implicit */int) (short)-31184))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_14 ^= ((((/* implicit */_Bool) arr_0 [16] [16])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((signed char) arr_1 [(short)12]))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) ((var_7) & (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (arr_1 [i_1])))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    for (int i_4 = 1; i_4 < 21; i_4 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */int) max((var_16), (-1)));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((int) (!(((/* implicit */_Bool) ((-1) | (((/* implicit */int) var_1)))))))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0]))))) <= (((arr_6 [(signed char)15] [i_2] [i_0] [i_0]) + (arr_6 [(short)6] [i_1] [18] [i_3])))));
                        }
                    } 
                } 
            } 
        }
        for (short i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
        {
            arr_14 [i_0] [i_0] = ((((arr_9 [i_0] [(signed char)14] [(signed char)14] [(signed char)14] [12]) + (2147483647))) >> (((((/* implicit */int) ((signed char) arr_3 [i_0] [i_0] [i_5]))) + (41))));
            arr_15 [i_0] [i_0] [(signed char)9] = ((/* implicit */int) arr_10 [9] [(signed char)17] [(signed char)17] [11] [i_0]);
            var_19 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 1253253373)) ? (((/* implicit */int) (short)-29395)) : (0))));
            var_20 = ((/* implicit */short) (((~((+(arr_9 [(short)18] [19] [i_0] [i_0] [i_0]))))) + (((((/* implicit */_Bool) ((arr_12 [i_0] [5] [i_0]) | (arr_9 [(short)8] [13] [13] [(short)18] [23])))) ? ((~(((/* implicit */int) var_8)))) : (max((arr_1 [i_0]), (arr_4 [i_0] [i_0] [9])))))));
        }
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) (short)29394)))))));
    }
    for (signed char i_6 = 3; i_6 < 22; i_6 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_7 = 4; i_7 < 22; i_7 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_8 = 3; i_8 < 20; i_8 += 3) 
            {
                var_22 ^= ((/* implicit */signed char) max((((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6])) ? (0) : (1209486015))))), ((-(arr_22 [i_6] [i_7] [i_6] [(signed char)0])))));
                arr_24 [(signed char)20] [i_6] [i_6] = ((/* implicit */short) (((~(((/* implicit */int) arr_3 [i_7 - 3] [i_6] [i_7 + 1])))) & (max((((/* implicit */int) ((((/* implicit */_Bool) 586130046)) || (((/* implicit */_Bool) 0))))), (((((/* implicit */_Bool) var_6)) ? (arr_1 [i_6]) : (var_6)))))));
                arr_25 [i_7] [i_7] |= ((/* implicit */int) ((signed char) (+(max((-1998021575), (arr_1 [i_7]))))));
                arr_26 [i_6] [3] [3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_6 + 1])) & (((/* implicit */int) arr_16 [i_6 - 3]))))) ? (min(((+(arr_12 [11] [5] [5]))), (((((/* implicit */_Bool) var_9)) ? (-1) : (((/* implicit */int) (signed char)-88)))))) : ((+(arr_13 [i_6] [i_6 - 3] [(short)8])))));
            }
            for (int i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((int) arr_19 [i_7] [i_7])) + (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_9 [6] [6] [6] [6] [6])))))))))))));
                var_24 ^= ((((/* implicit */_Bool) arr_30 [0] [12])) ? (((((/* implicit */_Bool) (+(arr_13 [i_7] [16] [i_7])))) ? (((/* implicit */int) var_2)) : (min((-2070490355), (((/* implicit */int) arr_5 [18] [i_7])))))) : (((/* implicit */int) arr_21 [i_7])));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 24; i_10 += 4) 
                {
                    for (int i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) arr_18 [i_6]);
                            arr_37 [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_27 [i_9] [5])), (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((var_6) + (1477021919))))))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                var_26 |= ((/* implicit */signed char) (+(arr_6 [i_6] [i_6 - 3] [i_6 + 1] [(short)9])));
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 24; i_13 += 4) 
                {
                    for (short i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        {
                            arr_45 [4] [3] [i_6] [(short)6] [i_6] [15] = ((/* implicit */signed char) (~(arr_18 [i_6])));
                            var_27 = ((/* implicit */short) (~(arr_12 [i_12] [i_12] [i_12])));
                            var_28 = ((/* implicit */int) ((((/* implicit */int) var_1)) > (((int) (short)-29395))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_6 - 2] [i_6 - 2] [10] [i_7 - 2] [4])) ? (arr_35 [i_6 + 1] [i_6 + 1] [23] [i_7 + 1] [i_6 + 1]) : (arr_35 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_7 - 1] [4]))))));
                var_30 = ((/* implicit */signed char) ((((int) var_6)) > (arr_20 [i_6 + 1] [i_6 + 1] [i_7 + 2])));
            }
            var_31 = (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (arr_4 [i_6] [1] [(signed char)12]) : (arr_35 [(signed char)7] [(signed char)7] [9] [(signed char)7] [(signed char)13]))))));
            arr_46 [i_7] [i_7] |= ((((/* implicit */int) ((short) arr_36 [i_7]))) << (((/* implicit */int) ((arr_36 [i_7]) >= (((/* implicit */int) var_9))))));
        }
        for (int i_15 = 4; i_15 < 22; i_15 += 4) /* same iter space */
        {
            var_32 += ((/* implicit */signed char) ((int) max((var_3), (((/* implicit */signed char) ((((/* implicit */int) (short)29394)) != (((/* implicit */int) (signed char)40))))))));
            arr_50 [i_6] = ((/* implicit */short) (+(((((/* implicit */_Bool) (~(0)))) ? ((-(arr_13 [i_6] [i_6] [i_6]))) : (min((arr_38 [i_6] [17] [16] [i_6]), (0)))))));
        }
        for (int i_16 = 4; i_16 < 22; i_16 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (short i_17 = 0; i_17 < 24; i_17 += 4) 
            {
                for (signed char i_18 = 0; i_18 < 24; i_18 += 1) 
                {
                    for (int i_19 = 0; i_19 < 24; i_19 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) var_0);
                            arr_60 [i_6] [(short)5] [(short)5] [(short)2] [i_6] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_3)) ? (arr_22 [i_16 + 1] [i_6] [i_6] [i_6]) : (arr_59 [14] [i_6 + 1] [i_16 + 1] [i_6 + 1] [1]))));
                        }
                    } 
                } 
            } 
            var_34 += ((int) min((((/* implicit */short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_59 [6] [6] [6] [6] [11]))))), (min((((/* implicit */short) var_9)), (var_1)))));
            /* LoopSeq 2 */
            for (short i_20 = 0; i_20 < 24; i_20 += 1) 
            {
                arr_64 [17] [i_6] [(short)21] = max((min((arr_59 [(signed char)0] [(signed char)11] [(signed char)15] [i_6 + 2] [i_16 + 1]), (((/* implicit */int) arr_10 [i_6] [(short)16] [(short)6] [i_6 + 1] [i_6])))), (((((/* implicit */int) arr_27 [(signed char)11] [1])) ^ (((/* implicit */int) arr_10 [(short)15] [(signed char)23] [(signed char)23] [i_6 + 1] [i_6])))));
                arr_65 [i_6] [11] [i_6] [(signed char)14] = ((/* implicit */short) ((int) max((arr_42 [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_6 + 2]), (arr_42 [i_6 + 1] [i_6 + 1] [1] [i_6 + 1] [(short)2]))));
            }
            for (short i_21 = 0; i_21 < 24; i_21 += 3) 
            {
                var_35 *= ((((/* implicit */_Bool) min((arr_4 [i_6 - 3] [i_6 + 2] [i_6 + 2]), (arr_43 [i_6 + 1] [i_6 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_6 - 3] [i_6 - 2]))))) : (arr_4 [i_6 - 3] [i_6 - 2] [20]));
                /* LoopSeq 2 */
                for (int i_22 = 0; i_22 < 24; i_22 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_23 = 0; i_23 < 24; i_23 += 4) /* same iter space */
                    {
                        arr_73 [i_23] [2] [14] [(signed char)18] [14] [(short)14] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (signed char)-63)))) ^ (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) min((arr_16 [21]), (arr_70 [(signed char)22] [0] [7] [(short)21])))))))));
                        var_36 ^= ((/* implicit */short) min((1747154273), (((((int) arr_55 [i_23] [(signed char)8] [i_23])) | (((/* implicit */int) min((var_1), (arr_2 [(signed char)18]))))))));
                        arr_74 [(short)6] [11] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((((((int) var_8)) + (((/* implicit */int) ((arr_66 [i_6] [(signed char)11]) > (((/* implicit */int) var_8))))))) + (2147483647))) << (((((((/* implicit */int) ((signed char) (~(arr_20 [i_6] [9] [8]))))) + (101))) - (17)))));
                    }
                    for (signed char i_24 = 0; i_24 < 24; i_24 += 4) /* same iter space */
                    {
                        arr_77 [(signed char)19] [(signed char)19] [i_6] [1] [(signed char)19] = ((/* implicit */short) ((((var_5) != (arr_12 [i_16 - 1] [i_16 - 1] [(short)8]))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-29395)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) var_9)))), (((int) (short)(-32767 - 1))))))));
                        var_37 = ((/* implicit */short) (~(((/* implicit */int) var_3))));
                        arr_78 [19] [i_6] [19] [i_6] [(short)6] = ((/* implicit */short) max((max((((/* implicit */int) var_3)), (min((var_4), (arr_18 [i_6]))))), (((((/* implicit */int) arr_31 [i_16 - 2] [i_16 - 2] [i_16 - 2] [i_16 - 2] [i_16 - 2] [i_16 - 2])) - (arr_17 [i_6])))));
                        arr_79 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */int) (signed char)-17);
                    }
                    var_38 ^= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)95)), (0))))))) << (((((((/* implicit */int) arr_54 [i_6] [(signed char)18] [6])) + (((/* implicit */int) var_9)))) - (59)))));
                    var_39 = ((/* implicit */int) ((min((arr_40 [i_16 - 1] [0] [i_16 - 1] [i_16 - 1] [i_16 - 2] [i_16 + 2]), (arr_40 [i_16 - 2] [i_16 - 2] [i_16 - 1] [16] [i_16 + 1] [i_16 - 2]))) < (((/* implicit */int) min((((/* implicit */short) (signed char)-35)), ((short)-8208))))));
                    arr_80 [i_6] [(short)8] [i_6] [(short)8] = ((int) arr_32 [3] [3] [21] [3]);
                }
                for (short i_25 = 0; i_25 < 24; i_25 += 4) 
                {
                    arr_83 [i_6] = ((/* implicit */int) var_8);
                    var_40 = ((/* implicit */short) var_4);
                    arr_84 [(signed char)16] [i_6] [(short)15] [i_6] [(short)15] = ((((/* implicit */_Bool) ((arr_4 [i_6 - 3] [20] [i_25]) / (arr_4 [i_6] [i_6 + 1] [(signed char)0])))) ? ((-(arr_56 [i_6 - 3] [i_6 - 1]))) : (((int) arr_70 [i_16 + 2] [(short)6] [(short)6] [(short)0])));
                }
            }
            /* LoopNest 2 */
            for (signed char i_26 = 0; i_26 < 24; i_26 += 4) 
            {
                for (int i_27 = 1; i_27 < 22; i_27 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_28 = 1; i_28 < 22; i_28 += 1) 
                        {
                            arr_95 [i_6] [17] [(short)1] [0] [17] [17] [5] = ((/* implicit */short) ((signed char) (signed char)127));
                            arr_96 [i_6] [20] [i_6] [i_6] [3] [i_6] [20] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-2435)) || (((/* implicit */_Bool) arr_69 [17] [i_27 + 1] [i_28 + 1] [i_27 + 1] [i_6]))))) ^ (((/* implicit */int) var_1))));
                            arr_97 [(short)16] [i_6] [i_6] [(short)16] = ((/* implicit */short) (-((+(((var_0) - (((/* implicit */int) (short)6470))))))));
                            var_41 = ((/* implicit */int) max((var_41), (max(((+((+(2047))))), ((+(arr_38 [i_27 + 1] [i_28 + 1] [10] [i_26])))))));
                        }
                        for (int i_29 = 0; i_29 < 24; i_29 += 4) 
                        {
                            var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) (+((~(((/* implicit */int) ((signed char) arr_23 [23] [11]))))))))));
                            var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) max(((((+(var_6))) / (arr_22 [i_6] [i_26] [i_26] [i_27 + 2]))), (((/* implicit */int) ((max((((/* implicit */int) (short)-29395)), (arr_56 [i_16] [22]))) == (((/* implicit */int) arr_5 [2] [i_16]))))))))));
                            var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) (+((-(((/* implicit */int) ((((/* implicit */int) arr_27 [i_6] [i_6])) < (var_6)))))))))));
                            arr_101 [(signed char)7] [i_6] = ((/* implicit */int) ((((/* implicit */int) ((short) (short)-16966))) >= (((/* implicit */int) ((short) arr_7 [(signed char)8] [i_27 - 1] [i_6] [i_6] [(signed char)20] [(signed char)20])))));
                        }
                        for (int i_30 = 0; i_30 < 24; i_30 += 4) 
                        {
                            arr_104 [18] [i_6] [(signed char)22] [i_6] [i_6] = ((/* implicit */signed char) ((int) ((int) 12)));
                            arr_105 [12] [i_6] [(short)0] [12] [(short)0] [12] = ((int) max((arr_69 [i_6 - 3] [i_16 + 1] [(short)20] [(signed char)2] [i_16 + 1]), (arr_30 [i_6 + 2] [i_16 + 2])));
                            arr_106 [i_6] = ((((/* implicit */_Bool) arr_29 [(short)11] [(short)11] [19] [i_6])) ? (((((/* implicit */_Bool) max((var_6), (((/* implicit */int) arr_54 [(signed char)9] [17] [16]))))) ? (((int) arr_51 [i_26] [i_6] [i_26])) : (min((((/* implicit */int) arr_87 [(short)2] [(short)17] [(short)2])), (var_0))))) : (arr_94 [6] [i_6]));
                        }
                        /* LoopSeq 2 */
                        for (int i_31 = 0; i_31 < 24; i_31 += 4) 
                        {
                            var_45 = -1;
                            var_46 = ((/* implicit */int) ((short) arr_56 [(short)7] [(short)7]));
                            var_47 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(764151961))))));
                            arr_109 [i_6] [i_6] [i_6] [i_6] [i_6] = ((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) (signed char)6)) : (-13))) : (((/* implicit */int) (signed char)-122)))) >> (((((/* implicit */int) (short)-2435)) + (2458))));
                        }
                        for (signed char i_32 = 0; i_32 < 24; i_32 += 1) 
                        {
                            arr_112 [i_16] [i_6] [i_16] [(signed char)18] [17] [(short)6] = ((/* implicit */int) ((min((((((/* implicit */_Bool) (signed char)127)) ? (var_5) : (-1739185118))), (((/* implicit */int) var_2)))) != (min((min((arr_93 [i_6] [i_6] [11] [(signed char)5] [11]), (((/* implicit */int) var_1)))), (arr_43 [(short)9] [i_27 - 1])))));
                            arr_113 [i_6] [i_6] [i_6] [2] [10] [2] [(signed char)13] = (~(arr_91 [i_26] [12] [12] [(short)11] [i_6]));
                            arr_114 [i_6] [(short)0] [i_6] [i_6] [(short)0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [i_6])) ? (arr_85 [i_6 + 1] [i_6 + 1]) : (arr_17 [i_6]))) >= (((((/* implicit */_Bool) arr_85 [i_6 - 3] [(short)1])) ? (((/* implicit */int) var_1)) : (arr_17 [i_6])))));
                        }
                    }
                } 
            } 
        }
        arr_115 [0] [i_6] = ((/* implicit */short) (-((~(((int) var_7))))));
    }
    for (int i_33 = 0; i_33 < 13; i_33 += 1) 
    {
        arr_118 [i_33] = ((max((((/* implicit */int) var_3)), (arr_76 [i_33] [(short)16] [i_33] [i_33] [i_33]))) % (min((arr_13 [i_33] [(signed char)11] [i_33]), (((/* implicit */int) var_8)))));
        var_48 = ((/* implicit */short) (~(((arr_85 [i_33] [i_33]) & (var_4)))));
        arr_119 [i_33] = (+(min((((/* implicit */int) ((var_0) < (((/* implicit */int) var_2))))), (min((var_7), (var_4))))));
    }
}
