/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144357
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) var_11);
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0])))))));
    }
    for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))));
                arr_11 [i_1] [i_2] [i_2] [i_3 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_6 [i_2] [i_2] [i_1]))) ? ((~(((/* implicit */int) var_16)))) : (((/* implicit */int) ((signed char) var_11)))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_19 = (+(((long long int) var_0)));
                            arr_17 [i_1 + 1] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */_Bool) var_5);
                            var_20 = ((/* implicit */signed char) ((((/* implicit */int) var_16)) >> (((arr_8 [i_1 - 1] [i_1 + 1]) - (1810071349U)))));
                            arr_18 [i_1] [i_1] [i_3 - 1] [i_4] [i_1] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_12 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_5))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (~(((var_4) / (((/* implicit */long long int) var_8)))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((long long int) (_Bool)1)))));
            }
            for (unsigned char i_6 = 1; i_6 < 8; i_6 += 2) /* same iter space */
            {
                var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_21 [i_2] [i_2] [i_2]))))));
                var_24 *= ((/* implicit */int) ((_Bool) var_5));
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) -548772084)) ? (16U) : (((/* implicit */unsigned int) 681174375))));
                /* LoopSeq 2 */
                for (unsigned int i_7 = 2; i_7 < 7; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_29 [i_8] [i_1] [i_6] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) > (arr_25 [i_1] [i_1 - 2] [i_2] [i_1] [i_6 - 1] [i_7] [i_8])));
                        arr_30 [i_1] [i_1 - 2] [i_1] [i_1 + 2] [i_1 + 2] [i_1] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_5 [i_2])) ? (var_9) : (arr_14 [i_1 - 2] [i_1 - 2] [i_8]))));
                        var_26 = ((/* implicit */int) max((var_26), (((((/* implicit */int) arr_15 [i_1 + 2] [10U])) * (((/* implicit */int) arr_15 [2] [2]))))));
                        var_27 = ((/* implicit */unsigned long long int) max((var_27), ((-(((var_1) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned char) arr_14 [i_1] [i_1] [i_7 - 2]);
                        var_29 = ((((/* implicit */int) arr_16 [i_1 + 1] [i_1 + 1])) | (((/* implicit */int) arr_16 [i_1 + 1] [i_6 + 3])));
                        arr_34 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2]))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_1] [i_2] [i_1] [i_1] [i_1] [i_10] = ((/* implicit */long long int) ((int) ((int) -1812481696)));
                        arr_39 [i_1] [i_1] [i_6] [i_1] [i_1] [i_10] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
                        var_30 ^= ((/* implicit */unsigned char) ((_Bool) arr_35 [i_1] [i_1 - 1] [i_1 - 1] [i_6 - 1] [i_7 + 2]));
                        arr_40 [i_1 + 2] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_20 [i_1 + 1]) ? (((/* implicit */unsigned long long int) var_3)) : (var_0)))) ? (((int) arr_2 [i_7])) : (((/* implicit */int) arr_0 [i_1 - 2] [i_1 + 1]))));
                    }
                    arr_41 [i_1] [i_1] [i_6] [i_6] = var_3;
                    var_31 = ((/* implicit */_Bool) ((long long int) arr_36 [i_7 + 4] [i_7 + 3] [i_7 - 1] [i_7 + 4] [i_7 + 2] [i_7 - 2]));
                }
                for (long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    arr_44 [i_1] [i_2] = ((/* implicit */_Bool) var_9);
                    /* LoopSeq 2 */
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        arr_49 [i_1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((arr_4 [i_1 + 1]) / (var_14)));
                        var_32 = ((/* implicit */_Bool) arr_8 [i_6 - 1] [i_6 - 1]);
                    }
                    for (signed char i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) arr_22 [i_6] [i_6 + 2] [i_6] [i_6]))));
                        arr_52 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 - 2]))));
                    }
                    arr_53 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_2 [i_2]);
                    var_34 ^= ((/* implicit */int) (-(arr_3 [i_1 - 1])));
                }
            }
            for (unsigned char i_14 = 1; i_14 < 8; i_14 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_15 = 1; i_15 < 8; i_15 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_16 = 3; i_16 < 9; i_16 += 3) 
                    {
                        arr_61 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
                        var_35 = ((/* implicit */long long int) arr_33 [i_1] [i_2] [i_14] [i_14] [i_14] [i_2]);
                    }
                    var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((unsigned char) var_16)))));
                    arr_62 [i_1 + 1] [i_2] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) (((-(var_11))) >> (((((/* implicit */int) var_7)) - (63)))));
                }
                var_37 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_14] [i_14 - 1] [i_14 - 1] [(unsigned char)8] [i_2] [i_2] [i_1])) ? (((/* implicit */long long int) var_5)) : (var_14)))) && (((/* implicit */_Bool) arr_55 [6U] [i_2] [i_14 - 1] [i_14 - 1]))));
                arr_63 [i_1] [i_2] [i_1] = ((/* implicit */int) ((unsigned int) arr_23 [i_14] [i_14 - 1] [i_1 + 2] [i_1 - 1]));
                arr_64 [i_1] [i_1] [(unsigned char)4] |= ((((/* implicit */_Bool) var_0)) ? (arr_33 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14] [i_14 + 3] [i_14 + 3]) : (((/* implicit */int) var_1)));
            }
            /* LoopSeq 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_18 = 2; i_18 < 10; i_18 += 2) 
                {
                    /* LoopSeq 4 */
                    for (int i_19 = 0; i_19 < 11; i_19 += 4) 
                    {
                        arr_73 [i_1 - 1] [i_1] [i_1] [i_1 + 2] [i_1 - 2] [i_1 - 2] = ((/* implicit */_Bool) arr_68 [i_1] [i_1 + 2] [i_1 - 1] [i_1] [i_18] [i_18 - 1]);
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(arr_6 [i_1 - 1] [i_2] [i_18])))) > (var_0))))));
                    }
                    for (unsigned char i_20 = 0; i_20 < 11; i_20 += 1) 
                    {
                        arr_76 [i_1] [i_1] [i_1] [i_18 - 2] [i_20] [i_1] = ((/* implicit */_Bool) ((long long int) arr_42 [i_20] [i_1] [i_17] [i_2] [i_1]));
                        arr_77 [i_1] [i_1] [i_1] [i_1] [i_1] [i_20] = ((/* implicit */_Bool) (-(arr_12 [i_18 - 1] [i_2] [i_17] [i_1 - 1])));
                    }
                    for (unsigned int i_21 = 0; i_21 < 11; i_21 += 2) 
                    {
                        var_39 |= ((/* implicit */int) ((signed char) var_10));
                        var_40 = ((/* implicit */_Bool) ((arr_69 [i_18 - 2] [i_1 + 2]) ? (((((/* implicit */_Bool) var_16)) ? (var_3) : (var_3))) : ((-(var_9)))));
                        var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (63083) : (((/* implicit */int) (_Bool)1))))) ? ((~(-1LL))) : ((-(var_14))))))));
                    }
                    for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((arr_26 [i_1 + 2] [i_18 + 1]) > (arr_26 [i_1 - 1] [i_18 + 1]))))));
                        var_43 = ((/* implicit */_Bool) var_0);
                    }
                    arr_83 [i_1] = ((/* implicit */unsigned int) (+(var_3)));
                }
                arr_84 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_74 [i_1 - 2] [i_1 + 2] [i_1 - 1] [i_1 - 2] [i_1 + 2]))));
            }
            for (int i_23 = 1; i_23 < 10; i_23 += 4) 
            {
                var_44 += ((/* implicit */unsigned int) var_13);
                var_45 = ((/* implicit */int) ((((_Bool) var_9)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_3)) : (var_4))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_23])))))));
                /* LoopSeq 3 */
                for (signed char i_24 = 2; i_24 < 9; i_24 += 1) 
                {
                    arr_92 [i_24] [i_1] [i_1] [i_1] [i_1] [i_1] = arr_0 [i_1 - 1] [i_24 + 2];
                    arr_93 [i_1 - 1] [6U] |= ((/* implicit */_Bool) ((arr_56 [i_24 + 2] [i_23 - 1]) ? (((/* implicit */int) arr_56 [i_24 - 2] [i_23 + 1])) : (var_9)));
                }
                for (int i_25 = 2; i_25 < 9; i_25 += 4) 
                {
                    arr_97 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (((~(var_4))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_26 = 3; i_26 < 8; i_26 += 3) /* same iter space */
                    {
                        var_46 = (-(var_8));
                        arr_100 [i_1 - 2] [i_1 - 2] [i_23] [i_1 - 2] [i_1] [i_23 + 1] = ((/* implicit */long long int) ((unsigned char) arr_0 [i_23 + 1] [i_25 - 1]));
                        arr_101 [i_1] [i_2] [i_23 + 1] [i_23 + 1] [i_25] |= arr_99 [i_1] [i_1] [i_23 + 1] [i_23 + 1] [i_26 + 1];
                    }
                    for (unsigned char i_27 = 3; i_27 < 8; i_27 += 3) /* same iter space */
                    {
                        arr_106 [i_1] [i_1] [i_2] [i_1] [i_25] [i_1] [i_27 + 1] = ((/* implicit */int) ((unsigned long long int) arr_60 [i_1] [i_1 + 1] [i_1 + 2] [i_25 + 2] [i_25 - 2] [i_27 - 1]));
                        arr_107 [i_1 + 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? ((+(arr_68 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1]))) : (((/* implicit */int) ((_Bool) var_1)))));
                    }
                    var_47 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_23] [i_23 + 1] [i_23] [i_23] [i_1 - 2] [i_1 - 2])))))));
                    arr_108 [i_1] [i_1] [i_1] [i_23] [i_25] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_87 [i_1 + 1] [i_1])) ? (arr_98 [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                }
                for (int i_28 = 0; i_28 < 11; i_28 += 4) 
                {
                    var_48 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (var_3)))) ? (((((/* implicit */_Bool) var_14)) ? (var_11) : (var_11))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_109 [i_28] [i_23 + 1] [i_2] [i_1])) ? (var_8) : (var_9))))));
                    /* LoopSeq 1 */
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        arr_116 [i_29] [i_23 - 1] [i_1] [i_23 - 1] [i_1] [i_1 + 2] [i_1 + 2] = ((((/* implicit */_Bool) ((unsigned char) -716533812))) ? (arr_27 [i_1 - 1] [i_2] [i_2] [i_2] [i_28] [i_29]) : (((/* implicit */int) arr_91 [i_1 - 2] [i_1])));
                        arr_117 [i_1] [i_2] [i_2] [i_29] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 + 2] [i_1])) ? (((/* implicit */int) ((signed char) var_5))) : (((/* implicit */int) var_7))));
                    }
                }
            }
            /* LoopSeq 1 */
            for (unsigned char i_30 = 0; i_30 < 11; i_30 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_31 = 2; i_31 < 9; i_31 += 3) 
                {
                    var_49 = ((/* implicit */unsigned char) arr_6 [i_1] [i_2] [i_1]);
                    var_50 = ((/* implicit */unsigned long long int) (-(arr_7 [i_1 + 2] [i_1 + 2] [i_1])));
                    arr_126 [i_1] [i_1] [i_30] [i_31 + 1] [i_30] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_90 [i_1] [i_1] [i_30] [i_1])) ? (var_14) : (((/* implicit */long long int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((6863123426969761545LL) != (((/* implicit */long long int) 2660019955U)))))));
                    var_51 += ((/* implicit */_Bool) arr_32 [(unsigned char)10] [i_31 - 1] [i_31 - 1]);
                }
                var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_121 [8ULL] [i_1 + 1] [i_1 + 2])) ? (arr_121 [4] [i_1 - 1] [i_1 - 1]) : (arr_121 [10U] [i_1 - 1] [i_1 - 1]))))));
            }
            var_53 += ((/* implicit */unsigned char) (-(arr_66 [i_1] [i_1] [i_2] [i_2])));
            /* LoopNest 2 */
            for (unsigned char i_32 = 0; i_32 < 11; i_32 += 4) 
            {
                for (long long int i_33 = 0; i_33 < 11; i_33 += 1) 
                {
                    {
                        arr_132 [i_33] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_47 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 1]))));
                        var_54 = ((/* implicit */unsigned long long int) var_15);
                    }
                } 
            } 
        }
        arr_133 [i_1] [i_1] = max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (var_5)))), (max(((+(var_4))), (((/* implicit */long long int) arr_115 [i_1] [i_1 + 1] [i_1] [i_1] [i_1 - 2])))));
    }
    var_55 = ((/* implicit */_Bool) (+(-4228965679175654129LL)));
    var_56 = ((/* implicit */int) max((var_56), (((/* implicit */int) ((_Bool) var_13)))));
}
