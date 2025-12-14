/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154735
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
    var_13 = ((/* implicit */int) max((var_13), (min((max((min((((/* implicit */int) (signed char)122)), (var_4))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))))), ((~(((int) var_9))))))));
    var_14 = ((/* implicit */int) ((signed char) min((((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (signed char)127)))), (var_4))));
    var_15 = min((min((var_3), ((~(-870582263))))), (((/* implicit */int) (((!(((/* implicit */_Bool) -1987069713)))) && ((!(((/* implicit */_Bool) var_12))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((var_4) > (((/* implicit */int) arr_2 [i_1])))))) << (((((/* implicit */int) arr_2 [i_0])) + (74))))))));
            arr_6 [i_1] [i_1] = ((/* implicit */signed char) min((min((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) arr_2 [i_0])))), (arr_4 [i_1] [i_1 + 1] [i_0]))), (min((var_7), (min((-504826340), (((/* implicit */int) arr_3 [i_0]))))))));
            var_17 = (~(((/* implicit */int) arr_5 [i_0])));
        }
        for (int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            var_18 = min(((-(((/* implicit */int) arr_5 [i_0])))), ((~(var_9))));
            arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_6)) : (max(((~(1072693248))), (var_1)))));
            arr_11 [i_2] [i_0] = (-(((((((/* implicit */_Bool) 504826340)) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])))) ? (((/* implicit */int) min(((signed char)-105), (arr_1 [i_0])))) : (1116275543))));
        }
        for (signed char i_3 = 3; i_3 < 13; i_3 += 1) 
        {
            var_19 = ((/* implicit */signed char) ((min((((/* implicit */int) (signed char)-12)), (2147483647))) | (((/* implicit */int) ((signed char) 870582262)))));
            arr_15 [i_0] [i_3] = ((/* implicit */int) min(((signed char)-43), (arr_12 [(signed char)8])));
            arr_16 [i_3] [i_0] = ((/* implicit */signed char) var_1);
        }
        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_12 [i_4])) >> (((var_2) + (12291710)))))))) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-118)) > (((/* implicit */int) var_11))))))))));
            /* LoopSeq 2 */
            for (signed char i_5 = 2; i_5 < 15; i_5 += 3) 
            {
                var_21 *= ((/* implicit */signed char) ((int) (-(((int) (signed char)39)))));
                arr_25 [i_0] [i_4] [i_0] = (-(((((/* implicit */_Bool) ((1072693261) / (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((signed char) arr_9 [i_0] [i_4]))) : ((~(((/* implicit */int) (signed char)-105)))))));
                arr_26 [i_0] [i_4] [i_4] [i_4] = ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_4])) <= (((/* implicit */int) arr_12 [i_5 + 2]))))) + (max((arr_4 [i_0] [i_4] [i_5 + 1]), (arr_4 [i_4] [i_4] [i_5 + 2]))));
            }
            for (int i_6 = 4; i_6 < 15; i_6 += 3) 
            {
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-39)) | ((-2147483647 - 1)))))));
                var_23 = arr_5 [(signed char)16];
                /* LoopSeq 2 */
                for (signed char i_7 = 1; i_7 < 15; i_7 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */signed char) (+((+(arr_28 [i_0] [i_4] [1] [i_7])))));
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) max((arr_23 [i_7 + 2] [i_4] [i_4] [i_7]), (arr_23 [i_7 - 1] [i_4] [i_7 - 1] [i_7])));
                        var_25 = arr_3 [i_0];
                        arr_35 [7] [i_4] [7] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) arr_7 [i_8] [i_4] [i_0]);
                        arr_36 [i_0] [i_4] [i_6 + 1] [i_0] [i_8] &= (signed char)-17;
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_28 [i_0] [i_4] [i_8] [i_6 + 2]) : (((/* implicit */int) (signed char)-102))))) && (((/* implicit */_Bool) max((arr_28 [i_0] [i_4] [i_0] [i_6 + 2]), (arr_28 [7] [i_4] [i_6] [i_6 - 1]))))));
                    }
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) ((signed char) var_2)))))))));
                }
                for (signed char i_9 = 1; i_9 < 15; i_9 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_7 [i_9 - 1] [i_6 - 4] [i_6 - 4])) ? (((/* implicit */int) arr_27 [i_0] [i_9 + 2] [i_9 + 2] [i_6 - 3])) : (arr_28 [i_6] [i_6] [i_4] [i_0])))));
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        var_29 = arr_18 [i_9] [i_0];
                        var_30 = ((/* implicit */int) (signed char)127);
                        arr_43 [i_0] [i_0] [i_0] [11] [i_0] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) min((-1072693261), (((/* implicit */int) var_0)))))) + (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_0))))))));
                        arr_44 [12] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (arr_32 [i_0] [i_9] [i_6] [i_4] [i_0])))) ? (((int) var_9)) : (((/* implicit */int) var_11))))) ? (((int) min((870582289), (((/* implicit */int) arr_12 [i_9]))))) : (((/* implicit */int) max((((signed char) var_11)), (max(((signed char)7), (var_12))))))));
                        arr_45 [i_9] [i_6 + 1] [i_9] [i_10] = (signed char)44;
                    }
                    for (int i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        var_31 = arr_13 [i_11];
                        var_32 = ((/* implicit */int) min((var_32), (((arr_30 [i_0] [i_6] [i_9] [i_11]) + ((+(max((arr_46 [(signed char)6] [i_4] [16] [i_4] [i_4] [i_4] [i_4]), (((/* implicit */int) arr_18 [i_0] [i_0]))))))))));
                    }
                }
            }
            var_33 ^= ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) var_7)))));
        }
        var_34 = ((int) max(((-(((/* implicit */int) arr_12 [i_0])))), (min((var_10), (((/* implicit */int) (signed char)82))))));
    }
    for (signed char i_12 = 2; i_12 < 22; i_12 += 3) /* same iter space */
    {
        arr_53 [i_12] = ((((/* implicit */_Bool) ((int) (+(var_7))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((var_10) | (((/* implicit */int) arr_51 [i_12])))) : (((/* implicit */int) min((arr_49 [i_12]), ((signed char)22)))))) : (((/* implicit */int) var_11)));
        var_35 = arr_49 [(signed char)11];
        /* LoopSeq 4 */
        for (signed char i_13 = 0; i_13 < 23; i_13 += 4) 
        {
            arr_56 [i_12] [i_13] [i_13] = ((/* implicit */signed char) (-((+(((/* implicit */int) (signed char)-1))))));
            arr_57 [i_13] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-103)) + (var_9)));
            var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_54 [i_12] [i_12])) ? (25165824) : (var_1))), (((-1079672710) / (-1072693249))))) & ((-(((/* implicit */int) (signed char)127)))))))));
            var_37 += ((/* implicit */int) ((signed char) min((min((((/* implicit */int) var_8)), (arr_54 [i_12] [i_12]))), (((((/* implicit */int) var_6)) / (arr_54 [i_13] [(signed char)21]))))));
        }
        for (signed char i_14 = 3; i_14 < 22; i_14 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_15 = 0; i_15 < 23; i_15 += 4) 
            {
                arr_63 [0] [0] [i_15] = max((((/* implicit */int) arr_58 [i_12])), ((+(-1339852468))));
                var_38 = ((/* implicit */signed char) max(((~(((((/* implicit */int) var_11)) | (arr_50 [i_15]))))), ((~(((/* implicit */int) arr_62 [i_12 - 2] [i_14 - 3]))))));
                arr_64 [i_12 - 2] [i_14] [i_15] [i_15] = ((signed char) 2147483647);
                /* LoopSeq 1 */
                for (signed char i_16 = 3; i_16 < 21; i_16 += 3) 
                {
                    var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) min((max((((/* implicit */int) arr_59 [i_15])), (var_4))), (((/* implicit */int) ((signed char) (signed char)127)))))) ? ((+(((int) 1073741824)))) : (((/* implicit */int) min((((signed char) (signed char)-127)), (min((var_12), (arr_51 [(signed char)21])))))))))));
                    arr_67 [i_12] [i_14] [i_15] [6] [i_12] = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) (+(2069277800))))), ((+(arr_66 [i_16] [i_16 - 3] [i_16 - 2] [i_16] [i_16 - 2])))));
                }
                arr_68 [1] |= ((/* implicit */signed char) min((((/* implicit */int) max(((signed char)109), ((signed char)(-127 - 1))))), (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) 536870848)) ? (((/* implicit */int) arr_65 [i_12] [0] [i_14 + 1] [i_15])) : (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_59 [i_12])) : (var_3)))))));
            }
            arr_69 [i_12] [i_12] = ((((((/* implicit */_Bool) ((((/* implicit */int) arr_55 [(signed char)22])) / (var_7)))) ? (((int) (signed char)120)) : (((/* implicit */int) min((arr_61 [(signed char)4] [i_12] [i_12] [i_12]), ((signed char)97)))))) * (min((((((/* implicit */int) arr_58 [i_12])) / (var_9))), (2147483645))));
        }
        for (signed char i_17 = 0; i_17 < 23; i_17 += 4) /* same iter space */
        {
            arr_72 [i_12 - 1] [i_12 - 1] [i_17] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_3) - (((/* implicit */int) var_8))))) ? (max((((/* implicit */int) arr_51 [i_12])), (min((var_3), (arr_66 [i_12] [i_12] [i_17] [i_17] [i_17]))))) : (var_4)));
            arr_73 [17] = ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) min((arr_59 [i_12]), ((signed char)-117)))) : (((((/* implicit */int) var_11)) & (arr_71 [i_12] [i_17] [i_17]))))) & (((((/* implicit */int) (signed char)120)) & (((/* implicit */int) (signed char)-121)))));
            /* LoopSeq 2 */
            for (signed char i_18 = 0; i_18 < 23; i_18 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_19 = 2; i_19 < 22; i_19 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_20 = 3; i_20 < 20; i_20 += 2) 
                    {
                        arr_82 [14] [i_17] [i_17] [i_17] [i_17] = ((((/* implicit */_Bool) var_11)) ? (max(((+(arr_71 [i_20] [i_18] [i_12]))), (((var_4) + (((/* implicit */int) var_0)))))) : (((/* implicit */int) ((signed char) var_9))));
                        arr_83 [i_12 + 1] [i_17] [(signed char)1] [i_18] [i_19] [i_20] = ((/* implicit */int) (signed char)126);
                    }
                    var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((int) (-2147483647 - 1))))));
                }
                /* LoopSeq 3 */
                for (signed char i_21 = 3; i_21 < 22; i_21 += 2) 
                {
                    var_41 = (signed char)24;
                    var_42 = ((/* implicit */signed char) -1000095689);
                    var_43 = ((/* implicit */int) var_8);
                }
                for (int i_22 = 0; i_22 < 23; i_22 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_23 = 1; i_23 < 21; i_23 += 1) 
                    {
                        var_44 = ((/* implicit */signed char) max((var_44), (min((((/* implicit */signed char) ((((int) -2147483645)) <= (((((/* implicit */_Bool) arr_54 [i_12] [i_17])) ? (arr_86 [i_17]) : (var_4)))))), (arr_78 [i_12] [i_12 - 1] [(signed char)2])))));
                        arr_92 [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */int) var_8);
                    }
                    for (int i_24 = 2; i_24 < 19; i_24 += 4) 
                    {
                        var_45 = ((/* implicit */signed char) max((var_45), (var_8)));
                        var_46 ^= ((/* implicit */signed char) arr_76 [i_12] [i_12] [i_22] [i_24]);
                        arr_97 [i_12] [(signed char)4] [i_18] [i_17] [i_24] [(signed char)0] [i_12] = ((/* implicit */signed char) max((((((/* implicit */_Bool) -2147483646)) ? (((/* implicit */int) arr_65 [i_12] [i_12] [i_12] [i_12 + 1])) : (((/* implicit */int) arr_65 [i_12] [i_12] [16] [i_12 - 2])))), (((((/* implicit */_Bool) ((int) -536870858))) ? (arr_89 [i_12 + 1] [i_17]) : (var_7)))));
                    }
                    arr_98 [i_12 - 2] [i_17] [(signed char)3] [(signed char)3] = ((/* implicit */signed char) ((((int) ((arr_79 [i_12]) == (((/* implicit */int) var_6))))) << ((((-(((((/* implicit */_Bool) var_0)) ? (-1378643089) : (-457539499))))) - (1378643064)))));
                    /* LoopSeq 1 */
                    for (int i_25 = 1; i_25 < 22; i_25 += 2) 
                    {
                        arr_103 [i_12] [i_12] [i_12] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) ((var_9) - (arr_60 [i_12 - 2] [0])))))));
                        arr_104 [(signed char)4] [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */int) min((var_8), (((signed char) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) arr_100 [i_18] [i_25])))))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_26 = 2; i_26 < 22; i_26 += 1) 
                    {
                        var_47 = ((/* implicit */signed char) ((arr_54 [i_12 + 1] [i_12 - 2]) != (arr_54 [i_12 + 1] [i_12 + 1])));
                        arr_107 [i_12] = (+(((/* implicit */int) (((~(892608647))) > (var_3)))));
                    }
                    for (signed char i_27 = 0; i_27 < 23; i_27 += 2) 
                    {
                        var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) (-2147483647 - 1)))));
                        var_49 = ((/* implicit */int) max((var_49), (max(((~((+(var_3))))), ((((~(-457539499))) & (((((/* implicit */_Bool) -1000095689)) ? (((/* implicit */int) (signed char)24)) : (2069277800)))))))));
                        arr_112 [i_17] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (2147483645) : (((/* implicit */int) arr_55 [i_12 - 2])))));
                        var_50 = arr_86 [i_12];
                        arr_113 [i_27] [i_22] [i_12] [8] [i_12] = ((/* implicit */signed char) (-(((/* implicit */int) var_5))));
                    }
                    for (signed char i_28 = 0; i_28 < 23; i_28 += 1) 
                    {
                        var_51 ^= ((/* implicit */signed char) ((int) max((var_8), (var_6))));
                        var_52 = ((/* implicit */signed char) arr_50 [i_22]);
                    }
                }
                for (signed char i_29 = 0; i_29 < 23; i_29 += 2) 
                {
                    var_53 = ((/* implicit */signed char) arr_99 [i_18] [i_17] [i_18] [i_29] [i_18]);
                    var_54 = ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                }
                var_55 = ((/* implicit */signed char) (-(var_1)));
                arr_118 [i_12] [i_12] [i_17] = max(((((((+(((/* implicit */int) var_11)))) + (2147483647))) >> (((min((arr_79 [i_17]), (var_10))) - (378506078))))), (arr_60 [i_12 - 1] [i_12 + 1]));
                arr_119 [i_12] [i_18] [i_18] = (-(((/* implicit */int) arr_106 [i_12 - 1] [i_12 - 1] [i_12 - 2] [i_12 - 2] [i_12 - 2])));
            }
            for (int i_30 = 0; i_30 < 23; i_30 += 3) 
            {
                /* LoopSeq 3 */
                for (int i_31 = 4; i_31 < 22; i_31 += 3) 
                {
                    var_56 = 536870858;
                    var_57 ^= ((/* implicit */signed char) ((((var_1) ^ (arr_105 [i_12] [i_17] [i_30] [i_31 - 3]))) >> (((arr_79 [i_17]) - (378506050)))));
                }
                for (int i_32 = 2; i_32 < 20; i_32 += 3) 
                {
                    arr_126 [i_12] [i_12] = ((/* implicit */signed char) min(((~((+(892608647))))), (max((arr_90 [i_12] [i_12] [i_12] [i_32] [i_12 - 1] [i_32 - 2]), (arr_90 [i_12] [(signed char)12] [(signed char)20] [i_17] [i_12 + 1] [i_32 - 2])))));
                    arr_127 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */signed char) ((int) (((!(((/* implicit */_Bool) arr_78 [i_17] [i_17] [i_32])))) && (((((/* implicit */_Bool) arr_76 [i_12] [(signed char)17] [i_17] [i_32 - 1])) && (((/* implicit */_Bool) var_2)))))));
                    var_58 = ((/* implicit */int) arr_62 [i_12] [i_12]);
                }
                for (signed char i_33 = 0; i_33 < 23; i_33 += 1) 
                {
                    var_59 = ((/* implicit */signed char) var_3);
                    arr_130 [i_33] = ((/* implicit */signed char) (+(2147483646)));
                    /* LoopSeq 1 */
                    for (signed char i_34 = 0; i_34 < 23; i_34 += 2) 
                    {
                        arr_133 [i_33] [i_30] [i_30] [i_12] [i_33] = ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-114)) / (var_2))) << (((arr_71 [i_12] [i_12 - 1] [i_12]) - (702492489)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((2147483647), (130816))))))));
                        var_60 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((892608647) / (arr_95 [i_12 - 2] [i_12 - 2] [i_12 - 2])))) && (((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) arr_85 [i_33] [i_12]))))))));
                        arr_134 [i_12 + 1] [i_12] [i_33] [i_12 + 1] [i_12] [i_12] = ((/* implicit */signed char) min(((~(arr_60 [i_12 - 2] [i_12]))), ((-(arr_60 [i_30] [(signed char)10])))));
                    }
                }
                arr_135 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */signed char) 130816);
            }
            var_61 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_55 [i_12])) ? (((/* implicit */int) arr_55 [i_12])) : (((/* implicit */int) arr_55 [i_12 - 1])))));
        }
        for (signed char i_35 = 0; i_35 < 23; i_35 += 4) /* same iter space */
        {
            var_62 = ((/* implicit */int) ((max(((+(var_2))), (((((/* implicit */int) arr_117 [i_35] [i_35] [i_35] [i_35] [i_35])) / (arr_54 [9] [9]))))) <= (((((/* implicit */_Bool) (~(1523815952)))) ? (((/* implicit */int) ((signed char) 1844897779))) : (arr_54 [i_12] [i_12])))));
            var_63 = ((/* implicit */signed char) max((var_63), (min(((signed char)36), (((signed char) var_10))))));
        }
        var_64 = ((/* implicit */int) var_11);
    }
    for (signed char i_36 = 2; i_36 < 22; i_36 += 3) /* same iter space */
    {
        arr_141 [i_36] [i_36] = ((/* implicit */int) var_0);
        arr_142 [i_36] = ((/* implicit */signed char) var_2);
        var_65 = ((/* implicit */signed char) ((int) ((1778546430) ^ (-1511283044))));
    }
}
