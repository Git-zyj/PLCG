/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115638
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
    var_17 = ((/* implicit */short) min((((/* implicit */long long int) (-(((((/* implicit */int) (unsigned short)7)) >> (((((/* implicit */int) var_16)) - (49578)))))))), (((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)1)) >= (((/* implicit */int) (unsigned short)65530)))))) : (((var_10) ? (3071067093970129855LL) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */short) (~(((arr_9 [i_0] [i_1] [i_2] [(_Bool)1]) % (var_14)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 2; i_4 < 13; i_4 += 1) 
                        {
                            var_19 ^= ((/* implicit */short) var_8);
                            var_20 = 1254901640094093962ULL;
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_4 + 1])) ? (var_14) : (((/* implicit */long long int) 1688904747))));
                        }
                        for (short i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            var_22 |= ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) arr_8 [i_2] [i_3] [13LL])) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)7)))))));
                            var_24 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [(unsigned short)6] [i_3] [i_1]);
                            var_25 = ((/* implicit */long long int) arr_1 [i_0] [(unsigned short)8]);
                        }
                        for (long long int i_6 = 4; i_6 < 13; i_6 += 3) 
                        {
                            var_26 &= ((/* implicit */unsigned short) var_13);
                            arr_18 [i_6] [i_1] [i_1] [i_1] = ((/* implicit */short) ((-1648421269) - (((/* implicit */int) (unsigned short)1920))));
                        }
                        arr_19 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 17ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)11364))))) * (arr_9 [i_0 + 2] [i_3] [i_3] [9])));
                        var_27 = ((/* implicit */unsigned short) arr_9 [i_0 - 1] [i_0 + 3] [i_0 + 3] [i_0 + 3]);
                    }
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        arr_23 [i_0] [(unsigned short)8] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                        arr_24 [i_1] [(short)9] [i_2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */int) arr_20 [i_7])) : (((/* implicit */int) var_12)))), (max((((/* implicit */int) var_1)), (arr_11 [i_1] [i_2])))))) ? (((unsigned long long int) (unsigned short)32767)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((/* implicit */int) min((arr_14 [9LL] [i_7] [i_2] [(short)8] [9ULL]), (((/* implicit */short) arr_6 [i_7] [i_1] [5] [i_7]))))) : (((((/* implicit */int) (unsigned short)43145)) & (((/* implicit */int) (_Bool)0)))))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        var_28 ^= ((/* implicit */signed char) (+(((/* implicit */int) (short)-19))));
                        var_29 ^= ((/* implicit */unsigned long long int) ((int) var_12));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? ((((+(((/* implicit */int) arr_0 [(short)0] [i_8])))) / (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) var_1))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 2; i_9 < 14; i_9 += 4) 
                    {
                        for (long long int i_10 = 2; i_10 < 14; i_10 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned char) ((unsigned short) (_Bool)1));
                                var_32 = ((/* implicit */int) min((var_32), ((-(((/* implicit */int) (!((_Bool)1))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_11 = 0; i_11 < 15; i_11 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_12 = 1; i_12 < 13; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 15; i_13 += 4) 
                        {
                            {
                                var_33 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [i_12 + 2] [i_11] [i_12] [i_13] [i_0 - 1] [i_0]))) & ((-(arr_16 [i_0] [i_11] [(_Bool)1] [i_11] [i_12] [i_12] [i_13])))));
                                var_34 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68))) % (1254901640094093962ULL)));
                                var_35 = ((/* implicit */_Bool) max((var_35), (var_9)));
                            }
                        } 
                    } 
                    var_36 *= ((/* implicit */short) arr_22 [i_0] [(_Bool)1] [i_1] [i_1] [(_Bool)1] [i_11]);
                    arr_38 [i_1] &= ((/* implicit */unsigned long long int) ((long long int) arr_31 [i_1]));
                }
                /* vectorizable */
                for (signed char i_14 = 0; i_14 < 15; i_14 += 2) /* same iter space */
                {
                    var_37 *= ((/* implicit */_Bool) -1221754821);
                    arr_43 [i_0] [i_1] [7LL] [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_1]);
                }
                arr_44 [i_1] [i_1] [i_1] = ((/* implicit */short) var_14);
                /* LoopSeq 3 */
                for (unsigned long long int i_15 = 3; i_15 < 14; i_15 += 3) 
                {
                    var_38 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)58788))));
                    var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) arr_37 [i_15] [i_1] [i_15]))));
                    arr_47 [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((unsigned short) max((((int) var_4)), (((/* implicit */int) var_4)))));
                    /* LoopNest 2 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [(short)10] [i_16])) ? (((/* implicit */long long int) max((((((/* implicit */int) arr_42 [i_0] [(unsigned short)2])) | (((/* implicit */int) (unsigned short)50125)))), (((/* implicit */int) arr_25 [i_15]))))) : (var_7)));
                                arr_54 [i_16] [i_15] = ((/* implicit */unsigned int) min((((unsigned short) var_7)), (((/* implicit */unsigned short) var_13))));
                                arr_55 [i_15] = ((/* implicit */unsigned long long int) min((((/* implicit */int) min(((_Bool)1), ((!(var_12)))))), (((((/* implicit */_Bool) 1648421269)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)2157)), ((unsigned short)61047)))) : (((((/* implicit */_Bool) arr_31 [i_15])) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) arr_50 [i_15] [i_1] [i_15] [i_16] [i_16] [i_17]))))))));
                                arr_56 [i_0] [i_15] [i_15] [i_16] [6LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)9727))))) ? (min((((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)127)), (arr_20 [i_16])))), (arr_29 [i_0] [i_1] [i_15] [i_16] [i_17]))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)44)), (arr_45 [i_1] [i_15] [i_15] [i_17])))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_22 [i_17] [i_17] [i_16] [i_15] [0] [i_0])), (arr_12 [i_0] [i_1] [i_15] [2ULL] [i_15])))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0] [7U] [i_0] [i_0]))) : (arr_53 [8LL] [i_1] [i_15] [i_15] [i_17])))))));
                            }
                        } 
                    } 
                }
                for (signed char i_18 = 1; i_18 < 14; i_18 += 2) 
                {
                    var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_16)) == (((/* implicit */int) arr_14 [i_0] [(unsigned short)11] [i_18] [i_0] [i_1])))) ? ((+(375611809662024386LL))) : (((/* implicit */long long int) (+(((/* implicit */int) var_1)))))))) == (((((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_1]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_0] [i_0] [i_1] [i_18]))) : (5435899381726339822ULL))) : (((/* implicit */unsigned long long int) ((arr_3 [i_1]) + (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_0] [i_0] [i_1] [(short)10])))))))))))));
                    var_42 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [(short)4] [12ULL] [i_0]))));
                }
                /* vectorizable */
                for (long long int i_19 = 0; i_19 < 15; i_19 += 4) 
                {
                    var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) arr_8 [i_0] [i_0 + 3] [i_0 - 1])))))));
                    var_44 = ((/* implicit */long long int) ((var_2) ? (arr_52 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_1]) : (arr_52 [i_0 + 2] [i_0 + 2] [i_0 + 3] [i_1])));
                    /* LoopNest 2 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 15; i_21 += 4) 
                        {
                            {
                                var_45 *= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_64 [i_21] [i_20] [i_0])) >= (((/* implicit */int) var_12)))))));
                                arr_67 [i_20] [i_21] = ((/* implicit */unsigned short) var_5);
                                arr_68 [(unsigned short)3] [i_20] [i_19] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))) >= (((((/* implicit */_Bool) (unsigned short)29766)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1]))) : (11421429629685659290ULL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_22 = 0; i_22 < 15; i_22 += 4) /* same iter space */
                    {
                        var_46 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_2)))))) == ((~(var_14)))));
                        arr_71 [(unsigned char)1] [(unsigned short)7] [i_1] [i_19] [i_22] |= ((/* implicit */long long int) ((((/* implicit */int) (short)-11364)) >= (((/* implicit */int) (unsigned short)65528))));
                        var_47 ^= ((/* implicit */short) ((_Bool) (short)11364));
                    }
                    for (short i_23 = 0; i_23 < 15; i_23 += 4) /* same iter space */
                    {
                        var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))));
                        var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) -517190899))));
                    }
                }
            }
        } 
    } 
}
