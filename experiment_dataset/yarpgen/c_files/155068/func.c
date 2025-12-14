/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155068
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-66))) : (687655598U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(687655598U)))) ? ((-(((/* implicit */int) var_6)))) : ((+(((/* implicit */int) (unsigned short)63081))))))) : (min((((((/* implicit */_Bool) (signed char)127)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)164))))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 + 2]))))));
        var_12 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) 3730696142U))))))));
        var_13 += 3607311697U;
        var_14 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)8] [i_0 + 2]))) : (15728062851126660604ULL))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))))) ? (((long long int) arr_1 [12U] [i_0 - 2])) : (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [(unsigned short)10]) == (var_9)))))));
        arr_4 [i_0] = ((/* implicit */signed char) var_9);
    }
    for (unsigned char i_1 = 2; i_1 < 12; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_2 [i_1 - 1]))))));
        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_2 [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
    }
    for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) /* same iter space */
    {
        arr_12 [(_Bool)1] |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) / (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : ((-(var_1)))))));
        arr_13 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-91))))) & (((/* implicit */int) var_6)))) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (139)))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 12; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 3607311684U)))))));
                    arr_18 [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)77))) : (18446744073709551615ULL))))));
                    arr_19 [i_2] = ((/* implicit */unsigned int) (~(arr_0 [i_4])));
                }
            } 
        } 
    }
    for (unsigned char i_5 = 2; i_5 < 12; i_5 += 3) /* same iter space */
    {
        arr_23 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))))) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)42)))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 3; i_7 < 12; i_7 += 2) 
            {
                {
                    arr_30 [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) arr_17 [i_5] [i_6] [i_7] [i_5]);
                    var_19 = ((/* implicit */signed char) ((_Bool) (+(((long long int) 27U)))));
                    var_20 = ((/* implicit */_Bool) max((var_20), ((!(((/* implicit */_Bool) min((var_9), (arr_22 [4ULL]))))))));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14847))) * (4294967295U)))))))))));
                }
            } 
        } 
        arr_31 [i_5] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) (_Bool)0)))));
        var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_5] [i_5] [i_5 - 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) arr_14 [(unsigned char)10])) : (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_10)))))) : (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned int) -1860442495)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [6U] [i_5])) ? (((/* implicit */int) arr_1 [(unsigned short)10] [(unsigned short)10])) : (((/* implicit */int) var_0)))))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_9 = 3; i_9 < 7; i_9 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) arr_3 [i_8]))));
            arr_37 [i_9 - 3] = ((/* implicit */unsigned char) arr_2 [i_9]);
        }
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            arr_41 [i_8] [i_10] = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)213));
            arr_42 [i_10] [i_8] [i_8] &= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)28))));
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_8] [i_8] [i_8])) | ((~(((/* implicit */int) var_0)))))))));
        }
        for (int i_11 = 0; i_11 < 10; i_11 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_25 += ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_34 [i_12] [i_8])) - (((/* implicit */int) (signed char)18))))));
                /* LoopSeq 1 */
                for (signed char i_13 = 0; i_13 < 10; i_13 += 4) 
                {
                    arr_50 [i_8] [i_11] [i_11] [i_12] [i_12] [i_13] &= ((((/* implicit */_Bool) 14886434244421132437ULL)) ? (((/* implicit */unsigned long long int) 1950601811)) : (1ULL));
                    arr_51 [i_8] [i_11] = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) 742825398U)) && (((/* implicit */_Bool) (signed char)-127)))))));
                }
                /* LoopSeq 3 */
                for (short i_14 = 1; i_14 < 6; i_14 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_9 [i_14] [i_14]))));
                    var_28 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)1022)) : (((/* implicit */int) var_4)))))));
                    var_29 = ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned char)63)) - (((/* implicit */int) (_Bool)0))))));
                }
                for (short i_15 = 1; i_15 < 6; i_15 += 4) /* same iter space */
                {
                    arr_56 [i_15] [i_15 + 4] [i_12] [i_12] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_15 - 1] [i_8]))) : (arr_8 [i_11] [i_11])));
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_55 [i_15 + 4] [i_15 + 2] [i_15] [i_15 + 4] [i_15 + 4] [i_15])));
                    var_31 = ((/* implicit */unsigned char) (-(arr_39 [i_8])));
                }
                for (short i_16 = 1; i_16 < 6; i_16 += 4) /* same iter space */
                {
                    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_11] [i_16 + 2])) ? (((((/* implicit */int) arr_6 [i_11])) / (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_36 [i_8] [i_8]))));
                    arr_60 [i_8] [i_16] = ((/* implicit */unsigned char) ((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_16] [i_16])))));
                    arr_61 [i_8] [i_11] [i_11] [i_12] [i_12] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_16] [i_16 + 2] [i_16 + 1])))));
                }
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 3; i_17 < 9; i_17 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 2; i_18 < 7; i_18 += 3) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 1) 
                    {
                        {
                            arr_72 [i_8] [i_11] [i_17] [i_18] [i_19] = ((/* implicit */int) var_2);
                            var_33 *= ((/* implicit */unsigned char) (-(arr_59 [i_17 - 2] [i_18 + 2] [i_18 + 3])));
                            var_34 = ((/* implicit */unsigned int) arr_53 [i_11] [i_11] [i_17 - 3] [i_18]);
                            var_35 *= ((/* implicit */unsigned short) arr_6 [i_18 - 1]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_20 = 2; i_20 < 7; i_20 += 1) 
                {
                    var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((unsigned char) 6100871225108128412LL)))));
                    var_37 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
                    /* LoopSeq 2 */
                    for (signed char i_21 = 1; i_21 < 9; i_21 += 2) 
                    {
                        var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) arr_53 [i_8] [i_8] [i_8] [i_8]))));
                        arr_80 [i_21 + 1] [i_20 - 1] [i_17 - 3] [i_11] [i_8] = ((/* implicit */_Bool) (-(((/* implicit */int) var_7))));
                        arr_81 [i_8] [i_11] [i_17 - 1] [i_20 - 1] [i_21] = ((/* implicit */unsigned long long int) ((arr_17 [i_11] [i_17 - 2] [i_20 + 1] [i_8]) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)201))));
                    }
                    for (unsigned long long int i_22 = 2; i_22 < 9; i_22 += 3) 
                    {
                        var_39 = (-(((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (arr_2 [i_22 - 1]))));
                        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_58 [i_8] [i_11] [i_17 - 2] [i_20 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_83 [i_11] [i_8]))) : (var_1)));
                        var_41 = ((/* implicit */_Bool) (-(arr_76 [i_17 - 3] [i_20 - 1] [i_22] [i_22 - 1] [i_22])));
                        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                    }
                }
            }
        }
        var_43 -= ((((/* implicit */_Bool) arr_29 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_8] [i_8] [i_8] [i_8]))) : (var_2));
    }
    for (unsigned int i_23 = 0; i_23 < 10; i_23 += 4) /* same iter space */
    {
        arr_88 [i_23] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_15 [i_23] [i_23] [i_23])) ? (((/* implicit */int) arr_15 [i_23] [i_23] [i_23])) : (((/* implicit */int) var_10)))), (((/* implicit */int) max((arr_15 [i_23] [i_23] [i_23]), (arr_15 [i_23] [i_23] [i_23]))))));
        /* LoopSeq 2 */
        for (long long int i_24 = 0; i_24 < 10; i_24 += 3) /* same iter space */
        {
            var_44 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((656703245718756805ULL), (((/* implicit */unsigned long long int) 0LL))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_24])) ? (((/* implicit */int) arr_33 [i_24])) : (((/* implicit */int) var_10)))))));
            var_45 = ((/* implicit */unsigned short) min((var_45), (((unsigned short) (_Bool)0))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_25 = 4; i_25 < 9; i_25 += 3) 
            {
                var_46 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_86 [i_23])) ? (((/* implicit */int) arr_28 [i_23] [i_23] [i_24] [i_25 - 1])) : (arr_40 [i_24]))))));
                var_47 = ((/* implicit */unsigned int) max((var_47), (((((/* implicit */_Bool) (~(arr_71 [i_23] [i_23] [i_23] [i_23])))) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_57 [i_23] [i_23] [i_23] [i_23]))))))));
            }
        }
        for (long long int i_26 = 0; i_26 < 10; i_26 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_27 = 0; i_27 < 10; i_27 += 2) 
            {
                for (unsigned char i_28 = 1; i_28 < 8; i_28 += 3) 
                {
                    {
                        var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_62 [i_23] [i_23] [i_27]) : (arr_62 [i_23] [i_26] [i_27])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_62 [i_23] [i_27] [i_28 - 1])) || (((/* implicit */_Bool) arr_62 [i_23] [i_26] [i_27]))))) : (arr_62 [i_23] [i_27] [i_28 + 2])));
                        var_49 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_47 [i_26] [i_26] [i_27] [i_28 + 1])) ? (arr_92 [i_27] [i_27] [i_28 + 1] [i_28 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) & (arr_92 [i_28] [i_28] [i_28 - 1] [i_28 + 1])));
                        var_50 ^= (_Bool)1;
                    }
                } 
            } 
            var_51 = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) (unsigned short)62198))))), (arr_1 [i_23] [i_26])));
            /* LoopNest 3 */
            for (unsigned int i_29 = 0; i_29 < 10; i_29 += 4) 
            {
                for (int i_30 = 0; i_30 < 10; i_30 += 4) 
                {
                    for (unsigned long long int i_31 = 0; i_31 < 10; i_31 += 3) 
                    {
                        {
                            arr_110 [i_31] [i_31] [i_29] [i_31] [i_23] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) var_5))) / ((-((-(((/* implicit */int) var_6))))))));
                            var_52 = ((/* implicit */_Bool) max((var_52), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)31768))))) ? (arr_63 [i_26] [i_29] [i_30] [i_31]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3ULL)))))))))))));
                            var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_70 [i_23] [i_26] [i_29] [i_30] [i_31] [i_31]))))) : (((((/* implicit */_Bool) ((1097657892) - (((/* implicit */int) arr_106 [i_23] [i_26] [i_23] [i_31] [i_30] [i_31]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_98 [i_29] [i_30] [i_31]))) : (max((arr_39 [i_29]), (((/* implicit */unsigned int) arr_107 [i_29]))))))));
                            arr_111 [i_23] [i_26] [i_31] [i_30] [i_30] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_67 [i_23] [i_29] [i_30] [i_31])), (18446744073709551615ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52108))) : (2317262388U)))));
                        }
                    } 
                } 
            } 
        }
        var_54 = ((/* implicit */unsigned int) (+(2ULL)));
        arr_112 [i_23] = ((/* implicit */unsigned char) (~(arr_92 [i_23] [i_23] [i_23] [i_23])));
    }
    /* vectorizable */
    for (unsigned int i_32 = 0; i_32 < 10; i_32 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_33 = 0; i_33 < 10; i_33 += 2) 
        {
            var_55 = ((/* implicit */long long int) min((var_55), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_99 [i_32] [i_33] [i_33])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))))));
            arr_119 [i_33] [i_32] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_46 [i_33] [i_33])) == (((/* implicit */int) arr_46 [i_32] [i_33]))));
        }
        var_56 = ((/* implicit */int) var_3);
        arr_120 [i_32] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_91 [i_32] [i_32] [i_32]))) : (arr_39 [i_32])));
    }
    var_57 = ((/* implicit */unsigned char) max((var_57), (((/* implicit */unsigned char) (-((~(var_1))))))));
    var_58 = max((((/* implicit */unsigned int) var_5)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)52100)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_9)))) ? ((+(var_9))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)13411)) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (146)))))))));
}
