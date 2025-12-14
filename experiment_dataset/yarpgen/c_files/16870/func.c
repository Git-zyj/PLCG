/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16870
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
    var_20 -= ((/* implicit */int) ((var_4) >> (((((/* implicit */int) var_9)) - (46220)))));
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) - (((var_11) ^ (((/* implicit */long long int) var_16))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_16)))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 6; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 7; i_3 += 3) 
                    {
                        for (int i_4 = 1; i_4 < 8; i_4 += 3) 
                        {
                            {
                                var_22 = ((((/* implicit */_Bool) ((var_1) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned short)10638))))))))) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (arr_7 [i_0] [i_1 + 2] [i_2] [i_1 + 2] [i_4 + 1]));
                                var_23 *= ((/* implicit */unsigned long long int) (+(arr_4 [2LL])));
                                arr_14 [i_0] [i_0] [8] [i_4] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((arr_0 [i_3 - 2] [i_0]), (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2]))))) ? (((/* implicit */int) (short)-24126)) : (((/* implicit */int) ((unsigned char) var_11)))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] [i_0] [i_2] = min((((/* implicit */int) ((unsigned short) -418667928))), (-128037313));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3115399569U)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 10648957064640312682ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_5 [i_1] [i_1 + 1] [i_1 + 1])))) : (min((((/* implicit */unsigned long long int) ((unsigned short) 13421296270654528053ULL))), (min((((/* implicit */unsigned long long int) (unsigned short)51023)), (var_0)))))));
                    arr_16 [i_0] = max((((((/* implicit */_Bool) arr_10 [(unsigned char)1] [(unsigned char)1] [(unsigned char)1] [(unsigned char)1])) ? (((/* implicit */int) (unsigned short)14512)) : (((/* implicit */int) (short)-26422)))), (((arr_4 [i_0]) - (arr_2 [i_1 + 1]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        var_25 = ((/* implicit */long long int) ((int) arr_13 [9] [i_2] [i_2 + 4] [i_2 - 3] [i_2 - 2]));
                        var_26 += ((int) (unsigned short)51023);
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_7 = 2; i_7 < 16; i_7 += 3) 
        {
            var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_20 [i_6] [i_6])), (((((/* implicit */_Bool) max((1087133339), (((/* implicit */int) arr_21 [i_6] [i_6]))))) ? (3603993417934115895LL) : (((/* implicit */long long int) var_12))))));
            /* LoopSeq 3 */
            for (short i_8 = 0; i_8 < 18; i_8 += 3) 
            {
                arr_28 [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) (+(-1365456581)))) ? (((((/* implicit */unsigned long long int) var_18)) + (var_1))) : (((/* implicit */unsigned long long int) ((long long int) 1431295775))))) + (((/* implicit */unsigned long long int) (+(min((121238253), (162139256))))))));
                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)1777)) - (1463846110))))));
            }
            for (int i_9 = 2; i_9 < 17; i_9 += 4) 
            {
                arr_31 [i_6] [i_6] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)64228)), (var_18)));
                var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) 15701649457487807447ULL))));
            }
            /* vectorizable */
            for (short i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                arr_35 [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)57)) && (((/* implicit */_Bool) arr_25 [i_10])))))));
                /* LoopSeq 4 */
                for (int i_11 = 1; i_11 < 17; i_11 += 2) 
                {
                    var_30 = ((/* implicit */long long int) (-(arr_32 [i_7 + 1] [i_11 + 1] [i_11 - 1])));
                    var_31 = ((/* implicit */signed char) (-(-121238254)));
                }
                for (long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    /* LoopSeq 4 */
                    for (int i_13 = 4; i_13 < 15; i_13 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) arr_34 [(unsigned short)14] [i_13 - 1]))));
                        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_7 + 1] [i_13 - 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7 + 2] [i_13 + 3]))) : (5135837581918945259ULL))))));
                    }
                    for (int i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        arr_46 [i_6] [i_6] [i_6] [i_12] = ((int) (!(((/* implicit */_Bool) arr_25 [i_14]))));
                        var_34 = ((/* implicit */unsigned long long int) ((unsigned int) -1443560606));
                    }
                    for (long long int i_15 = 0; i_15 < 18; i_15 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned short) (~(((unsigned long long int) var_11))));
                        var_36 = ((/* implicit */unsigned short) arr_37 [4LL] [i_10] [4LL] [4LL]);
                    }
                    for (unsigned int i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        var_37 *= ((/* implicit */unsigned int) (~(((int) arr_38 [i_16] [(signed char)12]))));
                        var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_48 [i_7 + 2] [i_7 + 1] [i_7 - 2] [i_7 - 1] [i_7] [i_7 - 1]))));
                        var_39 = ((/* implicit */int) ((arr_41 [i_6] [6ULL] [6ULL] [6ULL] [6ULL] [6ULL]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [1LL] [i_7 - 1])))));
                    }
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15081092751819240670ULL)) ? (13421296270654528053ULL) : (15195852954943583216ULL)));
                    var_41 = ((/* implicit */short) 4617708411696640782ULL);
                    var_42 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)35))));
                    arr_52 [i_6] [i_7] = ((/* implicit */signed char) (-(arr_22 [i_7 + 2])));
                }
                for (int i_17 = 0; i_17 < 18; i_17 += 1) /* same iter space */
                {
                    var_43 = ((/* implicit */int) min((var_43), (((/* implicit */int) var_13))));
                    var_44 = ((/* implicit */int) arr_39 [17] [i_6] [i_10] [i_17]);
                    /* LoopSeq 1 */
                    for (int i_18 = 1; i_18 < 16; i_18 += 3) 
                    {
                        arr_60 [i_6] = ((/* implicit */signed char) arr_39 [i_7] [i_6] [17ULL] [i_18]);
                        var_45 -= ((/* implicit */unsigned long long int) (signed char)94);
                    }
                }
                for (int i_19 = 0; i_19 < 18; i_19 += 1) /* same iter space */
                {
                    var_46 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)31))));
                    var_47 = ((/* implicit */unsigned long long int) max((var_47), (((arr_62 [i_6] [i_7 + 1] [i_7 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)14512))))))));
                }
                var_48 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)51444)) ? (((/* implicit */int) arr_20 [i_7 + 2] [i_7 + 1])) : (((/* implicit */int) arr_20 [i_7 + 2] [i_7 - 2]))));
                /* LoopSeq 2 */
                for (int i_20 = 0; i_20 < 18; i_20 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_21 = 0; i_21 < 18; i_21 += 2) 
                    {
                        arr_68 [i_6] [i_6] [i_10] [i_6] [i_21] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_36 [i_7] [i_7] [i_7 + 2] [i_6] [13ULL]))));
                        arr_69 [i_6] [i_6] [i_6] [10] [i_6] [10] [i_6] = (-(((/* implicit */int) arr_55 [i_6] [i_6] [i_7] [i_7 - 1] [i_7] [i_7 - 1])));
                        var_49 = ((/* implicit */short) arr_67 [i_7 - 1] [i_7 - 1] [i_7 - 1]);
                    }
                    arr_70 [i_10] [i_6] [i_6] [(unsigned short)0] = ((/* implicit */unsigned long long int) (-(arr_48 [i_6] [i_6] [i_6] [i_6] [i_10] [i_20])));
                }
                for (int i_22 = 0; i_22 < 18; i_22 += 1) 
                {
                    var_50 = ((/* implicit */unsigned short) arr_54 [i_6]);
                    /* LoopSeq 3 */
                    for (int i_23 = 0; i_23 < 18; i_23 += 3) 
                    {
                        var_51 |= ((/* implicit */int) arr_21 [i_6] [i_6]);
                        var_52 = ((/* implicit */signed char) ((int) (unsigned char)4));
                        var_53 = ((/* implicit */int) max((var_53), (var_17)));
                    }
                    for (unsigned long long int i_24 = 1; i_24 < 15; i_24 += 3) /* same iter space */
                    {
                        var_54 = ((/* implicit */int) min((var_54), (((/* implicit */int) (+(arr_57 [i_7] [i_22]))))));
                        arr_79 [i_6] [i_7 - 2] [i_10] [i_6] [i_6] = ((/* implicit */unsigned short) ((arr_48 [i_6] [i_6] [i_7 + 1] [i_22] [i_24] [i_24]) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15500)))));
                        arr_80 [i_6] [i_6] [i_7] [i_10] [i_22] [i_6] = ((/* implicit */unsigned short) ((411005793) / (((/* implicit */int) (signed char)112))));
                        var_55 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (arr_51 [i_6] [i_24 - 1] [i_10] [(unsigned short)17] [i_24 + 1] [(unsigned short)17]) : (((((/* implicit */_Bool) arr_26 [i_10])) ? (716382868502659448LL) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [10LL])))))));
                        arr_81 [i_6] [i_6] [i_7 + 1] [i_10] [i_10] [i_22] [(signed char)5] = ((/* implicit */unsigned long long int) ((1925221047) + (arr_66 [i_6])));
                    }
                    for (unsigned long long int i_25 = 1; i_25 < 15; i_25 += 3) /* same iter space */
                    {
                        var_56 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-12))));
                        var_57 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_30 [i_7 + 2] [i_10] [10]))));
                    }
                    var_58 = ((/* implicit */int) ((unsigned char) 18446744073709551615ULL));
                }
            }
        }
        var_59 ^= ((/* implicit */unsigned long long int) min((8971053), (((/* implicit */int) arr_40 [i_6] [i_6]))));
    }
    /* vectorizable */
    for (unsigned long long int i_26 = 4; i_26 < 14; i_26 += 3) 
    {
        arr_88 [i_26] = ((/* implicit */unsigned long long int) var_10);
        var_60 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (2147483647)))));
        var_61 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_26] [i_26] [0ULL] [i_26] [i_26 + 2] [i_26 - 4])) ? (arr_51 [i_26] [i_26 - 3] [i_26 + 1] [i_26] [i_26 - 1] [i_26]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_26 - 2] [i_26] [i_26 - 2] [i_26 - 2] [i_26] [i_26]))))))));
        var_62 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-12))));
        /* LoopSeq 1 */
        for (short i_27 = 0; i_27 < 16; i_27 += 3) 
        {
            var_63 = ((/* implicit */short) max((var_63), (((/* implicit */short) 1087133339))));
            var_64 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_20 [i_26] [i_27])) : (var_10)))));
            var_65 = ((/* implicit */short) var_2);
        }
    }
    /* vectorizable */
    for (unsigned char i_28 = 0; i_28 < 11; i_28 += 1) 
    {
        var_66 = ((/* implicit */short) var_0);
        /* LoopNest 2 */
        for (signed char i_29 = 0; i_29 < 11; i_29 += 3) 
        {
            for (unsigned long long int i_30 = 2; i_30 < 10; i_30 += 3) 
            {
                {
                    arr_101 [i_28] [i_29] [5LL] = 1784613093;
                    arr_102 [i_28] [i_29] [i_29] = ((/* implicit */unsigned int) (-(arr_32 [i_30 - 2] [i_30 - 1] [i_30 - 1])));
                    var_67 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_93 [i_30])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) >= (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_31 = 2; i_31 < 9; i_31 += 3) 
        {
            for (short i_32 = 0; i_32 < 11; i_32 += 3) 
            {
                for (unsigned int i_33 = 0; i_33 < 11; i_33 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_34 = 0; i_34 < 11; i_34 += 3) 
                        {
                            var_68 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_105 [0U] [i_32] [0U] [0U])) || (((/* implicit */_Bool) 9223372036854775800LL)))) ? (var_16) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_4)))))));
                            var_69 = ((/* implicit */unsigned short) ((unsigned int) arr_47 [i_31 + 2] [i_31 + 2] [12] [i_31 + 2] [i_31 + 1]));
                        }
                        for (int i_35 = 0; i_35 < 11; i_35 += 3) 
                        {
                            arr_116 [i_28] [i_32] [i_32] = ((/* implicit */unsigned long long int) arr_83 [i_28] [i_31 + 2] [i_31 - 1]);
                            var_70 = ((/* implicit */short) (-(((/* implicit */int) arr_73 [i_32] [i_32] [i_32] [i_33] [i_32] [(unsigned short)10] [i_31 - 2]))));
                            arr_117 [i_28] [i_31] [i_32] [i_28] [i_32] = ((/* implicit */unsigned int) ((long long int) arr_99 [i_31] [i_31 + 2]));
                        }
                        var_71 *= ((((/* implicit */_Bool) arr_50 [i_28] [i_28] [i_31 + 1] [i_31 + 1])) ? (14395299467573378171ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_31] [i_31 - 2] [12LL] [i_31 - 1]))));
                        var_72 *= ((/* implicit */unsigned char) var_4);
                        /* LoopSeq 3 */
                        for (int i_36 = 0; i_36 < 11; i_36 += 4) 
                        {
                            var_73 = (~((~(((/* implicit */int) var_15)))));
                            var_74 = ((/* implicit */signed char) (+((+(-196832009)))));
                            var_75 = (+(((/* implicit */int) (short)-12868)));
                        }
                        for (unsigned short i_37 = 0; i_37 < 11; i_37 += 3) /* same iter space */
                        {
                            arr_123 [i_28] [i_31] [6] [i_32] [i_31] [i_37] = ((/* implicit */signed char) arr_106 [i_31 - 2] [i_31 - 1]);
                            var_76 = ((/* implicit */signed char) (short)31221);
                            arr_124 [i_32] [i_32] = ((((/* implicit */int) ((unsigned short) (short)-28921))) / (((/* implicit */int) ((var_16) > (((/* implicit */int) arr_91 [i_32]))))));
                        }
                        for (unsigned short i_38 = 0; i_38 < 11; i_38 += 3) /* same iter space */
                        {
                            arr_127 [i_28] [i_28] [i_32] [i_33] [i_32] = ((/* implicit */short) ((((/* implicit */_Bool) (short)6851)) ? (2404809585U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)94)))));
                            var_77 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) 152771748119319453LL)) ? (arr_122 [i_28] [i_28] [i_31 + 2] [i_32] [i_33] [i_33] [9]) : (((/* implicit */int) arr_72 [(unsigned short)11] [i_38] [i_32] [i_32])))) / (((/* implicit */int) ((unsigned short) var_17)))));
                            var_78 = ((/* implicit */unsigned short) min((var_78), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)1661)) ? (((/* implicit */int) arr_75 [i_28] [i_28] [i_28] [i_31 - 2] [i_28])) : (((/* implicit */int) (!(((/* implicit */_Bool) -2003968976))))))))));
                        }
                    }
                } 
            } 
        } 
    }
    var_79 += ((/* implicit */unsigned char) (unsigned short)13336);
}
