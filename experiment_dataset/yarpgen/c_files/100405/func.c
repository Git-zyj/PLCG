/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100405
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (signed char i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_2] [i_1] [9] = ((/* implicit */_Bool) arr_5 [i_4]);
                            var_11 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned short)16093))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)-1)))))) : (arr_3 [i_0] [i_0])));
                        }
                    } 
                } 
            } 
            var_12 -= ((/* implicit */unsigned long long int) arr_0 [i_0]);
            /* LoopSeq 3 */
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (arr_1 [i_0]) : (4189076213U)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [5LL] [i_0] [i_0] [1LL]))) : (0ULL))) : (((/* implicit */unsigned long long int) (+(arr_1 [i_0]))))))));
                var_14 -= ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [(signed char)2] [i_0]);
            }
            for (int i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                var_15 = ((/* implicit */unsigned int) arr_2 [i_1]);
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    arr_25 [i_7] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 524287U))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1653068282U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6] [i_1] [i_6] [i_7] [i_1]))) : (105891082U)))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_6])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_0] [0LL] [i_0])) == (((/* implicit */int) (short)26567))))))));
                    var_17 = ((/* implicit */short) var_9);
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 1; i_8 < 9; i_8 += 3) 
                    {
                        var_18 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (4294967295U))));
                        var_19 = ((/* implicit */unsigned short) (_Bool)1);
                        var_20 ^= var_5;
                    }
                    for (int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        arr_31 [i_9] = ((/* implicit */signed char) (((_Bool)0) ? ((-(16862890182062918807ULL))) : (((/* implicit */unsigned long long int) ((arr_22 [i_7] [i_7] [i_6] [i_1]) ? (((/* implicit */int) arr_22 [5U] [i_9] [i_6] [i_7])) : (((/* implicit */int) (signed char)0)))))));
                        var_21 ^= arr_30 [i_0] [i_0] [i_0] [i_0];
                        var_22 = ((/* implicit */short) var_7);
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) 18446744073709551615ULL))));
                    }
                }
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1477171514U)) ? (arr_17 [(unsigned short)10] [i_1] [i_6]) : (((/* implicit */long long int) ((((/* implicit */int) arr_24 [2ULL] [(signed char)11] [i_6] [i_10])) * (((/* implicit */int) (unsigned short)16093)))))));
                    arr_34 [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) arr_33 [i_0] [i_1] [i_6] [(_Bool)1]));
                }
                var_25 = ((/* implicit */_Bool) (~(423494446U)));
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 11; i_11 += 1) 
                {
                    for (signed char i_12 = 1; i_12 < 11; i_12 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) arr_3 [i_0] [i_1]);
                            var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_16 [4U] [i_1] [i_6])) : ((~(((/* implicit */int) arr_2 [(signed char)8]))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_13 = 2; i_13 < 8; i_13 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_28 = ((((/* implicit */_Bool) arr_30 [i_13 - 2] [i_13 - 1] [i_13 + 2] [i_13 + 1])) ? (((/* implicit */long long int) var_8)) : (5330807946554874000LL));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2975261708U)) ? (5330807946554874000LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)88)))))) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) arr_5 [(unsigned short)10]))));
                    }
                    for (unsigned long long int i_16 = 1; i_16 < 10; i_16 += 4) 
                    {
                        var_30 -= ((unsigned int) ((((/* implicit */int) arr_19 [i_0] [i_13])) < (((/* implicit */int) (unsigned char)116))));
                        var_31 = ((/* implicit */unsigned short) ((signed char) 0U));
                    }
                    arr_53 [9U] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_36 [i_0] [i_1] [i_13 + 3] [i_14] [i_13 + 4] [i_14]);
                    arr_54 [4ULL] [i_1] [i_1] [i_13] [(short)4] = ((/* implicit */int) ((arr_41 [i_0] [i_13 + 4] [i_13 + 4]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_13 - 2] [i_13] [i_14]))) : (2480133846U)));
                }
                for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 1) 
                {
                    var_32 = ((/* implicit */unsigned int) ((((300618469U) != (3987834149U))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_13] [i_13 + 2] [i_13] [i_13 - 1]))) : (576456354256912384LL)));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        arr_59 [i_17] = ((/* implicit */unsigned int) 4499201580859392ULL);
                        var_33 = ((/* implicit */unsigned int) ((signed char) 423494446U));
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (2419823575U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [11])) ? (((/* implicit */int) arr_11 [3U] [i_1] [i_1] [i_1] [6])) : (((/* implicit */int) (unsigned short)57217))))) : (arr_29 [i_13] [i_13 + 3] [i_18] [i_18] [2ULL] [i_18] [i_18])));
                        var_35 = ((/* implicit */unsigned int) 378130650);
                        var_36 = ((/* implicit */unsigned long long int) ((1978897528U) & (((arr_16 [i_0] [i_0] [i_0]) ? (4189076213U) : (var_10)))));
                    }
                    for (signed char i_19 = 0; i_19 < 12; i_19 += 4) 
                    {
                        var_37 ^= ((/* implicit */unsigned char) (unsigned short)24671);
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) -1650828552)) + (2878022160U)));
                        arr_62 [i_0] [i_0] = ((/* implicit */long long int) var_8);
                    }
                    for (short i_20 = 0; i_20 < 12; i_20 += 4) 
                    {
                        var_39 ^= ((/* implicit */short) arr_20 [i_0]);
                        arr_66 [i_0] [i_0] [i_0] [(signed char)7] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [(unsigned char)7] [i_1] [i_1]))))) < (((((/* implicit */_Bool) arr_32 [i_13] [i_13] [i_0] [2U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_0] [i_0] [11U] [i_0]))) : (var_10)))));
                        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_55 [i_0] [i_0] [(signed char)1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1] [0U] [i_17] [i_20])))))) ? (1027351605U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_61 [i_0] [i_1] [0] [i_0] [i_20])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [1LL] [i_17] [(_Bool)1])) : (((/* implicit */int) arr_19 [i_0] [2LL])))))));
                    }
                }
                var_41 = (short)-11231;
                var_42 = ((/* implicit */short) (-(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_0)))))));
            }
        }
        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0] [1U] [i_0] [i_0])) && (((/* implicit */_Bool) (+(2975261708U))))));
        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) 6033223054549793138LL)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [(signed char)11] [i_0])) : (((/* implicit */int) arr_58 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
    }
    for (signed char i_21 = 1; i_21 < 24; i_21 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_22 = 1; i_22 < 24; i_22 += 4) 
        {
            for (unsigned int i_23 = 0; i_23 < 25; i_23 += 2) 
            {
                for (unsigned long long int i_24 = 0; i_24 < 25; i_24 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_25 = 2; i_25 < 23; i_25 += 2) 
                        {
                            var_45 = ((/* implicit */short) (-(1936386569U)));
                            var_46 -= ((/* implicit */_Bool) arr_75 [i_21] [i_22] [i_21] [i_21] [i_21]);
                            var_47 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 11999325421257419768ULL))));
                            arr_78 [(short)23] [i_24] [i_23] [i_21] [i_21] [(short)23] = ((/* implicit */long long int) var_4);
                            var_48 -= ((/* implicit */signed char) arr_70 [i_21] [i_22] [i_25]);
                        }
                        for (unsigned long long int i_26 = 4; i_26 < 24; i_26 += 4) 
                        {
                            var_49 = ((/* implicit */signed char) ((unsigned int) ((67384026U) < (1477171514U))));
                            var_50 -= ((/* implicit */short) (+((+(min((((/* implicit */unsigned int) (short)13391)), (300618483U)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_27 = 0; i_27 < 25; i_27 += 1) 
                        {
                            var_51 = ((/* implicit */short) var_7);
                            var_52 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_77 [i_21] [i_22 - 1] [i_23] [20U] [i_27])) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) arr_68 [i_21]))))));
                            var_53 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_82 [i_21] [i_22 + 1] [20LL] [i_21 - 1] [i_21 - 1])) & (((/* implicit */int) arr_82 [i_27] [i_22 - 1] [i_23] [i_21 + 1] [i_27]))));
                            var_54 = ((/* implicit */int) max((var_54), (((/* implicit */int) 4189076213U))));
                        }
                        var_55 = ((/* implicit */int) var_7);
                        var_56 = ((/* implicit */int) (signed char)-125);
                    }
                } 
            } 
        } 
        arr_86 [i_21 + 1] [11U] = ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)60344))))) : (((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5192))))))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_70 [(signed char)9] [2LL] [2LL])))))))));
        var_57 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((long long int) arr_71 [i_21 + 1] [i_21 + 1] [i_21 - 1] [i_21 - 1])) + (((/* implicit */long long int) max((1477171514U), (((/* implicit */unsigned int) var_1)))))))) >= (max((((/* implicit */unsigned long long int) ((var_6) >= (arr_70 [i_21 + 1] [i_21 + 1] [i_21])))), (max((arr_72 [i_21] [i_21] [i_21] [i_21 + 1]), (((/* implicit */unsigned long long int) arr_81 [i_21] [i_21] [i_21 - 1] [i_21] [i_21]))))))));
        arr_87 [i_21] = ((/* implicit */unsigned short) (+(arr_77 [24ULL] [(signed char)11] [i_21] [i_21] [(signed char)11])));
    }
    for (short i_28 = 0; i_28 < 22; i_28 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_29 = 0; i_29 < 22; i_29 += 4) 
        {
            for (unsigned short i_30 = 1; i_30 < 18; i_30 += 3) 
            {
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    {
                        var_58 = ((/* implicit */short) ((unsigned long long int) max((min((3035819650U), (((/* implicit */unsigned int) arr_82 [(signed char)5] [(signed char)5] [(signed char)5] [i_30 + 3] [i_31])))), (((/* implicit */unsigned int) ((unsigned short) 2726563417U))))));
                        var_59 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3707865374855115180LL))))), ((-(arr_71 [(_Bool)1] [i_29] [i_30 + 3] [i_31]))));
                        var_60 = ((/* implicit */_Bool) min((var_60), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_79 [i_28] [i_29] [i_30 + 1] [i_31]), (arr_74 [i_28] [i_28] [i_31])))) ? (var_0) : (max((arr_70 [i_29] [i_29] [i_29]), (((/* implicit */unsigned int) var_5))))))) ? (var_8) : (((/* implicit */int) (!(((/* implicit */_Bool) 11999325421257419768ULL))))))))));
                    }
                } 
            } 
        } 
        var_61 = ((/* implicit */unsigned int) min((var_61), (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_91 [i_28])), (4229031106U)))) ? (418091256U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1472508487)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
        var_62 = ((/* implicit */long long int) max((var_62), (((/* implicit */long long int) (-(((/* implicit */int) arr_73 [i_28] [i_28] [i_28])))))));
        var_63 = ((/* implicit */unsigned short) max((((max((((/* implicit */long long int) 378130650)), (arr_69 [0U] [i_28]))) << (((max((var_6), (((/* implicit */unsigned int) arr_73 [i_28] [i_28] [4LL])))) - (4294967150U))))), (((/* implicit */long long int) arr_94 [i_28]))));
    }
    var_64 = ((/* implicit */_Bool) max((var_64), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 378130645)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) (short)12155)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned int) var_9)) : (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (2440828430U))))))));
    var_65 = ((/* implicit */signed char) var_2);
}
