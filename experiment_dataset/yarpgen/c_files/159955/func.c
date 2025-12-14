/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159955
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
    var_20 = (+(max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (4294967292U)))), (max((var_16), (((/* implicit */unsigned long long int) var_0)))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) - (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)50853))))), (max((((/* implicit */unsigned long long int) var_4)), (var_16)))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((arr_3 [(signed char)18]) ? (((/* implicit */unsigned int) ((arr_0 [10U]) & (arr_0 [(short)12])))) : ((-(1031102550U))))))));
        var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)67)), ((-(((/* implicit */int) (unsigned short)50849))))))) ? (19U) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)50853)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(_Bool)1]))))))))));
        var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)67)), (arr_1 [i_0] [i_0])));
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) arr_2 [(unsigned char)6]))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_26 ^= ((/* implicit */signed char) max((((/* implicit */int) (short)28567)), ((~(((/* implicit */int) (unsigned short)14682))))));
                        arr_13 [i_0] [i_0] [i_1] [i_3] [i_2] = ((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_0]);
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((arr_11 [i_0 + 1] [i_1] [i_1] [i_0] [i_0] [i_1]), (((/* implicit */long long int) (signed char)96))))) * (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])) : (max((var_16), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1 - 1] [i_0] [i_0]))))))));
            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((6012665845663536468LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50838)))))), ((-(((/* implicit */int) arr_4 [i_0] [i_1]))))))))))));
        }
    }
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        {
                            arr_27 [i_4] [i_5] = ((/* implicit */unsigned int) ((min((arr_23 [i_4] [i_4]), (arr_23 [i_5] [i_7]))) ? (((/* implicit */int) max((var_3), ((unsigned short)50853)))) : (((/* implicit */int) arr_23 [i_6] [i_7]))));
                            arr_28 [i_6] |= ((/* implicit */short) arr_20 [i_4] [i_6] [i_6]);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_8 = 3; i_8 < 11; i_8 += 3) 
                {
                    arr_32 [i_4] = ((/* implicit */unsigned long long int) (unsigned char)45);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        for (signed char i_10 = 4; i_10 < 8; i_10 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned int) max(((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)171))) : (-1550509214304177744LL))), (((/* implicit */long long int) -442716369))));
                                var_30 += ((/* implicit */unsigned int) (unsigned short)3500);
                                arr_38 [i_10] [i_5] [i_8] [i_10] [i_10 - 3] [i_9] [i_5] |= ((/* implicit */unsigned int) min((((/* implicit */int) arr_4 [i_4] [i_4])), ((-(((/* implicit */int) var_18))))));
                                var_31 *= (~(((((/* implicit */_Bool) arr_12 [i_10] [i_8 - 3] [i_8] [i_10])) ? (((/* implicit */long long int) ((0U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25)))))) : (var_13))));
                                arr_39 [i_4] [i_5] [i_8] [i_5] [i_10] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_33 [i_8 - 3] [i_9] [i_10] [i_10] [i_10 - 2]), (((/* implicit */short) arr_21 [i_8 - 2] [i_8 - 2] [i_8] [i_8])))))) / (arr_1 [i_4] [i_5])));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 1; i_11 < 10; i_11 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_12 = 0; i_12 < 12; i_12 += 3) 
                        {
                            var_32 = ((long long int) ((((/* implicit */_Bool) 6012665845663536459LL)) ? (((/* implicit */int) arr_34 [i_4] [i_5] [i_8 + 1] [i_11 + 2])) : (((/* implicit */int) arr_34 [i_4] [i_8] [i_5] [i_4]))));
                            arr_45 [i_4] [i_5] [i_4] [i_11] [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((5443262022408825134LL) + (-6012665845663536448LL))))) / (((/* implicit */int) ((unsigned short) max(((signed char)17), (((/* implicit */signed char) var_4))))))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 12; i_13 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_15))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)59784))))) ? (((((/* implicit */_Bool) 3223915397302284810LL)) ? (2259279510U) : (1519355721U))) : (((((/* implicit */_Bool) 3688200143U)) ? (arr_47 [i_4] [i_4] [i_4] [i_11] [i_4] [i_13] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                            var_34 += ((/* implicit */unsigned char) arr_8 [i_4] [i_5] [i_8 - 2]);
                        }
                        var_35 = ((/* implicit */_Bool) arr_11 [i_4] [i_5] [i_8] [i_11] [i_4] [i_5]);
                        var_36 = max((((/* implicit */int) min((((/* implicit */unsigned short) var_18)), (max((var_2), (((/* implicit */unsigned short) arr_34 [i_4] [i_5] [i_5] [i_4]))))))), ((~(((/* implicit */int) (short)-28568)))));
                    }
                    /* vectorizable */
                    for (short i_14 = 1; i_14 < 10; i_14 += 3) 
                    {
                        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) -2657390554866222582LL)) ? (((/* implicit */unsigned long long int) 900558835)) : (18446744073709551612ULL)));
                        arr_51 [i_4] [i_4] [i_8 - 3] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */unsigned int) arr_31 [i_4] [i_4] [i_4] [i_8 - 1])) : (arr_9 [i_4] [i_5] [(_Bool)1])));
                    }
                    var_38 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_24 [i_4] [i_4] [i_8] [i_4]))))));
                    /* LoopSeq 2 */
                    for (signed char i_15 = 1; i_15 < 9; i_15 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_16 = 0; i_16 < 12; i_16 += 4) 
                        {
                            var_39 = ((/* implicit */_Bool) (short)23809);
                            var_40 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4]))) ^ (var_12)));
                            var_41 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_4] [i_4])) >= (((/* implicit */int) var_0))));
                        }
                        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) 3954398719U)))))))));
                        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_4] [i_5])))))), (arr_26 [i_4] [i_8 + 1] [i_4] [i_8] [i_4])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) ? (max((0ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) max((3688200142U), (((/* implicit */unsigned int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-23809)), (((var_18) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) var_18)))))))));
                        arr_57 [i_4] [i_8] [i_5] [i_4] = arr_26 [i_4] [i_5] [i_8] [i_15] [i_4];
                    }
                    /* vectorizable */
                    for (unsigned short i_17 = 2; i_17 < 10; i_17 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_18 = 0; i_18 < 12; i_18 += 3) 
                        {
                            var_44 = ((/* implicit */int) ((unsigned int) 35184369991680ULL));
                            arr_64 [i_4] [i_5] [i_8] [i_4] [i_18] [i_17] [i_8 + 1] = ((/* implicit */long long int) -1414025334);
                            arr_65 [i_17] |= ((/* implicit */short) (-((+(5695447435002327767LL)))));
                        }
                        for (short i_19 = 3; i_19 < 9; i_19 += 1) 
                        {
                            var_45 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)214))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4]))) : (arr_35 [i_4] [i_17]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_23 [i_4] [i_19])))))));
                            var_46 |= ((/* implicit */signed char) ((((/* implicit */int) var_15)) - (((((/* implicit */int) (unsigned short)7)) * (((/* implicit */int) (short)28810))))));
                            arr_69 [i_4] [i_4] [i_5] [i_8] [i_17] = ((/* implicit */unsigned long long int) ((arr_7 [i_4] [i_5] [i_8]) / (arr_7 [i_4] [i_4] [i_8 - 1])));
                        }
                        for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 3) 
                        {
                            arr_72 [i_17] [i_5] [i_8] [i_17 - 2] [i_20] &= ((/* implicit */int) ((_Bool) -2794467976381417986LL));
                            var_47 -= ((unsigned short) var_4);
                            var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)31))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_67 [i_17 + 1] [i_5] [i_4] [i_17 + 1] [i_17 + 1]))) : (6375332741428053114LL)));
                            arr_73 [i_4] [i_5] [i_8 - 2] [6LL] [i_20] = arr_20 [i_4] [i_4] [i_8 - 2];
                            arr_74 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_18)))))));
                        }
                        for (unsigned char i_21 = 0; i_21 < 12; i_21 += 3) 
                        {
                            var_49 += ((/* implicit */_Bool) 6275755530363315466ULL);
                            arr_77 [i_4] [i_5] [i_5] [i_17] = ((/* implicit */long long int) var_14);
                            var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_49 [i_4] [i_4] [i_8] [i_17 - 2] [i_21])) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) arr_12 [i_17] [i_5] [i_5] [i_17]))))));
                        }
                        var_51 = ((/* implicit */unsigned int) -1414025334);
                        /* LoopSeq 1 */
                        for (short i_22 = 0; i_22 < 12; i_22 += 3) 
                        {
                            var_52 = ((/* implicit */unsigned short) (_Bool)1);
                            var_53 = ((/* implicit */unsigned short) min((var_53), ((unsigned short)50857)));
                            var_54 -= ((/* implicit */_Bool) ((unsigned int) var_10));
                            var_55 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_17] [i_17 + 2] [i_8] [i_17 - 2] [i_17] [i_5] [i_17 - 2]))) : (((((/* implicit */_Bool) var_0)) ? (arr_58 [i_17 - 1] [i_22]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)49)))))));
                        }
                    }
                }
                for (short i_23 = 1; i_23 < 9; i_23 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_24 = 2; i_24 < 8; i_24 += 1) 
                    {
                        for (unsigned long long int i_25 = 0; i_25 < 12; i_25 += 1) 
                        {
                            {
                                var_56 = ((/* implicit */_Bool) arr_26 [i_4] [i_5] [i_25] [i_24] [i_4]);
                                arr_88 [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_60 [i_24 + 1] [3U] [i_23 + 2] [i_24] [i_25] [i_23])) ? (((/* implicit */long long int) arr_60 [i_24 + 1] [i_24 + 1] [i_23 - 1] [i_4] [i_25] [i_23 - 1])) : (min((((/* implicit */long long int) arr_81 [i_24 + 4] [i_5] [i_23 + 1] [i_24])), (-15LL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_26 = 0; i_26 < 12; i_26 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_27 = 0; i_27 < 12; i_27 += 3) 
                        {
                            var_57 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_37 [i_23] [i_5] [i_23] [i_5] [i_23] [i_27] [i_4]))) ? (((((/* implicit */_Bool) (signed char)127)) ? (arr_0 [i_4]) : (((/* implicit */int) var_18)))) : ((-(((/* implicit */int) var_6))))));
                            arr_95 [i_4] [i_5] [i_23] [i_23] [i_26] [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)28567)) : (((/* implicit */int) arr_89 [i_4] [i_5] [i_23 - 1] [i_26] [i_23 + 2] [i_4]))))) ? (((/* implicit */int) arr_37 [i_26] [i_5] [i_23] [i_26] [i_27] [i_26] [i_4])) : (((/* implicit */int) arr_75 [i_4] [i_4] [i_23] [i_26] [i_23 - 1]))));
                            var_58 |= ((/* implicit */_Bool) ((unsigned char) arr_4 [i_4] [i_5]));
                            arr_96 [i_4] [6U] [6U] [i_23] [i_26] [i_27] &= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)28581)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
                        }
                        var_59 = ((/* implicit */int) 16ULL);
                    }
                    var_60 ^= ((/* implicit */unsigned char) var_7);
                }
                for (short i_28 = 1; i_28 < 9; i_28 += 3) /* same iter space */
                {
                    var_61 = ((/* implicit */unsigned long long int) (~(arr_11 [i_4] [i_28 + 3] [i_28] [i_4] [i_4] [i_28])));
                    var_62 ^= ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) ((var_5) != (((/* implicit */unsigned long long int) arr_70 [i_4] [6ULL]))))), ((unsigned char)0)))) / ((+(((/* implicit */int) arr_89 [(_Bool)1] [(_Bool)1] [i_28] [i_28] [i_5] [i_28]))))));
                    var_63 = ((/* implicit */short) 1270841973U);
                    arr_100 [i_4] = ((/* implicit */_Bool) (-(max((((/* implicit */int) ((_Bool) var_2))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_5] [i_4])) : (((/* implicit */int) var_9))))))));
                }
            }
        } 
    } 
}
