/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161330
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
    var_16 |= ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 2512799564U)) : (4520492195639231991ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_2)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_2)))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                var_19 = ((/* implicit */_Bool) var_6);
                arr_7 [i_0] [i_0 + 4] [i_1] [i_2] = ((/* implicit */unsigned char) var_15);
                arr_8 [i_0] [1] [i_2] = var_6;
            }
            var_20 = ((/* implicit */unsigned int) var_8);
        }
        var_21 = ((/* implicit */unsigned long long int) var_10);
        /* LoopSeq 2 */
        for (short i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            var_22 = ((/* implicit */unsigned char) var_8);
            arr_11 [i_0] [i_0 - 1] [i_3] &= ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_13)))));
            arr_12 [i_0 - 1] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            arr_16 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3826431546U)) ? (((/* implicit */unsigned long long int) 468535761U)) : (5247841574839760893ULL)))) ? (var_9) : (((/* implicit */unsigned int) var_10))));
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (var_7)))) ? (((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) var_5))));
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) var_2)))) : (var_3))))));
        }
        /* LoopSeq 4 */
        for (long long int i_5 = 2; i_5 < 11; i_5 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                var_26 = ((/* implicit */unsigned int) var_8);
                var_27 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (var_10)))) : (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned long long int) var_2))))));
                /* LoopSeq 3 */
                for (int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 4) 
                    {
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_12))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_12))))))));
                        arr_25 [i_8] [i_5 - 1] [11U] [i_6] [i_7] [i_8] = ((/* implicit */short) var_10);
                        arr_26 [i_8] [i_8] = ((/* implicit */unsigned long long int) var_6);
                        var_29 = ((/* implicit */unsigned long long int) var_11);
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 12; i_9 += 4) 
                    {
                        var_30 = ((/* implicit */_Bool) var_14);
                        arr_29 [i_0] [i_5 + 1] [i_6] [i_7] [i_6] [i_9] = var_1;
                    }
                    for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        arr_32 [i_0] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 5247841574839760893ULL)) ? (468535772U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-12534)))))) : (var_2)));
                        arr_33 [i_0] [i_5] [i_5] [i_6] [i_7] [i_10] [i_10] = ((/* implicit */unsigned int) var_6);
                    }
                    for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((((/* implicit */_Bool) 3462701641U)) ? (13926251878070319614ULL) : (13926251878070319625ULL)))));
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_13)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 2; i_12 < 12; i_12 += 4) 
                    {
                        var_33 = ((/* implicit */int) var_12);
                        arr_38 [i_0 + 1] [8U] [i_6] [i_7] = ((/* implicit */unsigned short) var_10);
                        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) var_3))));
                        var_35 = ((/* implicit */unsigned short) var_12);
                    }
                    var_36 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))));
                }
                for (unsigned long long int i_13 = 2; i_13 < 11; i_13 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        arr_44 [i_0] [i_0] [i_0] [i_13] [i_14] [6] [i_14] = ((/* implicit */unsigned long long int) var_13);
                        var_37 -= ((/* implicit */unsigned char) var_8);
                        var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned long long int) var_13))));
                        var_39 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_12)))) ? (((/* implicit */int) var_14)) : (var_7)));
                    }
                    arr_45 [i_0 - 1] [(unsigned char)6] [i_6] [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (var_12) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_12)))));
                }
                for (short i_15 = 0; i_15 < 13; i_15 += 4) 
                {
                    var_40 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8))));
                    var_41 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_13)))) ? (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
                }
            }
            for (unsigned short i_16 = 0; i_16 < 13; i_16 += 4) 
            {
                arr_51 [i_0] &= var_14;
                arr_52 [i_0 + 3] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_14))));
                /* LoopSeq 3 */
                for (int i_17 = 0; i_17 < 13; i_17 += 4) 
                {
                    var_42 ^= ((/* implicit */unsigned long long int) var_2);
                    arr_55 [i_17] = ((/* implicit */short) var_2);
                    var_43 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_12)));
                }
                for (unsigned short i_18 = 0; i_18 < 13; i_18 += 4) 
                {
                    arr_60 [i_0] [i_0] [i_16] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                    var_44 = ((/* implicit */unsigned char) var_8);
                }
                for (int i_19 = 3; i_19 < 11; i_19 += 4) 
                {
                    var_45 ^= ((/* implicit */int) var_9);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 13; i_20 += 4) 
                    {
                        var_46 &= ((/* implicit */unsigned short) var_14);
                        var_47 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                    }
                    for (short i_21 = 1; i_21 < 11; i_21 += 4) 
                    {
                        var_48 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))));
                        var_49 = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_8)) ? (var_0) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))));
                    }
                }
                var_50 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */int) var_8)))))));
                var_51 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_5))) : (((/* implicit */unsigned int) var_10)));
            }
            for (short i_22 = 1; i_22 < 12; i_22 += 4) 
            {
                arr_72 [i_0 + 2] [i_5] [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_2)) : (var_3))) : (((((/* implicit */_Bool) (unsigned short)46207)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (4520492195639231975ULL)))));
                var_52 = ((/* implicit */unsigned short) var_12);
            }
            for (long long int i_23 = 1; i_23 < 12; i_23 += 4) 
            {
                arr_76 [i_0] [i_5] [i_0] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_7)) : (var_12));
                arr_77 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) var_3);
                arr_78 [i_0] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_7) : (var_7)))) ? (((((/* implicit */_Bool) var_3)) ? (var_3) : (var_3))) : (var_12))))));
            }
            var_54 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_7)) : (var_3))));
        }
        for (long long int i_24 = 2; i_24 < 11; i_24 += 4) /* same iter space */
        {
            var_55 = ((/* implicit */unsigned int) max((var_55), (((/* implicit */unsigned int) var_10))));
            var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_7) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_8)) ? (var_7) : (var_7)))));
            var_57 ^= ((/* implicit */unsigned short) var_14);
            arr_81 [i_0] = var_6;
        }
        for (long long int i_25 = 2; i_25 < 11; i_25 += 4) /* same iter space */
        {
            arr_84 [i_0] [i_0] [i_25] = ((/* implicit */_Bool) var_2);
            var_58 = ((/* implicit */unsigned int) var_2);
        }
        for (long long int i_26 = 2; i_26 < 11; i_26 += 4) /* same iter space */
        {
            arr_87 [i_0] [i_26 - 2] [i_26 + 1] = ((/* implicit */unsigned long long int) var_2);
            var_59 = ((/* implicit */unsigned int) var_2);
            /* LoopSeq 1 */
            for (int i_27 = 1; i_27 < 11; i_27 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_28 = 0; i_28 < 13; i_28 += 4) 
                {
                    for (short i_29 = 0; i_29 < 13; i_29 += 4) 
                    {
                        {
                            var_60 = var_7;
                            arr_96 [i_0] [i_26 + 1] [i_29] [i_27] [i_0] |= var_13;
                        }
                    } 
                } 
                var_61 |= ((/* implicit */unsigned short) var_10);
            }
            var_62 -= ((/* implicit */unsigned long long int) var_6);
        }
    }
    for (short i_30 = 2; i_30 < 8; i_30 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_31 = 0; i_31 < 12; i_31 += 4) 
        {
            for (short i_32 = 1; i_32 < 11; i_32 += 4) 
            {
                {
                    var_63 = ((/* implicit */unsigned long long int) var_5);
                    /* LoopSeq 1 */
                    for (int i_33 = 1; i_33 < 9; i_33 += 4) 
                    {
                        var_64 = ((/* implicit */unsigned long long int) max((var_64), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2767628330U)) ? (((/* implicit */int) var_4)) : (var_7)))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_13)) : (var_3)))))))));
                        var_65 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_5)) ? (var_13) : (var_9))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_9)))))) ? (var_5) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_13)))) ? (((/* implicit */unsigned int) var_7)) : (var_13)))));
                        /* LoopSeq 2 */
                        for (unsigned char i_34 = 1; i_34 < 8; i_34 += 4) 
                        {
                            arr_108 [i_32] [i_30] [i_30] [i_31] = ((/* implicit */unsigned long long int) var_11);
                            var_66 -= ((/* implicit */short) var_3);
                            var_67 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (var_0) : (var_9)));
                            arr_109 [i_30] [i_32] [i_31] [i_32 - 1] [i_33] [i_34 - 1] = ((/* implicit */unsigned int) var_14);
                            var_68 = ((/* implicit */unsigned long long int) var_1);
                        }
                        /* vectorizable */
                        for (int i_35 = 0; i_35 < 12; i_35 += 4) 
                        {
                            var_69 = var_7;
                            arr_112 [i_32] [i_31] [(_Bool)1] [11U] [i_35] = ((/* implicit */unsigned long long int) var_13);
                        }
                    }
                    var_70 = ((/* implicit */short) var_7);
                }
            } 
        } 
        var_71 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_13) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (var_7)))))))));
        var_72 = ((/* implicit */short) min((var_72), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_2)))) ? (((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */int) var_6))))) : (var_9))))))));
        var_73 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)));
    }
    var_74 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    var_75 = ((/* implicit */unsigned char) var_1);
}
