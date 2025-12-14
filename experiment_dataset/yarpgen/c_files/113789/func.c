/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113789
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max(((-(4U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_16)))))))) ? (((((/* implicit */_Bool) -1628599879)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (4188778187U))) : (var_3)));
                    var_21 = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) 1228576670U)), (13555421426799793251ULL)))));
                    var_22 = (~((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))));
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_12 [i_2] [i_0] [i_2] [9LL] [i_2] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */signed char) var_5)), (var_18))))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_2] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_0), (var_10)))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (_Bool)0))))) : (var_11)))));
                        arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (signed char)75)))), ((+(((/* implicit */int) var_15))))))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) var_1)))) : ((-(((/* implicit */int) var_13))))));
                        var_23 = ((/* implicit */int) min((var_23), (max((((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_14)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) var_8))))))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                    {
                        arr_17 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((var_5) ? (((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */long long int) var_0)) : (var_9))) : (((/* implicit */long long int) (+(((/* implicit */int) var_5)))))));
                        arr_18 [i_0] [i_0] [i_2] [i_0] = var_0;
                        arr_19 [i_0 - 2] [i_0] [i_1] [i_2] [10U] [i_4] |= ((/* implicit */int) min(((-(var_10))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? ((-(1905723240))) : (((/* implicit */int) var_16)))))));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) var_4)) : (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76))) : (max((((/* implicit */unsigned int) var_12)), (var_10)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 5933057473059572452ULL)))))) : ((+((-(4294967295U)))))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)0)) : (4095))))));
                        arr_22 [i_0] [(signed char)2] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_15))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 1; i_6 < 14; i_6 += 1) 
                    {
                        var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) var_14))));
                        /* LoopSeq 2 */
                        for (signed char i_7 = 3; i_7 < 14; i_7 += 1) /* same iter space */
                        {
                            arr_29 [i_7] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)62);
                            arr_30 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (!((_Bool)1)))) : ((-(((/* implicit */int) (signed char)-1))))));
                        }
                        for (signed char i_8 = 3; i_8 < 14; i_8 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)125)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                            var_27 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (signed char i_9 = 2; i_9 < 11; i_9 += 4) 
                {
                    for (unsigned char i_10 = 3; i_10 < 12; i_10 += 3) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_47 [i_0] [i_1] [i_9] [i_10 - 2] [i_10] [i_1] [i_11] = ((/* implicit */unsigned short) min((((/* implicit */int) (signed char)75)), ((~(((/* implicit */int) (signed char)-95))))));
                                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (6603087518507738278ULL)))) ? (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-76), (var_18))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)14)) ? (-4096) : (((/* implicit */int) (signed char)-2))))) ? ((-2147483647 - 1)) : (((/* implicit */int) max((((/* implicit */short) var_8)), (var_16))))))))))));
                            }
                        } 
                    } 
                } 
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_17))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) -1066997030)) : (6370511143030206881LL)))))))) : (((((/* implicit */_Bool) (short)18329)) ? (1747014103U) : ((-(var_3))))))))));
                /* LoopNest 2 */
                for (signed char i_12 = 0; i_12 < 15; i_12 += 1) 
                {
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        {
                            arr_52 [i_0] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) var_16)), (268434432U))), (((/* implicit */unsigned int) max((var_19), (var_6))))));
                            arr_53 [i_0] [i_1] [i_12] [(_Bool)1] &= ((/* implicit */unsigned short) min(((~(var_3))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-76)))))));
                            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) max(((+(((/* implicit */int) var_13)))), (((/* implicit */int) max((((/* implicit */short) var_1)), (var_16)))))))));
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) 268434407U))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_14 = 0; i_14 < 24; i_14 += 1) 
    {
        arr_58 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_10)) ? (4229624189U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27)))))));
        /* LoopSeq 1 */
        for (long long int i_15 = 0; i_15 < 24; i_15 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_16 = 1; i_16 < 22; i_16 += 3) 
            {
                var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((var_13) ? (4026532863U) : (((/* implicit */unsigned int) 1469845576)))))));
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 24; i_17 += 1) 
                {
                    for (int i_18 = 0; i_18 < 24; i_18 += 1) 
                    {
                        {
                            arr_69 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] = (-(((/* implicit */int) (short)0)));
                            arr_70 [i_15] = ((/* implicit */int) (+(var_11)));
                            var_33 = (signed char)41;
                            var_34 = (-((-(12782746553285936637ULL))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_19 = 0; i_19 < 24; i_19 += 2) /* same iter space */
                {
                    arr_75 [i_14] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
                    arr_76 [i_15] = ((/* implicit */short) (+(((/* implicit */int) (short)(-32767 - 1)))));
                }
                for (short i_20 = 0; i_20 < 24; i_20 += 2) /* same iter space */
                {
                    var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (~(((/* implicit */int) (_Bool)0)))))));
                    var_36 = ((/* implicit */long long int) (~(((/* implicit */int) var_5))));
                    arr_79 [i_14] [i_16] [i_15] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_18)))) ? (var_3) : (0U)));
                    arr_80 [i_14] [i_15] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4026532888U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))));
                    var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_0)))))));
                }
                /* LoopNest 2 */
                for (long long int i_21 = 0; i_21 < 24; i_21 += 4) 
                {
                    for (unsigned long long int i_22 = 3; i_22 < 22; i_22 += 1) 
                    {
                        {
                            arr_88 [i_15] [i_15] [i_16] [i_21] [i_22 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) (short)32767))));
                            var_38 = ((/* implicit */int) min((var_38), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)28726))))));
                            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned short)65440)) : (((/* implicit */int) var_19)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_23 = 0; i_23 < 24; i_23 += 3) 
                {
                    arr_92 [i_14] [i_14] [i_15] [i_14] = ((/* implicit */signed char) var_1);
                    arr_93 [i_15] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)95))));
                    var_40 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))));
                }
            }
            arr_94 [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) -2147483642)) ? (16383U) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)2590)))))));
            /* LoopSeq 2 */
            for (int i_24 = 0; i_24 < 24; i_24 += 2) 
            {
                arr_99 [i_14] [i_14] [i_15] = ((/* implicit */unsigned short) var_0);
                /* LoopSeq 1 */
                for (unsigned short i_25 = 1; i_25 < 21; i_25 += 1) 
                {
                    arr_103 [i_15] [i_15] [i_24] [i_25] [i_15] [i_24] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)11))));
                    arr_104 [i_25] [i_15] [i_15] [i_15] [5ULL] = (~(((/* implicit */int) var_17)));
                    var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))));
                    arr_105 [i_15] [i_25] = ((/* implicit */unsigned int) (signed char)123);
                    /* LoopSeq 3 */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        var_42 += ((/* implicit */short) (+(((/* implicit */int) (signed char)117))));
                        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1))));
                        var_44 = ((/* implicit */signed char) 268434407U);
                        var_45 = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
                        var_46 = ((/* implicit */int) 9223372036854775807LL);
                    }
                    for (long long int i_27 = 0; i_27 < 24; i_27 += 3) 
                    {
                        var_47 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_18)))))));
                        arr_110 [i_14] [i_15] [i_15] [i_25] [i_27] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
                    }
                    for (unsigned char i_28 = 2; i_28 < 22; i_28 += 2) 
                    {
                        arr_113 [i_15] [i_28 - 1] = ((/* implicit */signed char) (+((-9223372036854775807LL - 1LL))));
                        arr_114 [i_15] [i_15] = ((/* implicit */_Bool) (+(-2147483642)));
                    }
                }
                arr_115 [i_14] [i_15] [i_24] = ((/* implicit */long long int) (_Bool)1);
                arr_116 [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (_Bool)1))));
            }
            for (unsigned char i_29 = 0; i_29 < 24; i_29 += 3) 
            {
                var_48 = ((/* implicit */int) (signed char)102);
                var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)-2787)))))));
                var_50 += ((/* implicit */short) ((((/* implicit */_Bool) (short)-28)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) var_18))));
            }
            var_51 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
        }
    }
    for (long long int i_30 = 3; i_30 < 12; i_30 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_31 = 2; i_31 < 13; i_31 += 2) 
        {
            for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
            {
                {
                    arr_127 [i_30] [i_32] [i_30] = ((/* implicit */unsigned char) min(((-(var_4))), (((/* implicit */unsigned int) var_8))));
                    /* LoopNest 2 */
                    for (unsigned char i_33 = 2; i_33 < 13; i_33 += 2) 
                    {
                        for (_Bool i_34 = 1; i_34 < 1; i_34 += 1) 
                        {
                            {
                                var_52 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) max((((/* implicit */short) (_Bool)1)), (var_16)))), (max(((unsigned short)60948), (((/* implicit */unsigned short) max(((short)(-32767 - 1)), (var_16))))))));
                                var_53 = ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)124)))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_54 = ((/* implicit */_Bool) -1683510206);
        /* LoopNest 2 */
        for (short i_35 = 0; i_35 < 15; i_35 += 1) 
        {
            for (signed char i_36 = 0; i_36 < 15; i_36 += 1) 
            {
                {
                    arr_139 [i_30] = ((/* implicit */short) var_17);
                    /* LoopSeq 4 */
                    for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) /* same iter space */
                    {
                        var_55 = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-91))))), (((((/* implicit */_Bool) var_0)) ? (31U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_56 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) var_8)), (var_19))))))) ? ((-(var_11))) : (((/* implicit */unsigned long long int) min((max((31U), (((/* implicit */unsigned int) 2147483641)))), (((/* implicit */unsigned int) -1933160541)))))));
                    }
                    for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) /* same iter space */
                    {
                        arr_146 [(unsigned char)12] &= ((/* implicit */int) (((!((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (max((3588326508700177085LL), (((/* implicit */long long int) 1772293473))))));
                        var_57 = ((/* implicit */int) (_Bool)1);
                        var_58 = (~(min(((~(2147483638))), (((/* implicit */int) var_6)))));
                    }
                    for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) /* same iter space */
                    {
                        var_59 += ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16))))));
                        arr_149 [i_30] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (2147483627)))) ? ((-(var_9))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 2 */
                        for (short i_40 = 3; i_40 < 14; i_40 += 3) 
                        {
                            var_60 = ((/* implicit */signed char) (_Bool)1);
                            var_61 = ((/* implicit */unsigned short) max((var_61), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_16))))))))));
                        }
                        for (unsigned int i_41 = 0; i_41 < 15; i_41 += 1) 
                        {
                            var_62 = ((/* implicit */unsigned char) (-((~(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_16))))))));
                            var_63 = ((/* implicit */unsigned int) min((var_63), (var_3)));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_42 = 0; i_42 < 1; i_42 += 1) /* same iter space */
                    {
                        arr_158 [i_42] [(_Bool)1] [i_35] [i_30] [(_Bool)1] [i_30] &= -2147483642;
                        var_64 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)46105)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_6))));
                        var_65 = (-(((/* implicit */int) var_16)));
                        arr_159 [i_30] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
                    }
                    var_66 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (4294967283U)))));
                    var_67 ^= min((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-23773)))))))), (max((var_0), (((/* implicit */unsigned int) var_15)))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_43 = 0; i_43 < 15; i_43 += 3) 
        {
            var_68 -= ((/* implicit */_Bool) var_18);
            arr_162 [i_30] [i_30] [i_43] = ((/* implicit */short) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
            arr_163 [i_30] [i_43] [i_43] = ((/* implicit */unsigned short) min(((~(((/* implicit */int) var_12)))), (((/* implicit */int) min((((/* implicit */unsigned char) var_17)), ((unsigned char)129))))));
        }
    }
    var_69 = var_13;
}
