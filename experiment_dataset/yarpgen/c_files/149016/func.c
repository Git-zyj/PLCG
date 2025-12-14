/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149016
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
    var_19 = var_5;
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        arr_9 [i_3] [(signed char)12] [(signed char)12] [(signed char)6] &= (signed char)80;
                        arr_10 [i_0] [(signed char)6] [i_0] [i_3] = (i_0 % 2 == zero) ? (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) << (((((((/* implicit */int) var_16)) + (52))) - (20))))))))) : (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) + (2147483647))) << (((((((((/* implicit */int) var_16)) + (52))) - (20))) - (8)))))))));
                        arr_11 [(signed char)4] [i_1] [i_2 - 2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (signed char)5)))) : (((/* implicit */int) (signed char)-5))));
                    }
                    arr_12 [(signed char)10] [(signed char)10] = arr_0 [(signed char)12] [(signed char)8];
                    arr_13 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)18))));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 1; i_4 < 11; i_4 += 1) 
                    {
                        arr_17 [i_4] [(signed char)8] [i_0] [(signed char)10] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)109)) & (((/* implicit */int) (signed char)-53)))) >> (((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)16))))) ? ((~(((/* implicit */int) (signed char)87)))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))) + (89)))));
                        arr_18 [(signed char)2] [(signed char)0] [i_2 - 1] [i_1] [(signed char)0] [(signed char)2] = (signed char)-120;
                        arr_19 [i_0] [i_1 + 2] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_13)) | (((/* implicit */int) (signed char)-89))))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_8 [(signed char)11] [(signed char)9] [i_2] [i_2] [i_1 + 1] [i_0]))))));
                        arr_20 [(signed char)3] [(signed char)10] [i_0] [i_1 + 2] [(signed char)8] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) arr_8 [i_4 - 1] [(signed char)6] [(signed char)2] [i_1] [(signed char)11] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)97)))) : ((~(((/* implicit */int) arr_7 [i_0] [i_1] [(signed char)3] [(signed char)7] [i_1]))))))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            for (signed char i_6 = 2; i_6 < 12; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_8 = 1; i_8 < 11; i_8 += 3) 
                        {
                            arr_33 [(signed char)8] [(signed char)1] [i_6] [i_0] [(signed char)9] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)88)) >= (((/* implicit */int) (signed char)124)))) ? (((/* implicit */int) min((arr_32 [i_5] [(signed char)5]), (var_14)))) : (((/* implicit */int) min((arr_32 [i_0 - 2] [(signed char)9]), ((signed char)-75))))));
                            arr_34 [i_0] [(signed char)12] [(signed char)10] [i_5] [(signed char)6] [(signed char)2] &= ((/* implicit */signed char) ((((((/* implicit */int) var_13)) * ((+(((/* implicit */int) arr_25 [i_6])))))) != (((/* implicit */int) ((((/* implicit */int) ((signed char) var_9))) >= (((/* implicit */int) (signed char)-42)))))));
                            arr_35 [i_0] [i_5] [(signed char)1] [i_6] [i_6] [i_0] [i_0] = (signed char)-14;
                            arr_36 [i_0] [(signed char)8] [i_7] [i_0] [i_5] [i_0] = ((signed char) min((var_13), (arr_8 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_6] [i_7] [i_0 + 1])));
                        }
                        arr_37 [i_0] [(signed char)0] [i_6] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-116)) ? ((~(((/* implicit */int) ((((/* implicit */int) var_16)) >= (((/* implicit */int) var_16))))))) : (((/* implicit */int) min((var_13), (arr_16 [(signed char)3] [i_0] [(signed char)3] [i_7]))))));
                        arr_38 [i_0] [(signed char)10] [(signed char)3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) (signed char)-124)))), (((/* implicit */int) var_15)))))));
                    }
                } 
            } 
        } 
        arr_39 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)-95), (var_18)))))))));
        arr_40 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 3])) ? (((/* implicit */int) arr_7 [(signed char)10] [i_0 + 3] [i_0] [i_0] [i_0 + 3])) : (((/* implicit */int) (signed char)-93))))));
        arr_41 [i_0] = ((/* implicit */signed char) max(((+(((/* implicit */int) (signed char)-43)))), ((-(((/* implicit */int) (signed char)88))))));
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 16; i_9 += 2) 
    {
        /* LoopSeq 4 */
        for (signed char i_10 = 0; i_10 < 16; i_10 += 4) 
        {
            arr_49 [i_9] = ((signed char) (signed char)12);
            arr_50 [(signed char)15] [(signed char)15] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)72)) && (((/* implicit */_Bool) (signed char)117))));
            arr_51 [(signed char)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (signed char)-102))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (signed char)25)))) : (((/* implicit */int) arr_44 [i_9]))));
            /* LoopSeq 2 */
            for (signed char i_11 = 0; i_11 < 16; i_11 += 2) /* same iter space */
            {
                arr_55 [i_10] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                arr_56 [(signed char)0] [(signed char)7] [(signed char)11] = ((/* implicit */signed char) (~((~(((/* implicit */int) var_13))))));
            }
            for (signed char i_12 = 0; i_12 < 16; i_12 += 2) /* same iter space */
            {
                arr_61 [(signed char)5] [(signed char)13] [i_12] |= ((/* implicit */signed char) (~(((((/* implicit */int) arr_53 [i_10] [(signed char)4] [i_10])) ^ (((/* implicit */int) var_13))))));
                arr_62 [i_10] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_18))));
            }
        }
        for (signed char i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            arr_65 [i_9] [i_9] [i_13] = var_2;
            arr_66 [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) arr_60 [i_9] [(signed char)10] [i_9] [(signed char)9]))));
            arr_67 [i_9] [i_13] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
            arr_68 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-103)) / (((/* implicit */int) var_12))));
            /* LoopSeq 1 */
            for (signed char i_14 = 0; i_14 < 16; i_14 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_15 = 2; i_15 < 15; i_15 += 1) 
                {
                    for (signed char i_16 = 0; i_16 < 16; i_16 += 1) 
                    {
                        {
                            arr_77 [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_74 [i_9] [i_15 + 1] [(signed char)2] [i_15] [(signed char)5]))));
                            arr_78 [(signed char)8] [i_14] [(signed char)10] [i_14] = var_11;
                        }
                    } 
                } 
                arr_79 [i_9] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) arr_63 [i_13])) / (((/* implicit */int) arr_63 [i_14]))));
                /* LoopNest 2 */
                for (signed char i_17 = 1; i_17 < 15; i_17 += 4) 
                {
                    for (signed char i_18 = 2; i_18 < 15; i_18 += 1) 
                    {
                        {
                            arr_85 [i_9] [i_13] [i_14] [i_14] [i_18] = ((/* implicit */signed char) ((((/* implicit */int) var_8)) + (((/* implicit */int) arr_82 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17] [(signed char)4]))));
                            arr_86 [i_13] [(signed char)5] [i_14] [i_14] [(signed char)5] [i_9] [i_17] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_81 [i_18 - 1] [i_18 - 1] [i_17 - 1] [i_17] [i_17 + 1]))));
                            arr_87 [(signed char)5] [i_13] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-98)) <= (((/* implicit */int) var_12))));
                            arr_88 [i_9] [i_9] [(signed char)4] [i_13] [i_9] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_7))))));
                        }
                    } 
                } 
            }
        }
        for (signed char i_19 = 3; i_19 < 14; i_19 += 1) 
        {
            /* LoopSeq 4 */
            for (signed char i_20 = 2; i_20 < 14; i_20 += 4) 
            {
                arr_95 [i_19] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_45 [i_9])) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) arr_93 [i_9] [(signed char)3])))) ^ (((/* implicit */int) arr_57 [i_20 + 2] [i_19 - 1]))));
                arr_96 [(signed char)4] [i_9] &= ((/* implicit */signed char) ((((/* implicit */int) arr_46 [i_19 - 3] [i_19 - 2])) >= (((/* implicit */int) arr_46 [i_19 - 3] [i_19 - 2]))));
            }
            for (signed char i_21 = 0; i_21 < 16; i_21 += 4) 
            {
                arr_99 [i_9] [i_19] [i_21] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_93 [i_9] [i_19 - 2])) ? (((/* implicit */int) arr_93 [(signed char)2] [i_19 + 2])) : (((/* implicit */int) var_9))));
                arr_100 [i_19] [i_19] = arr_92 [i_19 + 2] [i_19];
            }
            for (signed char i_22 = 0; i_22 < 16; i_22 += 2) 
            {
                arr_103 [i_9] [i_9] [(signed char)8] [i_22] = ((/* implicit */signed char) (+((-(((/* implicit */int) (signed char)-124))))));
                arr_104 [i_19] [(signed char)3] [i_19] [i_19] = arr_97 [i_9] [i_9] [i_19] [i_22];
                /* LoopNest 2 */
                for (signed char i_23 = 0; i_23 < 16; i_23 += 3) 
                {
                    for (signed char i_24 = 2; i_24 < 14; i_24 += 4) 
                    {
                        {
                            arr_111 [i_9] [i_19] [i_19] [(signed char)2] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_64 [i_19 - 2] [i_24 - 2])) : (((/* implicit */int) arr_64 [i_19 - 2] [i_24 - 2]))));
                            arr_112 [i_9] [i_19] [i_22] [i_23] [i_24] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_54 [i_9] [i_9]))) ? (((((/* implicit */_Bool) arr_107 [(signed char)8] [i_24] [i_22] [i_24] [(signed char)14])) ? (((/* implicit */int) arr_46 [i_9] [i_9])) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) var_16))))));
                        }
                    } 
                } 
            }
            for (signed char i_25 = 0; i_25 < 16; i_25 += 4) 
            {
                arr_115 [i_9] [i_9] [i_25] [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (((/* implicit */int) (signed char)97))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_73 [i_25] [i_25] [i_25] [i_19 - 2] [i_9])) : (((/* implicit */int) arr_54 [(signed char)10] [i_25])))) : (((((/* implicit */int) (signed char)127)) + (((/* implicit */int) var_3))))));
                arr_116 [i_25] [(signed char)6] [(signed char)14] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_63 [i_9])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-124))))));
                arr_117 [i_19] [(signed char)4] = arr_106 [i_19 + 1] [i_19 + 1] [i_19 - 1] [i_19 - 1] [i_19 - 2];
                arr_118 [i_9] [i_19] [i_9] [(signed char)10] &= ((/* implicit */signed char) ((((((/* implicit */int) arr_94 [i_19 - 2] [i_25])) + (2147483647))) >> (((((/* implicit */int) (signed char)93)) - (90)))));
            }
            arr_119 [i_19] [i_19] = ((/* implicit */signed char) ((((/* implicit */int) arr_70 [i_19 + 1])) > (((/* implicit */int) arr_70 [i_19 + 2]))));
        }
        for (signed char i_26 = 4; i_26 < 13; i_26 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_27 = 0; i_27 < 16; i_27 += 1) 
            {
                for (signed char i_28 = 2; i_28 < 15; i_28 += 1) 
                {
                    for (signed char i_29 = 4; i_29 < 13; i_29 += 1) 
                    {
                        {
                            arr_130 [i_27] [i_27] = ((signed char) arr_113 [i_27] [i_29]);
                            arr_131 [i_27] [(signed char)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_108 [i_27] [(signed char)15] [i_27] [(signed char)5] [i_26 + 1])) ? (((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) arr_75 [i_28 - 2] [(signed char)13])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_15))));
                        }
                    } 
                } 
            } 
            arr_132 [i_26] [i_26] = ((/* implicit */signed char) (+(((/* implicit */int) var_16))));
            arr_133 [i_9] [(signed char)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_97 [i_26 - 3] [i_26 + 2] [i_26] [i_26 + 2]))));
        }
        arr_134 [i_9] = ((/* implicit */signed char) ((((((/* implicit */int) arr_80 [i_9] [(signed char)0] [i_9])) >= (((/* implicit */int) (signed char)-1)))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) (signed char)127)))) : (((((/* implicit */_Bool) arr_45 [i_9])) ? (((/* implicit */int) arr_73 [(signed char)4] [(signed char)4] [i_9] [(signed char)10] [(signed char)0])) : (((/* implicit */int) (signed char)122))))));
        arr_135 [i_9] [i_9] = (signed char)127;
        arr_136 [(signed char)15] = arr_46 [(signed char)2] [i_9];
    }
    var_20 = max((max((min((var_5), ((signed char)93))), (max((var_3), (var_8))))), (((signed char) var_5)));
}
