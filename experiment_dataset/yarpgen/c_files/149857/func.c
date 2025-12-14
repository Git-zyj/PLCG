/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149857
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
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_16))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_1] = var_17;
            /* LoopNest 3 */
            for (short i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                for (long long int i_3 = 2; i_3 < 14; i_3 += 1) 
                {
                    for (long long int i_4 = 1; i_4 < 14; i_4 += 1) 
                    {
                        {
                            arr_14 [i_4] [i_0] [i_3 + 2] [i_2 - 1] [i_0] [i_0] = ((/* implicit */long long int) ((int) arr_3 [i_0]));
                            arr_15 [i_0] [i_1 - 4] [i_1 - 4] [i_1 - 4] [i_4] [i_4] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) arr_13 [i_0]))))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((arr_11 [i_4] [i_4] [i_4] [i_4 + 1] [i_0] [i_2 + 3] [i_0]), (((/* implicit */signed char) arr_8 [i_4 + 2] [i_4] [i_4 + 2] [i_4] [i_4] [i_2])))))));
                        }
                    } 
                } 
            } 
        }
        var_19 -= ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (18175733270514671038ULL)))) ? (((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1497143077U))))) <= (((/* implicit */int) (!((_Bool)1))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))) % (min((((/* implicit */unsigned int) (_Bool)1)), (29480535U)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 1) 
                {
                    var_23 = ((max((2008374769U), (4265486766U))) >= (((/* implicit */unsigned int) (+(((/* implicit */int) ((2008374775U) < (((/* implicit */unsigned int) 1213001199)))))))));
                    var_24 += ((/* implicit */unsigned char) var_11);
                    arr_25 [i_7] = ((/* implicit */unsigned long long int) (-(min((var_14), (arr_24 [i_7 - 1] [i_7 + 1] [i_7 - 2])))));
                }
            }
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_8 = 3; i_8 < 21; i_8 += 1) 
    {
        var_25 = ((/* implicit */int) ((unsigned int) (+(((/* implicit */int) arr_26 [i_8])))));
        arr_28 [14U] [14U] |= ((/* implicit */int) ((((((/* implicit */_Bool) (~(2199023255551LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-12741)) + (((/* implicit */int) var_12))))) : (((long long int) 2008374769U)))) > (((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) - (min((((/* implicit */long long int) 1632720836U)), (-1LL)))))));
    }
    /* vectorizable */
    for (signed char i_9 = 2; i_9 < 9; i_9 += 2) 
    {
        arr_31 [(_Bool)1] [1LL] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (_Bool)1))) % (((/* implicit */int) (_Bool)1))));
        var_26 = ((/* implicit */unsigned long long int) (unsigned char)25);
        /* LoopSeq 1 */
        for (long long int i_10 = 1; i_10 < 6; i_10 += 3) 
        {
            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_2 [1])))) ? (4265486760U) : (4294967295U)));
            arr_35 [i_9] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)32751)) || (((/* implicit */_Bool) 1717285610)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_8 [i_9] [i_10] [i_9] [i_10] [i_9] [i_9 + 1])))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (131071U)))));
            arr_36 [i_9] [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13467218247058193010ULL)) ? (17U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112)))));
            arr_37 [i_10] [i_10] [(short)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4265486760U)) ? (29480535U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_10])))));
        }
        /* LoopNest 2 */
        for (signed char i_11 = 3; i_11 < 8; i_11 += 1) 
        {
            for (short i_12 = 2; i_12 < 9; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
                    {
                        for (unsigned long long int i_14 = 2; i_14 < 8; i_14 += 4) 
                        {
                            {
                                arr_48 [i_9] [i_14] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_12] [i_12] [i_12 - 1] [i_12] [i_12 - 2]))) / (((((/* implicit */long long int) 4265486760U)) ^ (var_14)))));
                                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((arr_38 [i_11 + 2] [i_11 + 2]) & (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                                var_29 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_26 [i_9])) ? (-1622610992952070001LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))));
                                var_30 = ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (_Bool)0))));
                                var_31 = ((/* implicit */long long int) ((unsigned long long int) arr_21 [i_12] [i_12 - 2] [i_12 - 2]));
                            }
                        } 
                    } 
                    arr_49 [i_11] = ((/* implicit */int) (~(((((/* implicit */long long int) -1213001190)) | (9223372036854775807LL)))));
                    /* LoopNest 2 */
                    for (long long int i_15 = 3; i_15 < 9; i_15 += 1) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */int) (-(0ULL)));
                                arr_55 [i_9] [i_11] = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) arr_13 [i_9])))));
                            }
                        } 
                    } 
                    var_33 -= (-(((/* implicit */int) (unsigned char)255)));
                    var_34 *= ((/* implicit */short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_17 = 1; i_17 < 9; i_17 += 1) 
        {
            for (int i_18 = 2; i_18 < 7; i_18 += 4) 
            {
                {
                    arr_61 [i_9] [i_17] [i_17] = ((/* implicit */unsigned long long int) -1213001200);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_19 = 1; i_19 < 9; i_19 += 4) 
                    {
                        var_35 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))) : (4265486754U)));
                        arr_64 [i_17] [i_17] [i_9] [(signed char)1] = (!(((/* implicit */_Bool) 1729467563)));
                        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) ((long long int) ((long long int) arr_26 [17ULL]))))));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_37 = (signed char)-107;
                        var_38 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_9] [i_17] [i_18])) ? (-1291820805334378562LL) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
                    }
                }
            } 
        } 
    }
    for (long long int i_21 = 0; i_21 < 17; i_21 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 17; i_22 += 4) 
        {
            for (long long int i_23 = 3; i_23 < 15; i_23 += 1) 
            {
                {
                    arr_75 [i_23] [i_22] [i_23] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)112)) : (max((var_0), (((/* implicit */int) var_16))))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (17U)))));
                    /* LoopNest 2 */
                    for (unsigned int i_24 = 0; i_24 < 17; i_24 += 1) 
                    {
                        for (long long int i_25 = 0; i_25 < 17; i_25 += 1) 
                        {
                            {
                                var_39 -= ((/* implicit */signed char) min((((/* implicit */int) ((_Bool) min((576460752303423487LL), (((/* implicit */long long int) 29480535U)))))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : ((+(((/* implicit */int) var_10))))))));
                                var_40 = ((/* implicit */int) ((min((arr_71 [i_23 - 3] [i_23 - 1] [i_23 - 1]), (((/* implicit */unsigned long long int) (signed char)127)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-3527437335557053875LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((_Bool) (_Bool)1))))))));
                                var_41 = ((/* implicit */int) ((long long int) ((_Bool) ((((/* implicit */int) arr_70 [i_22] [(short)16])) + (((/* implicit */int) var_12))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_26 = 2; i_26 < 14; i_26 += 1) 
                    {
                        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                        {
                            {
                                var_42 = max((((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_4)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)95)))))))), (max((min((var_8), (((/* implicit */unsigned long long int) 0U)))), (((/* implicit */unsigned long long int) arr_78 [i_21] [i_21] [i_22] [i_23] [i_23 - 2] [i_27])))));
                                var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) min((7302810144133460576LL), (((/* implicit */long long int) (unsigned char)251)))))));
                                var_44 -= ((/* implicit */long long int) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_86 [i_21] = ((_Bool) max((min(((unsigned char)112), (((/* implicit */unsigned char) var_10)))), (((/* implicit */unsigned char) (_Bool)1))));
        arr_87 [i_21] = ((/* implicit */unsigned long long int) min((max((((((/* implicit */_Bool) arr_74 [i_21] [i_21] [(signed char)8] [(_Bool)1])) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)(-127 - 1))))))), (((/* implicit */int) ((signed char) (-(17U)))))));
        var_45 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) var_6)) : (268435448U)))), (max((arr_74 [i_21] [i_21] [16LL] [i_21]), (((/* implicit */unsigned long long int) -8639424791006670429LL)))))) >= (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(var_2)))), ((~(((/* implicit */int) var_16)))))))));
    }
    for (long long int i_28 = 0; i_28 < 17; i_28 += 1) /* same iter space */
    {
        var_46 = ((/* implicit */signed char) (((-(var_13))) < (((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) (_Bool)1)))) > (var_15)))))));
        var_47 = ((/* implicit */unsigned int) min((((((_Bool) 1474130005U)) ? (((/* implicit */long long int) ((/* implicit */int) ((-5069947479910090503LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245))))))) : (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1)))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) var_6)) <= (arr_73 [i_28] [i_28] [i_28])))) | ((+(((/* implicit */int) (unsigned char)245)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_29 = 2; i_29 < 16; i_29 += 4) 
        {
            var_48 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_78 [i_28] [i_29 - 2] [i_28] [i_28] [i_28] [i_28])) ? (((/* implicit */int) arr_78 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28])) : (1048576)));
            arr_92 [i_28] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-7375))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((412673577) > (((/* implicit */int) var_5)))))) : (((unsigned int) (unsigned char)248))));
            /* LoopNest 2 */
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                for (long long int i_31 = 3; i_31 < 15; i_31 += 1) 
                {
                    {
                        var_49 = ((/* implicit */int) ((_Bool) 9223372036854775807LL));
                        var_50 -= ((/* implicit */signed char) ((((((/* implicit */int) (short)32765)) & (((/* implicit */int) arr_98 [i_29] [i_29] [i_30] [i_31] [i_28])))) % (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_32 = 2; i_32 < 15; i_32 += 2) 
            {
                for (long long int i_33 = 0; i_33 < 17; i_33 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (signed char i_34 = 0; i_34 < 17; i_34 += 1) 
                        {
                            var_51 ^= ((/* implicit */long long int) ((arr_27 [i_29 + 1] [i_32 - 2]) % (arr_27 [i_29 - 2] [i_32 - 2])));
                            arr_107 [i_28] [i_28] [i_32 - 1] [i_33] [i_34] [i_28] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_70 [i_32] [i_33]))))));
                            arr_108 [i_28] [i_28] [i_32 + 2] [i_33] [i_32 - 2] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (_Bool)1))))));
                        }
                        for (unsigned long long int i_35 = 0; i_35 < 17; i_35 += 3) 
                        {
                            var_52 = ((/* implicit */unsigned long long int) var_9);
                            var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(-145360969)))) && (var_4)));
                            arr_111 [i_28] [i_28] [i_28] [i_28] [i_28] = ((/* implicit */long long int) (-(-20)));
                        }
                        for (long long int i_36 = 4; i_36 < 15; i_36 += 3) 
                        {
                            arr_114 [10ULL] [i_28] [i_28] [i_28] [i_28] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 0U)) ? (var_15) : (var_6))) & (((/* implicit */int) ((unsigned short) (unsigned short)0)))));
                            var_54 = ((/* implicit */unsigned char) min((var_54), (((/* implicit */unsigned char) 4294967295U))));
                            arr_115 [(unsigned short)10] [i_29] [i_28] [i_29 + 1] [i_29 - 2] = (-(((((/* implicit */_Bool) arr_97 [i_29 - 1] [i_29 - 2] [i_32 + 1] [i_33])) ? (4294967285U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))));
                        }
                        for (int i_37 = 0; i_37 < 17; i_37 += 1) 
                        {
                            var_55 = ((/* implicit */int) (-(4294967258U)));
                            var_56 = ((/* implicit */long long int) min((var_56), ((-(arr_99 [i_29 - 1] [i_29 + 1] [i_29] [i_32 - 2])))));
                            var_57 = ((/* implicit */unsigned char) 8802158895030220655ULL);
                            var_58 = ((/* implicit */signed char) min((var_58), (((/* implicit */signed char) (((+(((/* implicit */int) var_5)))) > (((/* implicit */int) (_Bool)1)))))));
                        }
                        var_59 = ((/* implicit */int) max((var_59), (((/* implicit */int) var_12))));
                    }
                } 
            } 
        }
    }
    var_60 = ((/* implicit */int) min((var_60), (((/* implicit */int) min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (-19) : (19)))), (((((/* implicit */_Bool) 1U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-90))) : (4294967295U))))), (((/* implicit */unsigned int) var_5)))))));
}
