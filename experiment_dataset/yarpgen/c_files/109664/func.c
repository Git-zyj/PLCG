/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109664
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
    var_11 = ((/* implicit */unsigned char) ((signed char) var_10));
    var_12 = ((/* implicit */long long int) (signed char)105);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (~(18446744073709551615ULL)));
        var_13 = ((/* implicit */signed char) var_8);
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) min(((-(((((/* implicit */_Bool) (short)127)) ? (((/* implicit */int) (signed char)99)) : (((/* implicit */int) (signed char)-100)))))), (((/* implicit */int) ((signed char) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (short)-5979)))))))))));
            arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) max((arr_8 [i_1] [2LL] [i_2]), ((signed char)64)))) : ((~(((/* implicit */int) arr_5 [i_1]))))))) ? ((~(9223372036854775803LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)15570)) >> (((((/* implicit */int) (short)32766)) - (32740)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */long long int) 28U)) : (var_0))))))))));
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551593ULL)) || (((/* implicit */_Bool) arr_0 [18U] [i_2]))));
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        {
                            arr_19 [12] [i_2] [12] [(short)16] [i_5] |= ((/* implicit */short) min((((/* implicit */long long int) (~(((((arr_14 [i_5] [i_4] [9U] [i_3] [i_2] [i_1]) + (2147483647))) << (((((((/* implicit */int) (short)-15571)) + (15588))) - (17)))))))), ((-(9218868437227405312LL)))));
                            var_16 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) 8544920571456231350ULL)) && (((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1])))))) ? (((((/* implicit */_Bool) arr_8 [15LL] [i_2] [i_4])) ? (max((var_0), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((arr_4 [i_2]) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) var_4))))))) : (((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned char)26)))))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
            {
                arr_26 [i_7] [i_7] [i_7] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_1] [i_7]))));
                arr_27 [i_7] [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_9))) ? ((-(var_8))) : (((/* implicit */int) (!(((/* implicit */_Bool) 6725597887146515730LL)))))));
            }
            for (short i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    for (signed char i_10 = 1; i_10 < 13; i_10 += 1) 
                    {
                        {
                            var_17 ^= (-((~(arr_14 [i_1] [i_6] [i_8] [i_9] [i_6] [i_6]))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_24 [0] [i_6] [i_10])) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_12 [i_10 + 2])) : ((-(((/* implicit */int) var_5))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_3))) ? ((((_Bool)1) ? (var_0) : (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                var_20 = ((/* implicit */short) 10828456569835354070ULL);
                /* LoopSeq 4 */
                for (long long int i_11 = 3; i_11 < 16; i_11 += 2) 
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) -9223372036854775800LL)) ? (260327445828468594LL) : (((/* implicit */long long int) ((/* implicit */int) (short)29650)))));
                    var_22 |= ((/* implicit */signed char) var_5);
                    var_23 = ((/* implicit */unsigned int) ((long long int) (signed char)-1));
                }
                for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    var_24 = ((/* implicit */long long int) var_9);
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_34 [i_1] [i_1] [i_1] [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((((/* implicit */_Bool) -2457034330510542698LL)) ? (arr_11 [i_12] [i_8] [(short)3]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                    var_26 = ((/* implicit */signed char) (-(((((((/* implicit */int) arr_3 [i_1])) + (2147483647))) << (((((/* implicit */int) (short)32744)) - (32744)))))));
                }
                for (unsigned int i_13 = 2; i_13 < 15; i_13 += 2) 
                {
                    var_27 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_5)) ? (-9223372036854775789LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-15))))));
                    /* LoopSeq 1 */
                    for (long long int i_14 = 0; i_14 < 17; i_14 += 2) 
                    {
                        var_28 = ((/* implicit */signed char) ((int) arr_44 [i_1] [i_6] [i_13] [(short)1] [i_13 + 1] [i_13] [(signed char)4]));
                        var_29 = ((/* implicit */signed char) (((((~(((/* implicit */int) (signed char)17)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) (short)8188)) && (((/* implicit */_Bool) arr_20 [i_8] [i_13]))))) - (1)))));
                        var_30 = ((/* implicit */long long int) ((signed char) (signed char)34));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_15 = 0; i_15 < 17; i_15 += 2) 
                    {
                        var_31 = ((/* implicit */signed char) (-(2915984585496589920ULL)));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_4))) ? ((~(((/* implicit */int) arr_23 [i_1] [i_6] [i_8] [(short)11])))) : (((/* implicit */int) var_6))));
                        arr_48 [i_15] [i_13 + 2] [(signed char)2] [i_6] [i_1] = ((/* implicit */short) var_3);
                        var_33 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-29637))))));
                        var_34 = ((/* implicit */signed char) var_3);
                    }
                    arr_49 [(signed char)8] [i_6] [i_8] = ((/* implicit */int) arr_40 [i_13 + 1] [i_8] [i_6]);
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (short)16901)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)29636))) : (0U)));
                }
                for (long long int i_16 = 2; i_16 < 16; i_16 += 2) 
                {
                    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [14] [i_6] [i_6] [i_8] [i_16])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)15541))))) : (arr_18 [i_1] [i_8] [i_16 - 1] [i_16 + 1] [i_16 - 2])));
                    /* LoopSeq 2 */
                    for (short i_17 = 0; i_17 < 17; i_17 += 2) /* same iter space */
                    {
                        var_37 = ((/* implicit */long long int) (signed char)-100);
                        var_38 ^= ((/* implicit */int) ((signed char) (-(((/* implicit */int) (signed char)22)))));
                    }
                    for (short i_18 = 0; i_18 < 17; i_18 += 2) /* same iter space */
                    {
                        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_56 [i_16 - 2] [i_16 - 1] [i_16 - 1] [i_16 + 1] [i_16 - 1] [i_16 - 2])) : (((/* implicit */int) (_Bool)1))));
                        var_40 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4095ULL)) && (((/* implicit */_Bool) var_7)))))) : (((-1LL) - (9223372036854775780LL)))));
                    }
                }
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 17; i_19 += 4) 
                {
                    for (signed char i_20 = 0; i_20 < 17; i_20 += 1) 
                    {
                        {
                            var_41 = var_0;
                            var_42 &= ((/* implicit */int) ((short) arr_63 [i_1] [i_1] [i_1] [i_1] [i_1]));
                            var_43 = ((((/* implicit */_Bool) (signed char)21)) ? (((var_1) << (((1071644672) - (1071644642))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_52 [i_1]))))));
                            var_44 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                            var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_56 [i_1] [(signed char)7] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_0))) : (arr_58 [i_1] [i_6] [i_8] [i_19] [i_8])));
                        }
                    } 
                } 
            }
            /* LoopSeq 3 */
            for (signed char i_21 = 1; i_21 < 16; i_21 += 1) 
            {
                arr_68 [1LL] [i_6] [i_6] [3LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (arr_20 [i_1] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_8)))))));
                var_47 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_51 [i_6] [i_6] [12LL] [i_6] [i_6])) && (((/* implicit */_Bool) var_8)))))) != (((var_3) ? (arr_61 [(short)4] [i_21] [i_21 + 1] [i_6] [i_6] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115)))))));
                /* LoopSeq 3 */
                for (signed char i_22 = 2; i_22 < 15; i_22 += 1) 
                {
                    var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) (+(-160424136958013305LL))))));
                    var_49 = ((/* implicit */short) (!(((var_1) != (arr_43 [i_1] [i_1] [i_1] [i_1] [i_1])))));
                    var_50 ^= ((/* implicit */short) (!((_Bool)1)));
                    var_51 = ((/* implicit */short) ((((-2025184794) / (((/* implicit */int) var_4)))) != (((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) (short)27563)) : (((/* implicit */int) var_5))))));
                    var_52 |= ((/* implicit */_Bool) (~((-(arr_31 [i_1] [i_6] [i_21] [i_22 - 2])))));
                }
                for (signed char i_23 = 0; i_23 < 17; i_23 += 1) 
                {
                    var_53 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_50 [i_1] [i_1] [i_6] [i_23])))) && (((/* implicit */_Bool) var_1))));
                    var_54 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) + (2147483647))) << (((((18446744073709551593ULL) * (((/* implicit */unsigned long long int) 9223372036854775799LL)))) - (9223372036854776015ULL)))));
                }
                for (short i_24 = 2; i_24 < 14; i_24 += 4) 
                {
                    var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) ((((/* implicit */int) (short)32747)) * ((-(((/* implicit */int) (signed char)(-127 - 1))))))))));
                    var_56 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_8 [i_21] [i_21 - 1] [i_21 - 1]))));
                }
                var_57 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)28879))))) ? (473499789U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
            for (signed char i_25 = 0; i_25 < 17; i_25 += 4) 
            {
                var_58 &= ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)99)) | (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 971629757U)) : (4792791578189960913ULL))));
                /* LoopNest 2 */
                for (long long int i_26 = 3; i_26 < 16; i_26 += 1) 
                {
                    for (short i_27 = 1; i_27 < 15; i_27 += 2) 
                    {
                        {
                            var_59 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? ((~(((/* implicit */int) arr_60 [i_6] [i_25] [(short)15] [i_27 - 1])))) : (((/* implicit */int) arr_41 [i_6] [(signed char)16] [i_6] [i_6]))));
                            arr_82 [i_1] [i_27] [i_1] [(_Bool)1] [i_1] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))));
                        }
                    } 
                } 
                var_60 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 65535)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))) : (((int) var_10))));
            }
            for (long long int i_28 = 0; i_28 < 17; i_28 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_29 = 4; i_29 < 15; i_29 += 4) 
                {
                    for (unsigned long long int i_30 = 0; i_30 < 17; i_30 += 4) 
                    {
                        {
                            arr_93 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) -2025184806);
                            var_61 *= ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)100)) : (var_8))) != ((-(((/* implicit */int) (short)-30511))))));
                        }
                    } 
                } 
                var_62 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775800LL)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (signed char)106))))) != ((+(arr_21 [i_6]))));
                var_63 = ((/* implicit */int) min((var_63), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-32767))) / (arr_72 [i_1] [i_6] [i_28])))) && (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)109))))))))));
                var_64 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)255))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_84 [i_28] [i_6] [i_28]))) - (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 17317360780990136072ULL))))));
                var_65 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (8598159328640385354ULL)))));
            }
        }
        for (signed char i_31 = 1; i_31 < 15; i_31 += 1) 
        {
            var_66 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-93))));
            var_67 &= ((/* implicit */signed char) (((((-(((/* implicit */int) arr_46 [i_31 + 1] [i_31] [i_1] [i_1] [i_1])))) + (2147483647))) << (((((((long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-9)))) + (16LL))) - (7LL)))));
            var_68 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_50 [i_31 + 2] [i_31] [i_1] [i_1])))) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? ((~(((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_5))))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-90)) || (((/* implicit */_Bool) (signed char)-17)))))));
        }
        /* LoopNest 2 */
        for (signed char i_32 = 0; i_32 < 17; i_32 += 1) 
        {
            for (long long int i_33 = 0; i_33 < 17; i_33 += 2) 
            {
                {
                    var_69 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) max((((/* implicit */int) var_6)), (var_2)))))));
                    var_70 = ((/* implicit */signed char) max((var_70), (((/* implicit */signed char) min((((max((((/* implicit */unsigned long long int) var_3)), (var_7))) ^ (((/* implicit */unsigned long long int) 396537893U)))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) & (((((/* implicit */_Bool) 7575901779380352504LL)) ? (9848584745069166262ULL) : (((/* implicit */unsigned long long int) arr_94 [i_1] [i_33])))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_34 = 0; i_34 < 17; i_34 += 2) 
        {
            for (short i_35 = 3; i_35 < 16; i_35 += 2) 
            {
                {
                    arr_109 [i_35] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (var_2) : (((/* implicit */int) ((((/* implicit */_Bool) (short)22708)) || (((/* implicit */_Bool) (unsigned char)242)))))));
                    var_71 = ((/* implicit */unsigned char) max((var_71), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)49)))))));
                }
            } 
        } 
    }
    for (unsigned int i_36 = 0; i_36 < 20; i_36 += 1) 
    {
        var_72 = ((/* implicit */unsigned int) (signed char)-1);
        arr_112 [i_36] [i_36] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-14))));
        var_73 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12937))) : (var_0))), (((long long int) 1929074078U))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (var_4)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-32759))))) : (min((((/* implicit */long long int) 2147483648U)), (arr_111 [i_36] [i_36]))))))));
    }
}
