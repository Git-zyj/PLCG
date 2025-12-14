/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14477
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
    var_10 = ((/* implicit */unsigned long long int) max((var_10), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))) : ((-(((/* implicit */int) var_7))))))) ? (var_0) : (max((((((/* implicit */_Bool) var_9)) ? (var_1) : (var_1))), (((/* implicit */unsigned long long int) var_2))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 6; i_3 += 2) 
                    {
                        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_1))))))));
                        var_12 = ((/* implicit */long long int) (~(2766289168U)));
                        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) var_5))));
                    }
                    for (int i_4 = 1; i_4 < 7; i_4 += 4) /* same iter space */
                    {
                        arr_16 [i_4] [i_1] [i_1] [i_4] = ((/* implicit */short) var_9);
                        var_14 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(min((var_8), (((/* implicit */long long int) var_6))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (min((((/* implicit */unsigned long long int) var_7)), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                        var_15 = ((/* implicit */signed char) max(((-(var_0))), (((/* implicit */unsigned long long int) min((min((var_3), (var_3))), (var_7))))));
                        var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_8))))) ? ((~(var_1))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4)))))));
                    }
                    for (int i_5 = 1; i_5 < 7; i_5 += 4) /* same iter space */
                    {
                        arr_20 [i_5] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) max((max((min((var_1), (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_8)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */short) var_2))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_6))))))))));
                        arr_21 [i_2] [i_1 + 2] [i_2] [i_5 + 1] |= ((/* implicit */unsigned int) max((((/* implicit */int) var_5)), (max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        var_17 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_8)) : (var_1)))));
                        var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_0)) ? (var_9) : (var_8)))))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) -947833999)), ((-9223372036854775807LL - 1LL))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_1))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                        var_19 = ((/* implicit */unsigned short) min(((-(max((-9223372036854775783LL), (((/* implicit */long long int) 0)))))), (((/* implicit */long long int) (+((-(((/* implicit */int) var_7)))))))));
                    }
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_6)), (var_3)))), (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) var_2))))) ? (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))))));
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))));
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            arr_29 [i_0 + 1] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_1)))) ? (((/* implicit */unsigned long long int) min((var_8), (var_8)))) : (max((var_0), (((/* implicit */unsigned long long int) var_6)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_9)))) ? (max((var_8), (((/* implicit */long long int) var_4)))) : (var_8))))));
            var_22 = ((/* implicit */short) max((min((((/* implicit */long long int) var_5)), (var_8))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_9)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_8 = 4; i_8 < 9; i_8 += 3) 
            {
                arr_33 [i_0] [i_7] [i_7] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_9)) : (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                /* LoopSeq 4 */
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
                {
                    arr_37 [i_9] [i_9] [i_9] [i_9] [i_0 + 1] [i_0 + 1] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_9));
                    arr_38 [i_9] [i_7] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
                }
                for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_9)));
                        var_24 = var_9;
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))));
                    }
                    var_26 = ((/* implicit */long long int) (~(255U)));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_0)))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_6)))))));
                    var_28 &= ((/* implicit */unsigned short) (+(((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_1)))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (var_9)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_8))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))))))));
                    var_30 = ((/* implicit */int) (~(var_8)));
                    arr_49 [i_12] [i_7] [i_8 + 1] [i_12] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_4))));
                }
                for (unsigned char i_13 = 2; i_13 < 8; i_13 += 3) 
                {
                    var_31 = ((/* implicit */unsigned short) var_1);
                    arr_53 [i_0 - 1] [i_13] [i_0 - 1] [i_8] [i_7] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_9)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) var_3))));
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? ((~(var_9))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_8))))))));
                    var_33 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) var_3))));
                    arr_54 [i_0 + 3] [i_0] [i_0 + 2] [i_0 + 1] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
                }
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_14 = 1; i_14 < 9; i_14 += 1) 
            {
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_9)))));
                /* LoopSeq 3 */
                for (unsigned char i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_16 = 2; i_16 < 9; i_16 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_4))))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) (!(var_6)))) : (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_2)))))))) : (max((((/* implicit */unsigned long long int) min((var_3), (var_7)))), (max((var_0), (((/* implicit */unsigned long long int) var_8))))))));
                        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)17597)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (9223372036854775757LL)))) : (min((((/* implicit */unsigned long long int) var_2)), (var_0))))))));
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-24148)) : (((/* implicit */int) var_6)))))));
                        var_38 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_1)))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
                        var_39 = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) var_3)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        arr_67 [i_0] [i_7] [i_14] [i_14] [i_17] = ((/* implicit */_Bool) var_8);
                        var_40 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
                        arr_68 [i_0] [i_0] [i_0 + 3] [i_0 + 1] [i_0 + 3] [i_0 + 1] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_0)));
                    }
                    var_41 = ((/* implicit */unsigned short) var_1);
                }
                /* vectorizable */
                for (short i_18 = 0; i_18 < 10; i_18 += 1) 
                {
                    var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                    var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) (~(((/* implicit */int) var_2)))))));
                }
                for (unsigned int i_19 = 0; i_19 < 10; i_19 += 1) 
                {
                    var_44 = ((/* implicit */int) (((!(((/* implicit */_Bool) min((var_8), (((/* implicit */long long int) var_5))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) min((var_7), (var_4)))) ? (((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                    var_45 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) (~(((/* implicit */int) var_3)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_8)) : (var_1)))) ? ((~(var_0))) : (((/* implicit */unsigned long long int) ((var_6) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) var_5)) ? (var_0) : (var_1)))))));
                }
                arr_73 [i_0 + 1] [i_0 + 1] [i_14] [i_7] = ((/* implicit */int) (-(min((((/* implicit */long long int) max((((/* implicit */int) (unsigned short)17991)), (-1272388563)))), (max((((/* implicit */long long int) var_2)), (var_8)))))));
            }
            /* vectorizable */
            for (int i_20 = 0; i_20 < 10; i_20 += 2) 
            {
                var_46 |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))));
                /* LoopSeq 1 */
                for (int i_21 = 0; i_21 < 10; i_21 += 1) 
                {
                    arr_80 [i_0 + 1] [(unsigned char)0] [i_0 + 1] [i_7] [i_20] [i_0] |= ((/* implicit */signed char) ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                    {
                        var_47 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_8)) : (var_0)))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                        var_48 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_8)))) ? (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                    {
                        arr_88 [i_21] [i_21] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                        var_49 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
                        var_50 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                    }
                    var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) var_4))));
                    /* LoopSeq 2 */
                    for (unsigned short i_24 = 0; i_24 < 10; i_24 += 3) 
                    {
                        var_52 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))));
                        var_53 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_8) : (var_9)))) ? (((/* implicit */unsigned long long int) var_8)) : (var_1)));
                        arr_91 [i_21] [(_Bool)0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
                        var_54 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
                    }
                    for (unsigned long long int i_25 = 3; i_25 < 9; i_25 += 2) 
                    {
                        arr_94 [i_21] [i_25] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)));
                        arr_95 [i_20] [i_20] [i_20] |= ((/* implicit */signed char) ((var_6) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned long long int i_26 = 1; i_26 < 8; i_26 += 1) 
                {
                    for (signed char i_27 = 2; i_27 < 7; i_27 += 4) 
                    {
                        {
                            arr_103 [i_0] [i_7] [(_Bool)0] [i_26] [i_26] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_9)) : (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))))));
                            arr_104 [i_26] [i_26] [i_20] [i_7] [i_26] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) : (var_1)));
                            arr_105 [6ULL] [i_26] [i_26] [i_7] [i_20] [i_26] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
                            var_55 ^= ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
                            arr_106 [i_26] [i_7] [i_20] [(unsigned char)0] [i_27] [i_20] [i_26] = var_9;
                        }
                    } 
                } 
            }
        }
        /* LoopNest 2 */
        for (unsigned short i_28 = 0; i_28 < 10; i_28 += 1) 
        {
            for (unsigned int i_29 = 0; i_29 < 10; i_29 += 4) 
            {
                {
                    var_56 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((var_8), (((/* implicit */long long int) var_3)))), (((((/* implicit */_Bool) var_2)) ? (var_8) : (var_8)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (var_5))))) : (((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                    /* LoopSeq 2 */
                    for (long long int i_30 = 1; i_30 < 8; i_30 += 2) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                        {
                            var_57 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */short) var_2))))), (min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_9))))))));
                            var_58 -= max((3058531933750851977ULL), (((/* implicit */unsigned long long int) (unsigned char)5)));
                        }
                        /* vectorizable */
                        for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) /* same iter space */
                        {
                            arr_121 [i_0] [i_0 - 2] [(short)4] [i_0] [i_28] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) var_3))))));
                            var_59 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))));
                        }
                        /* vectorizable */
                        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) /* same iter space */
                        {
                            var_60 = ((/* implicit */long long int) (~(((/* implicit */int) (short)30061))));
                            arr_125 [i_0 + 1] [i_28] [i_28] [i_29] [i_30] [i_33] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        }
                        arr_126 [i_29] [i_0] [i_28] [i_29] [i_30] |= max((((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))))), (((/* implicit */long long int) max(((+(((/* implicit */int) var_7)))), ((-(((/* implicit */int) var_7))))))));
                        var_61 = ((/* implicit */unsigned int) max((var_61), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (min((var_8), (var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))), (var_1))))))));
                    }
                    for (long long int i_34 = 1; i_34 < 8; i_34 += 2) /* same iter space */
                    {
                        arr_129 [i_34] [i_28] [i_28] [i_34] [i_28] = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) var_8))))))));
                        arr_130 [i_0] [i_28] [(short)0] [i_34 - 1] [i_29] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned long long int) var_9))))))));
                        var_62 &= ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_0))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (var_8)))))), (min((((/* implicit */unsigned long long int) var_8)), (var_1)))));
                        var_63 = ((/* implicit */_Bool) min((var_63), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_3)))) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) : (((var_6) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                    }
                    arr_131 [i_28] = ((/* implicit */_Bool) min((((/* implicit */long long int) max((var_7), (((/* implicit */unsigned short) var_5))))), (((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */long long int) var_7)), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_5))))))))));
                }
            } 
        } 
    }
    for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
    {
        var_64 = ((/* implicit */short) min((var_64), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
        var_65 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) var_8)), (max((var_1), (((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned long long int) var_9))))))));
        arr_134 [i_35] |= ((/* implicit */unsigned short) var_2);
    }
    var_66 = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(263038841)))))) ? (var_1) : (var_0)));
    var_67 = ((/* implicit */unsigned int) max((var_67), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_9)))) ? (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) var_4))))) : (((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) var_6)))))));
    var_68 = ((/* implicit */unsigned char) var_1);
}
