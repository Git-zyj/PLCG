/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148148
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0];
        arr_3 [i_0] = arr_0 [i_0];
        arr_4 [i_0] [i_0] = var_6;
    }
    for (signed char i_1 = 2; i_1 < 22; i_1 += 1) 
    {
        var_11 = ((signed char) (signed char)17);
        arr_8 [i_1] [i_1] = (signed char)-17;
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))))) ? ((~(((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) var_8))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_2 = 3; i_2 < 23; i_2 += 3) 
        {
            var_13 = ((/* implicit */signed char) max((var_13), (var_1)));
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    for (signed char i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        {
                            var_14 = ((signed char) (signed char)127);
                            var_15 = ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
                            arr_19 [i_4] [i_2] [i_3] [i_4] [i_5 - 1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) (signed char)107))))));
                            var_16 = (signed char)-125;
                        }
                    } 
                } 
            } 
            var_17 = var_7;
            arr_20 [i_1] [i_1] = (signed char)33;
            arr_21 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-38)) < (((/* implicit */int) (signed char)-99))));
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            var_18 ^= (signed char)(-127 - 1);
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                for (signed char i_8 = 1; i_8 < 24; i_8 += 3) 
                {
                    for (signed char i_9 = 2; i_9 < 24; i_9 += 3) 
                    {
                        {
                            arr_30 [i_1] [i_1] [i_7] [(signed char)11] [i_9 - 1] [i_1 + 2] [i_9 - 1] = var_2;
                            arr_31 [i_1] [i_7] [i_7] [i_1] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) arr_28 [i_1] [i_1] [i_8 + 1] [i_9 - 1] [i_9] [i_9 - 1] [i_9]))));
                        }
                    } 
                } 
            } 
            var_19 = arr_16 [i_1] [i_1];
            /* LoopNest 2 */
            for (signed char i_10 = 1; i_10 < 23; i_10 += 1) 
            {
                for (signed char i_11 = 3; i_11 < 24; i_11 += 1) 
                {
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_34 [i_11 - 1] [i_11 - 2])) < (((/* implicit */int) var_5))));
                        arr_37 [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)4))));
                    }
                } 
            } 
        }
        for (signed char i_12 = 2; i_12 < 23; i_12 += 3) 
        {
            arr_40 [(signed char)12] [(signed char)12] [i_1] |= (signed char)-33;
            arr_41 [i_1] [i_12 - 2] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_11 [i_1 + 2] [i_12 + 1])) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) arr_11 [i_1 + 2] [i_12 + 1]))))));
            var_21 = ((/* implicit */signed char) max((var_21), (arr_35 [i_1] [i_1] [i_1] [i_12 - 2])));
        }
    }
    /* LoopSeq 4 */
    for (signed char i_13 = 2; i_13 < 22; i_13 += 3) 
    {
        arr_45 [i_13] = ((/* implicit */signed char) (-((-(((/* implicit */int) (signed char)-21))))));
        arr_46 [i_13 + 3] [i_13 + 3] = var_4;
        /* LoopNest 3 */
        for (signed char i_14 = 1; i_14 < 23; i_14 += 3) 
        {
            for (signed char i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                for (signed char i_16 = 3; i_16 < 22; i_16 += 3) 
                {
                    {
                        var_22 |= var_6;
                        var_23 = ((/* implicit */signed char) min((var_23), ((signed char)7)));
                        var_24 = (signed char)-19;
                        arr_54 [i_16] [i_14] [i_14] [i_13 + 3] = arr_27 [i_13 - 1] [i_13];
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_17 = 0; i_17 < 25; i_17 += 3) 
                        {
                            arr_58 [i_13] [i_14] [i_15] [i_16] [i_17] = (signed char)80;
                            var_25 = (signed char)87;
                        }
                        for (signed char i_18 = 0; i_18 < 25; i_18 += 1) 
                        {
                            var_26 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (signed char)-19)) : (((/* implicit */int) arr_36 [i_13] [i_14] [(signed char)11] [i_15] [i_16] [i_18]))))));
                            var_27 = var_10;
                            var_28 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) | (((((/* implicit */int) max((arr_32 [i_13 + 3] [(signed char)8] [i_14]), ((signed char)20)))) ^ (((/* implicit */int) max(((signed char)28), ((signed char)38))))))));
                            var_29 = ((/* implicit */signed char) min((var_29), (min(((signed char)-17), ((signed char)16)))));
                            arr_62 [i_13] [i_14] [i_15] [i_18] [i_14] = (signed char)-38;
                        }
                        for (signed char i_19 = 1; i_19 < 23; i_19 += 3) 
                        {
                            var_30 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-104))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [(signed char)14] [i_15] [i_14] [i_13 - 1])) - (((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) max(((signed char)-77), (((signed char) (signed char)-89))))) : (((/* implicit */int) var_2))));
                        }
                        for (signed char i_20 = 1; i_20 < 23; i_20 += 4) 
                        {
                            var_32 = (signed char)107;
                            var_33 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) (signed char)-80)))));
                        }
                    }
                } 
            } 
        } 
    }
    for (signed char i_21 = 0; i_21 < 16; i_21 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_22 = 0; i_22 < 16; i_22 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_23 = 2; i_23 < 14; i_23 += 1) 
            {
                /* LoopSeq 4 */
                for (signed char i_24 = 2; i_24 < 14; i_24 += 1) 
                {
                    var_34 = ((signed char) (signed char)55);
                    var_35 = ((/* implicit */signed char) min((var_35), ((signed char)16)));
                    arr_76 [i_21] [i_22] [i_24] [i_21] [i_22] = (signed char)19;
                    var_36 = arr_16 [(signed char)18] [i_24];
                }
                for (signed char i_25 = 4; i_25 < 15; i_25 += 4) 
                {
                    var_37 -= (signed char)12;
                    var_38 = ((signed char) var_7);
                    arr_79 [i_21] [i_22] [i_22] [i_25] [i_23] [i_22] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                }
                for (signed char i_26 = 1; i_26 < 15; i_26 += 4) 
                {
                    var_39 = ((/* implicit */signed char) max((var_39), ((signed char)8)));
                    arr_83 [i_21] [i_22] [i_23] [i_26 + 1] = (signed char)-113;
                    var_40 = var_6;
                    var_41 = (signed char)44;
                }
                for (signed char i_27 = 1; i_27 < 13; i_27 += 3) 
                {
                    var_42 |= arr_80 [i_27 + 3] [i_27 - 1] [i_23 - 2] [i_21];
                    /* LoopSeq 3 */
                    for (signed char i_28 = 4; i_28 < 15; i_28 += 3) 
                    {
                        arr_91 [i_21] [i_22] [i_23] [i_21] [i_28] = (signed char)-87;
                        var_43 = (signed char)14;
                        arr_92 [i_21] [i_22] [i_23] [i_27] [i_28] [i_28] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) arr_7 [i_27 + 3]))));
                        var_44 = arr_28 [i_21] [i_22] [i_22] [i_23] [i_27] [i_27] [i_28];
                    }
                    for (signed char i_29 = 2; i_29 < 14; i_29 += 4) 
                    {
                        var_45 = (signed char)-1;
                        arr_96 [(signed char)14] [i_21] [i_27 + 1] [i_22] [i_22] [i_22] [i_21] = (signed char)-67;
                    }
                    for (signed char i_30 = 0; i_30 < 16; i_30 += 1) 
                    {
                        arr_99 [(signed char)8] [i_22] [i_23] [i_27] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_44 [i_27 + 1]))));
                        var_46 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)44))));
                        arr_100 [i_21] [i_21] [i_21] [(signed char)2] [i_21] [i_21] = arr_48 [i_21] [i_21] [i_23];
                        var_47 += ((/* implicit */signed char) ((((/* implicit */int) (signed char)65)) + (((/* implicit */int) (signed char)-68))));
                    }
                }
                arr_101 [i_21] [i_22] [i_23] [i_23 + 1] = arr_28 [i_21] [i_21] [i_21] [i_21] [i_22] [i_21] [i_22];
            }
            for (signed char i_31 = 0; i_31 < 16; i_31 += 1) 
            {
                arr_104 [i_22] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)-111))) && (((/* implicit */_Bool) var_4))));
                var_48 = arr_42 [i_22];
                /* LoopSeq 1 */
                for (signed char i_32 = 0; i_32 < 16; i_32 += 3) 
                {
                    var_49 = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
                    arr_107 [i_22] = (signed char)-88;
                    arr_108 [i_21] [i_22] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-1)) != (((/* implicit */int) (signed char)50))));
                }
            }
            for (signed char i_33 = 0; i_33 < 16; i_33 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_34 = 3; i_34 < 12; i_34 += 4) 
                {
                    var_50 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)28)) <= (((((/* implicit */int) var_3)) << (((((/* implicit */int) (signed char)-88)) + (97)))))));
                    var_51 = (signed char)114;
                    arr_114 [i_34] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (signed char)1))))) || (((/* implicit */_Bool) (signed char)-77))));
                }
                for (signed char i_35 = 1; i_35 < 15; i_35 += 1) 
                {
                    var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_21] [i_35 + 1])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)17))));
                    arr_118 [i_21] [i_22] = (signed char)-1;
                    arr_119 [i_21] [i_21] [i_33] [i_35] [i_35] = ((signed char) var_3);
                    arr_120 [i_21] [i_33] [i_35] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)93)) && (((/* implicit */_Bool) (signed char)-69))));
                    arr_121 [i_21] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)119))));
                }
                arr_122 [i_21] [i_22] [i_22] [i_33] |= ((/* implicit */signed char) (~(((/* implicit */int) var_5))));
            }
            /* LoopNest 3 */
            for (signed char i_36 = 1; i_36 < 13; i_36 += 3) 
            {
                for (signed char i_37 = 3; i_37 < 13; i_37 += 4) 
                {
                    for (signed char i_38 = 2; i_38 < 15; i_38 += 3) 
                    {
                        {
                            arr_132 [i_21] [i_36] [i_37] [i_38 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_106 [i_38] [i_38] [i_38] [(signed char)3] [(signed char)3] [i_38 + 1])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_106 [i_38 - 1] [i_38] [i_38] [i_38] [i_38] [i_38 + 1]))));
                            var_53 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_22] [(signed char)22] [i_36] [i_36 + 1] [i_36 + 1] [i_36 + 1])) ? (((/* implicit */int) ((signed char) (signed char)49))) : (((/* implicit */int) var_8))));
                            var_54 &= ((/* implicit */signed char) ((((/* implicit */int) (signed char)17)) ^ (((/* implicit */int) (signed char)-90))));
                        }
                    } 
                } 
            } 
            var_55 = (signed char)94;
            arr_133 [i_22] [i_22] [i_21] = (signed char)88;
            var_56 = ((/* implicit */signed char) ((((((/* implicit */int) var_1)) - (((/* implicit */int) (signed char)-117)))) << (((((/* implicit */int) ((signed char) (signed char)90))) - (87)))));
        }
        arr_134 [i_21] = (signed char)-43;
        arr_135 [(signed char)4] = (signed char)-106;
    }
    for (signed char i_39 = 3; i_39 < 16; i_39 += 3) 
    {
        arr_139 [i_39] = var_7;
        /* LoopSeq 4 */
        for (signed char i_40 = 0; i_40 < 17; i_40 += 4) 
        {
            arr_142 [i_39] [i_39] [i_40] = ((/* implicit */signed char) max((((/* implicit */int) var_4)), (((((/* implicit */int) ((signed char) arr_27 [i_39] [i_39]))) ^ (((/* implicit */int) (signed char)98))))));
            var_57 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_39 - 1] [i_39 - 1] [i_40])))))));
            arr_143 [i_39] [(signed char)9] [i_40] |= var_2;
            arr_144 [i_39] [i_39] [i_39 - 1] = (signed char)83;
        }
        for (signed char i_41 = 1; i_41 < 14; i_41 += 1) 
        {
            arr_149 [i_41] = ((signed char) (signed char)-121);
            var_58 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-77)) <= (((/* implicit */int) max((((signed char) (signed char)76)), (arr_60 [i_39] [i_39] [i_39 + 1] [i_39 - 3] [i_39 - 1] [i_39 - 3] [i_39]))))));
            var_59 = max(((signed char)-80), (((signed char) (signed char)-118)));
            /* LoopSeq 2 */
            for (signed char i_42 = 0; i_42 < 17; i_42 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_43 = 0; i_43 < 17; i_43 += 3) 
                {
                    var_60 = (signed char)103;
                    arr_155 [i_39] [i_41] [i_39 - 3] [i_39] = (signed char)-90;
                    var_61 = ((/* implicit */signed char) ((((/* implicit */int) max(((signed char)-88), (var_1)))) == (((/* implicit */int) (signed char)-99))));
                }
                arr_156 [i_42] [i_41] [i_42] = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
                var_62 -= var_7;
                var_63 = arr_1 [i_39 + 1] [i_41];
            }
            for (signed char i_44 = 0; i_44 < 17; i_44 += 3) 
            {
                arr_160 [i_41] [i_44] [i_44] [i_44] = ((/* implicit */signed char) min(((-(((/* implicit */int) arr_141 [i_39])))), (((/* implicit */int) var_3))));
                arr_161 [i_41] = (signed char)-8;
                /* LoopSeq 1 */
                for (signed char i_45 = 0; i_45 < 17; i_45 += 1) 
                {
                    var_64 = ((/* implicit */signed char) max((var_64), ((signed char)-24)));
                    var_65 |= var_8;
                    var_66 = ((signed char) arr_150 [i_39] [i_41 + 1] [i_41 + 1]);
                    arr_166 [(signed char)16] |= ((/* implicit */signed char) ((((/* implicit */int) max((arr_9 [i_39]), ((signed char)81)))) >> ((-(((/* implicit */int) ((signed char) (signed char)-1)))))));
                }
                arr_167 [i_39] [i_41] [i_41] [i_44] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)111)) * (((/* implicit */int) var_0)))))));
                /* LoopSeq 4 */
                for (signed char i_46 = 0; i_46 < 17; i_46 += 3) 
                {
                    arr_171 [(signed char)12] [i_41] [i_44] [(signed char)14] |= ((/* implicit */signed char) (+(((/* implicit */int) min((max((var_5), (var_10))), ((signed char)8))))));
                    var_67 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_59 [i_39] [i_39 - 3] [i_39 - 3] [i_41 + 1] [i_46]), (var_9)))) >> (((((/* implicit */int) (signed char)80)) - (74)))));
                    var_68 = ((/* implicit */signed char) max((var_68), (arr_170 [i_39] [i_39 - 3] [i_41] [i_44] [i_46] [i_46])));
                }
                for (signed char i_47 = 0; i_47 < 17; i_47 += 4) 
                {
                    var_69 = min((max(((signed char)99), (arr_35 [i_41 + 3] [i_41 + 3] [i_41 + 2] [i_41]))), (max(((signed char)-96), (arr_49 [i_39 - 1]))));
                    var_70 = arr_140 [i_41 - 1] [i_39 - 1];
                }
                for (signed char i_48 = 3; i_48 < 16; i_48 += 1) 
                {
                    var_71 = ((/* implicit */signed char) max((var_71), ((signed char)-71)));
                    /* LoopSeq 1 */
                    for (signed char i_49 = 2; i_49 < 13; i_49 += 1) 
                    {
                        var_72 = (signed char)111;
                        var_73 -= var_4;
                    }
                }
                for (signed char i_50 = 0; i_50 < 17; i_50 += 3) 
                {
                    arr_180 [i_41] [i_41] [i_44] [i_50] [i_50] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) == ((-(((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (signed char)119))))))));
                    var_74 = min((var_1), (max(((signed char)93), ((signed char)111))));
                }
            }
        }
        for (signed char i_51 = 0; i_51 < 17; i_51 += 3) 
        {
            var_75 |= ((signed char) (~((~(((/* implicit */int) (signed char)-35))))));
            var_76 = ((/* implicit */signed char) max((var_76), (((signed char) ((signed char) (signed char)-67)))));
            var_77 = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
        }
        for (signed char i_52 = 4; i_52 < 14; i_52 += 1) 
        {
            arr_187 [i_52 + 2] [i_39] = var_6;
            var_78 = ((/* implicit */signed char) max((var_78), ((signed char)-33)));
        }
    }
    /* vectorizable */
    for (signed char i_53 = 0; i_53 < 23; i_53 += 3) 
    {
        arr_190 [i_53] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (signed char)-7))));
        var_79 = ((/* implicit */signed char) min((var_79), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (signed char)-93))))))));
    }
}
