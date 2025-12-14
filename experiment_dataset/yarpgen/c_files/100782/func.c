/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100782
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        arr_2 [(short)4] &= ((/* implicit */unsigned short) var_12);
        var_18 = ((/* implicit */int) var_12);
        arr_3 [i_0] = ((/* implicit */unsigned short) var_2);
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_14);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) var_1);
                                arr_16 [i_0] [i_0] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) var_8);
                                arr_17 [i_0] [i_0] [i_0] [i_0 - 2] [(_Bool)1] [i_0 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_13)) ? (var_8) : (var_11))) : (((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_15)))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_8)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        arr_20 [i_1] |= ((/* implicit */long long int) var_6);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */_Bool) var_16);
                            arr_24 [i_0] [(signed char)3] [i_5] [i_5] [i_5] [i_5] [(unsigned char)5] = ((/* implicit */long long int) var_8);
                            var_21 = ((/* implicit */unsigned long long int) ((var_0) ? (var_9) : (((/* implicit */int) var_0))));
                        }
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((var_1) ? (var_9) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (int i_10 = 3; i_10 < 10; i_10 += 3) 
                        {
                            {
                                var_23 -= ((/* implicit */signed char) var_10);
                                var_24 *= ((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) var_4)) : (var_3)));
                                arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_14);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_11 = 2; i_11 < 20; i_11 += 2) 
    {
        var_25 = ((/* implicit */unsigned long long int) var_14);
        var_26 = ((/* implicit */int) var_8);
    }
    /* vectorizable */
    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 2) 
    {
        var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_5)))) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
        var_28 -= ((/* implicit */_Bool) var_7);
        /* LoopNest 2 */
        for (unsigned char i_13 = 1; i_13 < 19; i_13 += 3) 
        {
            for (unsigned short i_14 = 0; i_14 < 23; i_14 += 3) 
            {
                {
                    arr_46 [i_12] [i_13] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) (unsigned char)83))));
                    /* LoopSeq 2 */
                    for (unsigned char i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_16 = 1; i_16 < 22; i_16 += 1) 
                        {
                            arr_51 [i_16] [i_13] [i_13] [(signed char)19] [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) var_5);
                            var_29 = ((/* implicit */unsigned char) var_3);
                            arr_52 [i_13] [i_13] [i_16] [i_13 + 3] [i_13] = ((/* implicit */unsigned short) ((var_1) ? (var_8) : (((/* implicit */unsigned int) var_9))));
                        }
                        for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 3) 
                        {
                            arr_55 [i_17] [i_17] [i_14] [i_14] [i_13 + 1] [i_17] [i_12] = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)));
                            arr_56 [i_12] [i_17] [i_14] [i_14] [i_17] = ((/* implicit */long long int) var_6);
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))));
                        }
                        for (signed char i_18 = 0; i_18 < 23; i_18 += 4) 
                        {
                            var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_3)) : (var_8)))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0)) ? (9223372036854775807LL) : (((/* implicit */long long int) 67108863))));
                        }
                        for (short i_19 = 0; i_19 < 23; i_19 += 2) 
                        {
                            arr_61 [18U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                            arr_62 [i_12] [i_13] [i_14] [i_15] [i_19] = ((/* implicit */unsigned long long int) var_5);
                        }
                        /* LoopSeq 3 */
                        for (int i_20 = 0; i_20 < 23; i_20 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_16)))));
                            var_34 = var_2;
                        }
                        for (signed char i_21 = 0; i_21 < 23; i_21 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_16)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) var_5))));
                            var_36 = var_2;
                        }
                        for (signed char i_22 = 0; i_22 < 23; i_22 += 1) 
                        {
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_5)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))));
                            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) var_17))));
                        }
                        arr_71 [i_15] [(short)8] [i_13] [i_12] |= ((/* implicit */unsigned short) var_0);
                        /* LoopSeq 3 */
                        for (short i_23 = 0; i_23 < 23; i_23 += 3) 
                        {
                            arr_74 [i_12] [(unsigned short)0] [i_12] [i_12] [(unsigned short)0] [i_12] [i_23] = ((/* implicit */int) var_13);
                            var_39 = ((/* implicit */_Bool) var_13);
                        }
                        for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                        {
                            var_40 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned int) ((var_14) ? (((/* implicit */int) var_13)) : (var_3)))) : (var_11)));
                            var_41 = ((/* implicit */long long int) var_0);
                            arr_77 [i_24] = ((/* implicit */long long int) var_4);
                        }
                        for (unsigned long long int i_25 = 3; i_25 < 20; i_25 += 1) 
                        {
                            arr_81 [i_14] = ((/* implicit */short) var_11);
                            var_42 = ((/* implicit */unsigned short) ((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_12)));
                        }
                    }
                    for (int i_26 = 0; i_26 < 23; i_26 += 1) 
                    {
                        var_43 -= ((/* implicit */unsigned char) ((var_1) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))))));
                        arr_84 [i_26] [i_13] [i_14] [i_26] = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((var_14) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_27 = 3; i_27 < 22; i_27 += 1) 
                    {
                        for (signed char i_28 = 0; i_28 < 23; i_28 += 3) 
                        {
                            {
                                var_44 = ((/* implicit */unsigned char) var_9);
                                arr_90 [i_12] [i_13] [1] [i_12] [i_28] [1] [i_28] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_29 = 0; i_29 < 23; i_29 += 2) 
                    {
                        for (signed char i_30 = 1; i_30 < 21; i_30 += 2) 
                        {
                            {
                                arr_96 [i_12] [i_12] [i_12] [(unsigned short)6] [i_12] = ((/* implicit */unsigned long long int) var_10);
                                var_45 = ((/* implicit */long long int) ((var_0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15))));
                            }
                        } 
                    } 
                    var_46 = ((/* implicit */short) ((var_10) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (unsigned char i_31 = 0; i_31 < 17; i_31 += 2) 
    {
        /* LoopNest 2 */
        for (short i_32 = 1; i_32 < 16; i_32 += 4) 
        {
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
            {
                {
                    arr_105 [i_32] [i_33] = ((/* implicit */unsigned int) var_14);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
                    {
                        var_47 = ((/* implicit */int) var_17);
                        var_48 = ((/* implicit */unsigned long long int) var_10);
                    }
                    arr_110 [i_31] [i_32] [i_33] [i_31] = ((/* implicit */_Bool) var_4);
                }
            } 
        } 
        var_49 = ((/* implicit */signed char) var_1);
        var_50 |= ((/* implicit */short) var_9);
        arr_111 [(short)0] = ((/* implicit */unsigned char) var_11);
        /* LoopNest 2 */
        for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
        {
            for (long long int i_36 = 0; i_36 < 17; i_36 += 2) 
            {
                {
                    var_51 = ((/* implicit */unsigned long long int) var_6);
                    var_52 = ((/* implicit */unsigned char) var_8);
                }
            } 
        } 
    }
    for (unsigned char i_37 = 4; i_37 < 11; i_37 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_38 = 0; i_38 < 12; i_38 += 3) 
        {
            for (int i_39 = 4; i_39 < 10; i_39 += 3) 
            {
                for (signed char i_40 = 1; i_40 < 11; i_40 += 4) 
                {
                    {
                        arr_130 [i_40] [i_38] [i_38] [i_38] [i_38] [i_37] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_9)) : (var_5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_17)) ? (var_8) : (((/* implicit */unsigned int) var_3))))))));
                        var_53 = ((/* implicit */long long int) var_14);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_41 = 1; i_41 < 1; i_41 += 1) 
        {
            for (int i_42 = 0; i_42 < 12; i_42 += 3) 
            {
                for (unsigned long long int i_43 = 0; i_43 < 12; i_43 += 4) 
                {
                    {
                        arr_139 [i_37] [i_42] [i_37] [i_37] = ((/* implicit */short) var_9);
                        /* LoopSeq 4 */
                        for (_Bool i_44 = 0; i_44 < 1; i_44 += 1) 
                        {
                            var_54 += ((/* implicit */signed char) ((var_1) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13))));
                            arr_142 [i_37] [i_41] [i_37] [i_43] [i_42] = ((/* implicit */unsigned int) var_17);
                            var_55 = ((/* implicit */unsigned char) var_0);
                            arr_143 [9ULL] [i_41] [i_42] [i_42] [i_44] = ((/* implicit */int) var_11);
                        }
                        for (unsigned char i_45 = 0; i_45 < 12; i_45 += 2) 
                        {
                            var_56 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_8)) : (var_17)));
                            var_57 = ((((/* implicit */_Bool) ((var_1) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_11))));
                            arr_147 [i_37] [i_41] [i_42] [i_43] [i_37] = ((/* implicit */signed char) var_16);
                            var_58 = ((/* implicit */unsigned short) min((var_58), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6))))))))))));
                        }
                        for (_Bool i_46 = 0; i_46 < 1; i_46 += 1) 
                        {
                            arr_151 [i_37 - 1] [(_Bool)1] [i_41] [i_37 - 1] [i_41] [i_42] = var_1;
                            var_59 = ((/* implicit */unsigned char) var_7);
                        }
                        for (int i_47 = 0; i_47 < 12; i_47 += 2) 
                        {
                            arr_154 [i_42] [i_43] [i_42] [i_42] [i_41] [i_42] = ((/* implicit */short) var_7);
                            var_60 = ((/* implicit */unsigned char) var_4);
                            arr_155 [i_37] [i_37] [i_37] [i_37 - 3] [i_42] = ((/* implicit */unsigned long long int) var_3);
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_48 = 0; i_48 < 12; i_48 += 2) 
                        {
                            arr_158 [i_42] [i_48] [i_42] [i_43] [i_48] [i_42] = ((/* implicit */signed char) var_3);
                            arr_159 [i_48] [i_42] [i_42] [i_42] [i_37] = ((/* implicit */signed char) var_17);
                        }
                    }
                } 
            } 
        } 
    }
    for (signed char i_49 = 1; i_49 < 20; i_49 += 3) 
    {
        var_61 = ((/* implicit */unsigned char) var_7);
        var_62 = ((((/* implicit */_Bool) var_17)) ? (var_3) : (((var_1) ? (((/* implicit */int) var_4)) : (var_3))));
        var_63 = ((/* implicit */signed char) var_14);
        var_64 = ((/* implicit */signed char) var_14);
    }
}
