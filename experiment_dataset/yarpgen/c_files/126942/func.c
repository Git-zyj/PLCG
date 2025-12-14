/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126942
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_16 *= ((/* implicit */signed char) arr_2 [i_2] [0ULL] [i_2]);
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (457240838) : (1659328567)));
                    var_18 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)14)) < (((/* implicit */int) var_6)))))));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (+(var_2))))));
                }
                for (int i_4 = 2; i_4 < 23; i_4 += 4) /* same iter space */
                {
                    arr_12 [i_1] [i_4] [i_2] [i_4] [i_2] &= ((/* implicit */unsigned int) arr_8 [i_4 - 2] [i_4] [i_4 + 1] [i_4 + 2]);
                    arr_13 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)247)) | (((/* implicit */int) (signed char)0))))) ? (782193177U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)92)) >> (((arr_10 [i_0] [i_2] [i_2] [i_4]) + (116284032599551621LL))))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_4 - 2] [i_0] [i_0])) && (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2]))));
                    arr_14 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */int) (unsigned char)239);
                }
                for (int i_5 = 2; i_5 < 23; i_5 += 4) /* same iter space */
                {
                    var_21 = (-(var_3));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1587300523U)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_5 + 2])) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_2])) >= (((/* implicit */int) arr_2 [i_0] [i_0] [i_2])))))));
                    var_23 = ((/* implicit */unsigned char) (signed char)-22);
                }
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    for (unsigned short i_7 = 3; i_7 < 24; i_7 += 4) 
                    {
                        {
                            var_24 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : ((+(((/* implicit */int) var_14))))));
                            var_26 = ((/* implicit */signed char) var_6);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    arr_28 [i_0] [i_0] [i_8] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
                    var_27 = ((/* implicit */short) arr_17 [i_0] [i_9] [i_8]);
                }
                for (short i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((arr_30 [i_10] [i_1]) >= (((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0] [i_10] [i_0])))))));
                    arr_33 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [2])) ? (((/* implicit */int) var_9)) : (var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (((((/* implicit */_Bool) var_8)) ? (arr_5 [i_1] [i_0] [i_0] [i_0]) : (var_15)))));
                    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */int) (short)25575)) / (((/* implicit */int) (unsigned char)168)))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        arr_37 [i_0] [i_0] [i_8] [i_0] [i_10] [i_0] = ((/* implicit */unsigned char) (+(arr_30 [i_0] [i_0])));
                        var_30 = ((/* implicit */short) ((int) (signed char)0));
                    }
                    for (short i_12 = 0; i_12 < 25; i_12 += 4) /* same iter space */
                    {
                        var_31 ^= ((/* implicit */short) (((~(((/* implicit */int) arr_2 [i_0] [i_10] [i_0])))) / ((+(725039264)))));
                        var_32 *= ((/* implicit */unsigned int) arr_6 [i_10] [i_12]);
                        var_33 = ((/* implicit */int) (!(((_Bool) arr_3 [i_0] [i_1] [i_12]))));
                    }
                    for (short i_13 = 0; i_13 < 25; i_13 += 4) /* same iter space */
                    {
                        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_13] [i_1] [i_13])) ? (((/* implicit */int) arr_34 [i_0] [i_1] [i_13] [i_10] [i_13])) : (((/* implicit */int) arr_34 [i_0] [i_0] [i_10] [i_0] [i_0])))))));
                        arr_43 [i_0] [i_1] [i_0] [i_10] [i_13] [i_0] [i_10] = ((/* implicit */long long int) arr_4 [i_0] [i_8] [i_10]);
                        arr_44 [i_0] [i_0] [i_1] [i_13] [i_13] [i_0] &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29982)))))));
                    }
                    for (int i_14 = 0; i_14 < 25; i_14 += 4) 
                    {
                        var_35 |= ((/* implicit */unsigned short) arr_18 [i_0] [i_1] [12LL] [i_10] [i_14]);
                        var_36 = ((/* implicit */unsigned char) ((((-619247594) == (((/* implicit */int) arr_39 [i_14] [(_Bool)1] [i_0])))) ? (((/* implicit */int) (short)0)) : (1292862473)));
                        var_37 = ((/* implicit */short) (-(arr_22 [i_0] [i_1] [i_8] [i_10])));
                    }
                }
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 25; i_15 += 3) 
                {
                    for (int i_16 = 0; i_16 < 25; i_16 += 3) 
                    {
                        {
                            var_38 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_16] [i_15] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)225)) == (((/* implicit */int) arr_8 [i_0] [18] [i_15] [i_16]))))) : (((/* implicit */int) var_5))));
                            var_39 *= ((/* implicit */unsigned long long int) ((int) arr_40 [i_0] [i_0] [i_0] [(unsigned short)20]));
                        }
                    } 
                } 
                var_40 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)30655)) || (((/* implicit */_Bool) arr_23 [8U] [i_1] [i_1] [i_0] [i_0]))));
                arr_54 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((~(arr_26 [i_0] [i_0] [i_1] [i_1] [i_8]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_14))))));
                var_41 = ((/* implicit */signed char) arr_41 [i_8] [i_8] [i_1] [i_0] [i_0] [i_0] [i_0]);
            }
            var_42 = ((/* implicit */unsigned char) max((arr_45 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1]), (((/* implicit */signed char) ((((/* implicit */int) arr_34 [i_0] [i_1] [i_0] [i_1] [i_1])) > ((-(((/* implicit */int) arr_38 [i_0] [i_0] [i_1] [i_0] [i_1])))))))));
            arr_55 [i_0] [i_1] [i_1] = ((unsigned char) (-(((/* implicit */int) var_9))));
        }
        /* LoopNest 2 */
        for (short i_17 = 0; i_17 < 25; i_17 += 4) 
        {
            for (short i_18 = 0; i_18 < 25; i_18 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_19 = 1; i_19 < 24; i_19 += 3) 
                    {
                        for (unsigned char i_20 = 0; i_20 < 25; i_20 += 4) 
                        {
                            {
                                var_43 = ((/* implicit */short) ((_Bool) (unsigned char)255));
                                var_44 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((unsigned long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_20] [i_0]))))) ? (max((((long long int) arr_15 [i_20] [i_20] [i_0] [i_0] [i_20] [i_0])), (((/* implicit */long long int) arr_25 [i_18] [i_18])))) : (((((/* implicit */_Bool) ((unsigned char) arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-127)) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_17] [i_17])) - (11900)))))) : (942515860031693600LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_21 = 0; i_21 < 25; i_21 += 4) 
                    {
                        for (int i_22 = 0; i_22 < 25; i_22 += 4) 
                        {
                            {
                                var_45 = ((/* implicit */unsigned short) var_0);
                                arr_72 [i_22] [i_0] [i_18] [i_18] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) ((unsigned char) arr_46 [i_22] [i_0] [i_18] [i_17] [i_0]))))));
                                arr_73 [i_0] [i_0] [i_18] [i_21] [i_22] = ((/* implicit */short) max(((+(((/* implicit */int) arr_67 [i_0] [i_0] [i_21] [i_22])))), (((/* implicit */int) var_9))));
                                arr_74 [i_0] = ((/* implicit */unsigned char) arr_24 [i_17] [i_18] [(signed char)11] [(signed char)11]);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_23 = 0; i_23 < 25; i_23 += 1) 
                    {
                        var_46 = ((/* implicit */int) (-(((min((var_0), (((/* implicit */unsigned long long int) -1538322057)))) >> (((var_8) + (1688172088)))))));
                        var_47 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)5726)) ? (arr_60 [i_0] [i_23] [i_0] [i_17]) : (arr_60 [i_0] [i_17] [i_0] [i_23]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_0] [i_17] [i_17] [i_23])) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) var_7)))))))));
                        var_48 = (+(((/* implicit */int) ((((/* implicit */int) max((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) var_1))))) > (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (arr_75 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_7 [i_23] [i_23] [i_18]))))))));
                        var_49 &= ((/* implicit */short) (+(((/* implicit */int) (unsigned char)2))));
                        /* LoopSeq 1 */
                        for (unsigned char i_24 = 0; i_24 < 25; i_24 += 4) 
                        {
                            var_50 = ((/* implicit */signed char) max((18059725918905792711ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((short)-8651), ((short)25575)))))))));
                            arr_81 [i_0] [i_17] [i_18] [i_0] [i_24] = ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_21 [i_0] [i_0] [i_18] [i_23] [i_24]), (((/* implicit */short) arr_20 [i_0] [i_17] [i_18] [i_18] [i_23] [i_24]))))), (((((/* implicit */_Bool) ((short) (unsigned char)252))) ? (arr_50 [i_0] [i_17] [i_17] [i_0] [i_23] [i_0]) : (((((/* implicit */_Bool) (unsigned char)12)) ? (arr_50 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (var_8)))))));
                            arr_82 [i_0] [i_17] [i_18] [i_0] = ((/* implicit */long long int) (~(-1936878401)));
                        }
                    }
                    for (long long int i_25 = 2; i_25 < 21; i_25 += 3) 
                    {
                        var_51 = ((((/* implicit */_Bool) var_9)) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)235)), (var_11)))))))));
                        var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_3)))) ? ((~(((long long int) var_6)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_0] [(short)0] [i_25 - 1] [i_25])) ? (arr_31 [i_0] [i_0] [i_25 - 2] [i_25]) : (((/* implicit */unsigned int) arr_22 [i_0] [2LL] [i_25 + 2] [i_25])))))));
                        var_53 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((unsigned long long int) var_11)))) ? (((/* implicit */unsigned int) (((-(2147483647))) + (((/* implicit */int) ((short) 8)))))) : (arr_56 [i_0] [i_0] [i_17])));
                    }
                }
            } 
        } 
        var_54 = ((/* implicit */int) min((((/* implicit */unsigned int) (short)-6364)), (max((((arr_24 [i_0] [i_0] [i_0] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)241)))))))));
    }
    /* vectorizable */
    for (int i_26 = 0; i_26 < 25; i_26 += 1) /* same iter space */
    {
        var_55 = ((/* implicit */unsigned char) (+((((_Bool)0) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9)))))));
        var_56 ^= ((/* implicit */short) ((unsigned int) arr_59 [(short)6]));
        /* LoopNest 3 */
        for (short i_27 = 4; i_27 < 23; i_27 += 3) 
        {
            for (unsigned short i_28 = 0; i_28 < 25; i_28 += 1) 
            {
                for (unsigned char i_29 = 0; i_29 < 25; i_29 += 1) 
                {
                    {
                        var_57 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1936878401)) ? ((-(15044570284948770794ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30720))))))));
                        arr_99 [i_26] [i_27 - 4] [i_27] [i_27] [i_27] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_26] [i_27] [i_29] [i_29]))) : (arr_89 [i_29]))))));
                    }
                } 
            } 
        } 
        var_58 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)160)) ? (((((/* implicit */_Bool) arr_60 [i_26] [i_26] [(signed char)8] [i_26])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (8136783843025450262LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2815)))));
    }
    /* LoopNest 3 */
    for (unsigned int i_30 = 0; i_30 < 20; i_30 += 1) 
    {
        for (short i_31 = 0; i_31 < 20; i_31 += 4) 
        {
            for (unsigned long long int i_32 = 0; i_32 < 20; i_32 += 1) 
            {
                {
                    var_59 = var_2;
                    var_60 = ((/* implicit */short) min((var_60), (((/* implicit */short) var_14))));
                    var_61 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_90 [i_30] [i_31] [i_32])) | (((/* implicit */int) arr_90 [i_30] [i_30] [i_30]))))) > (var_13)));
                }
            } 
        } 
    } 
}
