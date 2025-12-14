/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127198
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
    var_19 &= ((/* implicit */unsigned char) ((_Bool) (~(var_3))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (~((~(arr_0 [i_0])))));
        var_20 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(32767LL))))))));
        var_21 += (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) -32779LL))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-2147483647 - 1));
            var_22 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) max(((signed char)-11), ((signed char)10)))) >> (((/* implicit */int) ((-32787LL) < (arr_5 [i_1])))))))));
            var_23 *= ((/* implicit */unsigned char) (!(((max((((/* implicit */long long int) (-2147483647 - 1))), (arr_5 [i_1]))) < (arr_4 [i_1] [i_1 + 2])))));
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) 18446744073709551602ULL))));
            var_25 += ((/* implicit */int) (~((((!(((/* implicit */_Bool) (-2147483647 - 1))))) ? ((+(1008280911U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-11), ((signed char)-11)))))))));
        }
        for (int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            arr_10 [i_0] = ((/* implicit */_Bool) max((-1510993829), (((/* implicit */int) ((((/* implicit */long long int) arr_7 [i_0] [i_2])) <= (min((((/* implicit */long long int) -901212156)), (arr_4 [i_0] [i_2]))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_3 = 1; i_3 < 11; i_3 += 2) 
            {
                var_26 = ((/* implicit */unsigned int) -3239416429042215663LL);
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) 1510993828)) > (1911254884U)));
            }
            /* vectorizable */
            for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                var_28 = ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_4 + 1]);
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        {
                            var_29 = (~((+(arr_17 [i_0] [i_0] [i_0]))));
                            var_30 = ((/* implicit */short) ((arr_8 [i_0] [i_2] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)77)))));
                            var_31 |= ((/* implicit */_Bool) ((arr_11 [i_4] [i_4 - 1] [i_5] [i_4]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38)))));
                            var_32 = ((/* implicit */short) (+(((/* implicit */int) (signed char)11))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */short) 2147483620);
            }
            var_34 &= (+(((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)4))))) | (((/* implicit */int) ((2147483647) != (((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_2] [i_2]))))))));
            arr_23 [2LL] [10LL] &= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)206))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) (unsigned char)206))));
            arr_26 [i_0] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
            var_36 += ((/* implicit */long long int) ((unsigned long long int) -2147483647));
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 3; i_10 < 10; i_10 += 3) 
                        {
                            var_37 = ((/* implicit */_Bool) (+(arr_0 [i_10 + 2])));
                            var_38 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) (unsigned char)254)))))));
                            arr_36 [i_0] [i_0] [2U] [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-35)) / (1510993804)))));
                            arr_37 [i_0] [i_0] [(short)10] [i_0] [i_0] = ((/* implicit */long long int) ((((18446744073709551601ULL) / (((/* implicit */unsigned long long int) -2147483647)))) >> ((((-(((/* implicit */int) (_Bool)1)))) + (43)))));
                            arr_38 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))) << (((arr_17 [i_10 + 1] [i_10 - 3] [i_10 - 1]) - (10730267965380688301ULL)))));
                        }
                        arr_39 [i_0] [i_0] [i_7] [i_0] [i_9] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_0])))));
                        arr_40 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_9] = ((/* implicit */int) (~((+(18446744073709551615ULL)))));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 21; i_11 += 4) 
    {
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 21; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 2; i_13 < 17; i_13 += 2) 
            {
                {
                    arr_49 [i_11] [i_11] [i_12] [i_13] = ((/* implicit */long long int) (((-(arr_44 [i_12] [11LL]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_46 [i_11] [i_13])) < (arr_47 [i_11] [i_11] [i_11] [i_11])))))));
                    var_39 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -4)) <= (arr_48 [i_11] [i_11] [i_11] [i_13])));
                }
            } 
        } 
        var_40 = ((/* implicit */unsigned char) (-(arr_42 [i_11])));
    }
    var_41 = (_Bool)1;
    var_42 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
    /* LoopNest 3 */
    for (short i_14 = 2; i_14 < 9; i_14 += 3) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (long long int i_16 = 0; i_16 < 10; i_16 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_17 = 2; i_17 < 9; i_17 += 3) 
                    {
                        arr_59 [(_Bool)1] |= min((4294967295U), (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)114)) / (((/* implicit */int) (signed char)-16)))) == (((((/* implicit */int) (short)15)) & (2147483647)))))));
                        arr_60 [i_14] [i_14] [2U] [i_14] [i_14] [2U] = (-(max((arr_24 [6ULL] [i_14 + 1] [i_17 - 2]), (arr_24 [2ULL] [i_14 + 1] [i_17 - 1]))));
                        var_43 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) 4849477197722018088LL)) * (15ULL))), (max((((/* implicit */unsigned long long int) 2147483647)), (arr_29 [i_14] [i_14]))))))));
                    }
                    for (long long int i_18 = 0; i_18 < 10; i_18 += 3) 
                    {
                        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)31546), (((/* implicit */short) (_Bool)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))) : (1125816395U))))));
                        var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) (((((_Bool)0) || ((!(((/* implicit */_Bool) -2147483647)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)245)) || (((/* implicit */_Bool) 18446744073709551601ULL))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)245)) || ((_Bool)1)))))))))));
                        var_46 = ((/* implicit */int) (-(32757LL)));
                        arr_64 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */int) (~((-(15ULL)))));
                    }
                    var_47 *= ((/* implicit */unsigned char) 18446744073709551613ULL);
                    /* LoopSeq 4 */
                    for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 2) 
                    {
                        arr_68 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                        var_48 = ((/* implicit */unsigned long long int) arr_33 [i_14] [8LL] [i_14] [i_19]);
                        var_49 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))) / (4294967295U)));
                        /* LoopSeq 2 */
                        for (int i_20 = 2; i_20 < 7; i_20 += 4) /* same iter space */
                        {
                            var_50 = arr_56 [i_14 + 1] [i_14 - 2] [i_14 + 1];
                            var_51 = ((/* implicit */unsigned int) (short)(-32767 - 1));
                        }
                        for (int i_21 = 2; i_21 < 7; i_21 += 4) /* same iter space */
                        {
                            var_52 &= ((/* implicit */_Bool) (~(((int) (-9223372036854775807LL - 1LL)))));
                            var_53 *= ((/* implicit */signed char) (-((-(((/* implicit */int) arr_73 [i_14] [i_14] [i_14] [i_14]))))));
                            var_54 = ((/* implicit */_Bool) arr_22 [i_14] [i_14] [i_14 - 2] [i_14] [i_14]);
                        }
                    }
                    for (short i_22 = 0; i_22 < 10; i_22 += 2) 
                    {
                        arr_79 [i_14] [i_14] = ((/* implicit */_Bool) arr_52 [i_14] [i_14] [i_14]);
                        var_55 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(18446744073709551613ULL))))));
                        arr_80 [i_14] [i_14] [i_14] [i_14 - 1] &= ((/* implicit */unsigned short) ((4849477197722018088LL) & (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_0 [i_14 - 1])))) / (min((8640391562325519251LL), (((/* implicit */long long int) arr_22 [i_14] [i_14] [i_14 - 1] [i_14 - 2] [i_14 - 1]))))))));
                    }
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                    {
                        arr_84 [i_14] [i_14] = ((/* implicit */int) (-((((+(640379871U))) * (((((/* implicit */_Bool) (unsigned char)0)) ? (0U) : (arr_1 [i_14])))))));
                        var_56 = ((/* implicit */int) min(((signed char)-125), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)0)))))));
                        var_57 = ((/* implicit */long long int) (-(18446744073709551598ULL)));
                        var_58 *= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)2)) << ((((~(arr_82 [i_14] [i_14 + 1] [i_14] [i_14] [i_14 + 1]))) - (3504367241689806571LL)))));
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                    {
                        var_59 = ((/* implicit */_Bool) arr_67 [i_14]);
                        var_60 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((18446744073709551598ULL), (((/* implicit */unsigned long long int) arr_62 [i_15] [i_15] [i_15] [i_15] [i_15]))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))))))));
                        var_61 = ((/* implicit */int) max((var_61), (((/* implicit */int) (-(max((min((18446744073709551613ULL), (18446744073709551611ULL))), (((/* implicit */unsigned long long int) (-(4162334507U)))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_25 = 1; i_25 < 9; i_25 += 4) 
                        {
                            var_62 = ((/* implicit */int) ((636692328913945271ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14)))));
                            var_63 = ((/* implicit */_Bool) arr_3 [i_25]);
                            var_64 = ((/* implicit */long long int) (unsigned char)10);
                        }
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        var_65 = ((/* implicit */long long int) max((var_65), (((/* implicit */long long int) (((-(((/* implicit */int) (_Bool)1)))) * (-1))))));
                        var_66 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((2147483631) - (((/* implicit */int) arr_21 [i_14 + 1] [6] [i_14] [i_14] [i_14 - 2])))))));
                    }
                    for (int i_27 = 0; i_27 < 10; i_27 += 2) 
                    {
                        arr_96 [i_14 + 1] [i_15] [i_15] [i_14 + 1] [i_16] [i_15] = ((/* implicit */short) min(((+(arr_77 [i_14] [i_14] [i_14]))), (((/* implicit */long long int) (-2147483647 - 1)))));
                        arr_97 [i_14] [7U] [i_14 + 1] [i_14] = ((/* implicit */unsigned int) (unsigned char)246);
                    }
                    var_67 = ((/* implicit */long long int) (-((+(13920642097201999596ULL)))));
                }
            } 
        } 
    } 
}
