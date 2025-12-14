/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107370
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
    var_18 = ((/* implicit */long long int) var_5);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 = var_1;
                        arr_13 [i_0] = ((/* implicit */unsigned short) arr_0 [i_1]);
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_6 [(_Bool)1] [i_1] [i_1]))));
                    }
                } 
            } 
        } 
        var_21 += ((/* implicit */signed char) min((arr_9 [i_0] [i_0]), (var_8)));
    }
    for (short i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        var_22 = ((/* implicit */int) arr_14 [i_4]);
        /* LoopSeq 3 */
        for (long long int i_5 = 4; i_5 < 22; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_6 = 1; i_6 < 23; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        {
                            arr_30 [i_8] [i_5] [i_6] [i_6] [i_6] [i_5] [i_4] = ((/* implicit */_Bool) var_14);
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_24 [i_5 - 4] [i_5 - 4] [i_6] [(_Bool)1]))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned char) arr_25 [i_4] [i_4]);
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) arr_25 [i_4] [i_4]))));
        }
        for (int i_9 = 1; i_9 < 22; i_9 += 1) 
        {
            var_26 = ((/* implicit */int) max((var_26), ((-(((/* implicit */int) var_0))))));
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    {
                        var_27 = ((/* implicit */int) var_4);
                        /* LoopSeq 2 */
                        for (int i_12 = 2; i_12 < 23; i_12 += 1) 
                        {
                            var_28 = ((/* implicit */long long int) arr_35 [i_9] [i_11] [i_10] [i_9]);
                            arr_44 [i_12] [i_11] [i_10] [i_10] [i_9 - 1] [i_4] [i_4] &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_34 [i_4])), (min((((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4] [i_9] [i_10] [i_11]))) : (var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_4] [i_9] [i_10] [i_12])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_17 [i_4])))))))));
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (~(((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_4]))))) ? (((((/* implicit */_Bool) arr_35 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_35 [i_4] [i_9] [i_4] [i_12])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_11)))))))));
                        }
                        for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((arr_23 [i_4]), (arr_46 [i_4] [i_9] [i_10] [i_11] [i_4])))), (min((arr_22 [i_4] [i_9] [i_10] [i_11]), (((/* implicit */unsigned int) arr_39 [11] [i_9]))))))) ? (((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) var_13))))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_45 [i_11] [i_13])) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_27 [(unsigned char)21] [i_9] [i_10] [i_10] [i_11] [i_13]), (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) arr_21 [i_10] [i_9 - 1] [i_10] [i_4])) ? (((/* implicit */int) arr_23 [i_9 + 1])) : (((/* implicit */int) arr_23 [i_9])))))))));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_11] [i_11] [i_10] [i_11] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_29 [i_4] [i_13] [i_13] [i_11])))) ? (max((arr_19 [i_4]), (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (arr_32 [i_4] [i_9] [i_9]) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_37 [i_10] [i_11] [i_10])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_14 [i_4])))))))));
                            var_32 = max((((/* implicit */int) arr_46 [i_4] [i_9 + 2] [i_9] [i_9] [i_13])), (var_10));
                        }
                        arr_48 [i_4] [i_4] = ((((/* implicit */_Bool) min(((-(arr_15 [i_11]))), (arr_19 [i_10])))) ? (((/* implicit */int) var_8)) : (var_7));
                        arr_49 [i_11] [i_4] [i_9] [i_4] = var_10;
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_14 = 2; i_14 < 20; i_14 += 1) 
            {
                for (unsigned int i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    {
                        var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9532768557319161519ULL)) ? (-650553295) : (((/* implicit */int) (signed char)-21))))) ? (((/* implicit */unsigned long long int) min((arr_27 [i_4] [i_9 + 1] [i_14] [i_15] [i_4] [i_14 + 4]), (arr_36 [i_15] [i_14] [i_4])))) : (min((var_1), (var_1)))))) ? (min((max((((/* implicit */long long int) var_0)), (arr_32 [(unsigned short)7] [i_9] [i_9]))), (((/* implicit */long long int) var_15)))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_16)), (var_10)))) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_4] [i_9 + 1] [i_9 + 1] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_19 [i_4]))))))));
                        arr_57 [i_4] [i_14] [i_9] [i_14] [i_15] = ((/* implicit */unsigned char) var_0);
                        var_34 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294221010227230719LL)) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) 1980543195966361061LL))))) ? (min((((/* implicit */unsigned long long int) arr_53 [(unsigned char)20] [i_14] [i_9] [i_9] [i_4])), (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35440)) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_4)) : (arr_42 [i_15] [i_14] [i_4] [i_4] [i_4]))))));
                    }
                } 
            } 
            var_35 |= ((/* implicit */int) arr_35 [i_4] [i_4] [i_9 - 1] [i_9]);
        }
        for (long long int i_16 = 0; i_16 < 24; i_16 += 1) 
        {
            var_36 = ((/* implicit */int) var_9);
            var_37 |= ((/* implicit */signed char) var_5);
            var_38 = ((/* implicit */int) arr_43 [i_4] [i_4] [i_4] [i_4] [i_4] [i_16]);
            var_39 = var_13;
        }
    }
    for (unsigned short i_17 = 0; i_17 < 12; i_17 += 1) 
    {
        var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_0 [i_17])) ? (((/* implicit */int) arr_47 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])) : (((/* implicit */int) arr_46 [i_17] [i_17] [i_17] [i_17] [i_17]))))))), (arr_50 [0LL]))))));
        /* LoopNest 3 */
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 1) 
            {
                for (long long int i_20 = 1; i_20 < 8; i_20 += 1) 
                {
                    {
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2147483632)) ? (((/* implicit */unsigned int) 2147483632)) : (1728724532U)));
                        var_42 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_38 [i_19])) ? (((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) arr_58 [i_17] [i_17] [i_17]))))) : (var_9))), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_10)))))))));
                        /* LoopSeq 1 */
                        for (int i_21 = 1; i_21 < 11; i_21 += 1) 
                        {
                            var_43 = ((/* implicit */int) arr_15 [i_21]);
                            var_44 = ((/* implicit */unsigned short) var_17);
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_22 = 1; i_22 < 9; i_22 += 1) 
        {
            for (unsigned char i_23 = 0; i_23 < 12; i_23 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 1) 
                    {
                        for (long long int i_25 = 3; i_25 < 8; i_25 += 1) 
                        {
                            {
                                var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_60 [i_17] [i_23])), (arr_50 [i_17]))), (((/* implicit */unsigned int) arr_20 [i_25 + 4] [i_24] [i_22] [i_17]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) max((arr_63 [i_24] [i_24] [i_23]), (((/* implicit */int) var_17))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_17] [11U] [i_23] [i_25]))) : (arr_50 [i_17])))))) : (((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (arr_66 [i_23] [i_23])))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_17 [i_17]), (((/* implicit */unsigned short) arr_53 [i_17] [i_17] [i_17] [i_17] [i_17])))))) : (min((((/* implicit */long long int) arr_39 [i_23] [6])), (arr_1 [i_23])))))));
                                var_46 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (max((arr_51 [i_17] [i_17]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (arr_45 [i_23] [i_25]) : (arr_64 [i_17])))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_80 [i_17] [i_22] [i_23])), (arr_31 [i_17])))) ? (min((((/* implicit */unsigned long long int) var_15)), (arr_83 [i_17]))) : (((/* implicit */unsigned long long int) (+(var_7))))))));
                            }
                        } 
                    } 
                    var_47 = ((/* implicit */unsigned char) var_15);
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_27 = 0; i_27 < 20; i_27 += 1) 
        {
            for (unsigned char i_28 = 2; i_28 < 17; i_28 += 1) 
            {
                for (long long int i_29 = 0; i_29 < 20; i_29 += 1) 
                {
                    {
                        var_48 += ((/* implicit */signed char) arr_7 [i_26]);
                        var_49 = ((/* implicit */signed char) var_11);
                    }
                } 
            } 
        } 
        arr_94 [i_26] = ((/* implicit */int) arr_31 [i_26]);
        var_50 = var_4;
        var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) arr_27 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26])) ? (arr_45 [i_26] [i_26]) : (var_7))) : (arr_91 [i_26] [i_26])));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_30 = 0; i_30 < 14; i_30 += 1) 
    {
        for (unsigned char i_31 = 2; i_31 < 12; i_31 += 1) 
        {
            for (long long int i_32 = 2; i_32 < 12; i_32 += 1) 
            {
                {
                    arr_105 [i_30] = ((/* implicit */long long int) (-(((/* implicit */int) var_17))));
                    /* LoopNest 2 */
                    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                    {
                        for (signed char i_34 = 0; i_34 < 14; i_34 += 1) 
                        {
                            {
                                arr_110 [i_31] [i_32] [i_33] [i_30] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_95 [i_30]), (arr_45 [i_30] [i_31])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (var_15))))) : (arr_6 [i_32] [i_33] [i_34])))) ? (min((((/* implicit */unsigned long long int) max((arr_35 [i_30] [i_30] [i_30] [i_30]), (arr_103 [i_30] [i_30])))), (((((/* implicit */_Bool) arr_88 [i_31] [i_32] [i_30])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) min((max((((/* implicit */int) var_14)), (arr_45 [i_33] [i_31 + 1]))), (((/* implicit */int) arr_102 [i_30] [i_30] [i_32 - 2])))))));
                                var_52 = ((/* implicit */long long int) arr_27 [i_30] [i_30] [i_32] [(short)3] [i_32] [i_34]);
                            }
                        } 
                    } 
                    var_53 = ((/* implicit */int) max((((((/* implicit */_Bool) min((((/* implicit */int) arr_41 [1] [i_31] [i_31 - 1] [i_31] [i_30] [i_30] [i_30])), (arr_36 [i_30] [i_31 + 1] [i_32])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_35 [i_30] [i_30] [i_31] [i_32 + 2])), (arr_3 [i_30])))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_11 [i_30] [i_30] [i_30] [i_30] [i_32 - 2] [i_32 - 1]))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((arr_21 [i_30] [i_31] [i_32] [i_31]), (var_17)))), (((((/* implicit */_Bool) var_14)) ? (arr_16 [i_30]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                    var_54 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_106 [i_32] [i_30] [i_31 - 1] [i_30] [i_30]))))))) : (max((((/* implicit */unsigned long long int) arr_56 [i_30] [i_31] [i_32] [i_30] [(unsigned short)4] [i_30])), (min((var_1), (((/* implicit */unsigned long long int) arr_20 [i_30] [i_30] [i_31] [i_30]))))))));
                }
            } 
        } 
    } 
}
