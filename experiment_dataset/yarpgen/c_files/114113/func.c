/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114113
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
    var_18 = ((/* implicit */unsigned short) var_10);
    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) var_1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))) : ((~(var_15)))))) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 4294967291U)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) (-((-(arr_3 [i_3])))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max((max((arr_3 [i_2]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_3] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (arr_7 [i_0] [i_1] [i_1] [(short)5] [(short)18])))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_6 [i_0])) && (((/* implicit */_Bool) 13194139533312LL)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) <= (var_10)))))))))));
                            arr_9 [i_3] [i_1] = arr_6 [i_2];
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 20; i_4 += 1) 
                            {
                                var_22 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)19284)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13))))) > (max((((/* implicit */unsigned int) var_14)), (arr_1 [i_1]))))) ? (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-13194139533313LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))));
                                arr_12 [i_0] [4LL] [i_4] [i_3] [(signed char)7] = ((/* implicit */long long int) max((max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_6 [i_4])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)18970)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) : (-13194139533300LL))))));
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [(short)14] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((-(arr_1 [i_0])))))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [(unsigned short)14] [(short)2] [i_1] [i_1])) ? (arr_7 [i_0] [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)1)) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)203))))))))));
                                var_23 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 2284378586U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111))) : (1528002961952504055ULL)))));
                            }
                            for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                            {
                                arr_16 [i_0] [i_5] = ((/* implicit */signed char) max((((/* implicit */long long int) var_11)), (min((var_6), (((/* implicit */long long int) arr_1 [i_2]))))));
                                arr_17 [i_0] [i_0] [i_5] [(unsigned char)16] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_5]))))) ^ (max((var_6), (((/* implicit */long long int) (unsigned short)53129)))))))));
                                var_24 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)0));
                                var_25 |= ((/* implicit */signed char) var_2);
                            }
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    var_26 = ((/* implicit */unsigned int) var_6);
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 18; i_7 += 3) 
                    {
                        for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) (unsigned short)65535)), (var_16)))))) ? (max((4419839617523361093LL), (((/* implicit */long long int) (unsigned short)57950)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 7371592893478913567LL))))))));
                                var_28 = ((/* implicit */signed char) arr_1 [i_0]);
                                var_29 = ((/* implicit */unsigned short) var_9);
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_1] [i_6])), ((-(var_0)))))) ? (((unsigned long long int) arr_19 [i_6] [i_1] [i_0])) : (((((/* implicit */_Bool) (-(arr_2 [(short)13] [i_1])))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_0]), (((/* implicit */unsigned short) (short)12329))))))))))));
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    arr_28 [i_0] [i_0] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_6 [i_0]))) ? (((/* implicit */int) arr_5 [i_9] [i_1])) : (((((/* implicit */_Bool) arr_4 [7ULL])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        arr_31 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_0] [10U] [i_0] [i_10])) ? (((/* implicit */int) arr_27 [i_0] [i_1] [i_9] [i_10])) : (((/* implicit */int) var_3))));
                        arr_32 [8LL] [i_9] [i_9] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)37098))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 926220550U)) : (var_0))) : (((/* implicit */unsigned long long int) var_6))));
                        /* LoopSeq 2 */
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((var_17) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))));
                            var_32 = ((/* implicit */signed char) var_5);
                            var_33 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                        }
                        for (long long int i_12 = 1; i_12 < 18; i_12 += 3) 
                        {
                            var_34 -= ((/* implicit */short) (!((_Bool)1)));
                            arr_37 [i_9] [i_9] = ((/* implicit */signed char) ((((((/* implicit */int) var_4)) < (((/* implicit */int) arr_25 [i_12] [i_10] [i_9] [i_1] [i_0])))) ? (((3938468804848607949LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0]))) > (var_6)))))));
                            arr_38 [i_9] [i_9] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_12 - 1] [i_9] [i_9] [i_0] [i_9]))));
                        }
                        var_35 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_17)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_10] [i_9] [i_0]))) : (((arr_15 [i_1] [i_10]) & (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned short)23468)))))))));
                    }
                    for (short i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        arr_43 [i_0] [i_1] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) != ((~(((/* implicit */int) var_9))))));
                        var_37 = var_12;
                        var_38 = ((/* implicit */short) ((((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_9] [i_13])) | (((/* implicit */int) var_4))));
                    }
                    for (long long int i_14 = 3; i_14 < 18; i_14 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (short)1268)) : (((/* implicit */int) var_4)))))))));
                        /* LoopSeq 3 */
                        for (signed char i_15 = 2; i_15 < 18; i_15 += 2) 
                        {
                            arr_51 [i_0] [15ULL] [i_9] [15LL] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_44 [i_15 + 1] [i_15] [i_14 - 1] [(unsigned short)6])) / (((/* implicit */int) (unsigned short)35821))));
                            var_40 = ((/* implicit */short) (+(((/* implicit */int) arr_8 [i_15 + 2] [i_14] [(_Bool)1] [i_9] [i_1] [i_0]))));
                            var_41 = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) var_17)))));
                            var_42 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)48))));
                        }
                        for (signed char i_16 = 0; i_16 < 20; i_16 += 3) 
                        {
                            var_43 = ((/* implicit */short) (~(((/* implicit */int) arr_29 [i_14 + 2] [i_14] [i_14] [i_14 - 2]))));
                            var_44 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_29 [i_14] [i_14 + 2] [i_14 - 1] [i_14 - 2]))));
                            var_45 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_48 [i_0] [i_14 + 2] [i_9] [(unsigned char)4] [i_16] [i_0])) && (((/* implicit */_Bool) (~(var_0))))));
                        }
                        for (unsigned int i_17 = 0; i_17 < 20; i_17 += 1) 
                        {
                            arr_57 [(unsigned short)18] [i_9] [i_9] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_9] [i_14 - 3] [i_9]))) * (((((/* implicit */_Bool) 13194139533313LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_17)))));
                            var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_14 - 1] [i_14 - 2] [i_14] [i_14 + 1] [i_14] [i_14 + 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
                            var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) (+(1971214959U))))));
                        }
                        arr_58 [i_0] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_14] [i_14] [i_14 - 2] [i_14 - 2] [17LL] [(_Bool)1])) ? (var_15) : (((/* implicit */long long int) 2784012527U))));
                    }
                }
                for (unsigned long long int i_18 = 1; i_18 < 19; i_18 += 3) 
                {
                    arr_63 [i_0] [i_1] [(short)5] [i_18] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) != (((/* implicit */int) (short)(-32767 - 1)))))), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [11LL] [i_1] [i_1] [(short)11]))) / (var_17)))))));
                    arr_64 [(short)7] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) 7371592893478913567LL)) || (((/* implicit */_Bool) ((var_15) << (((((((/* implicit */int) (signed char)-15)) + (20))) - (5)))))))))));
                }
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    var_48 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)19898)) ? (((/* implicit */int) (short)-6775)) : (((/* implicit */int) (short)22879))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) (~(var_16)))) ? (min((4707111214667456535LL), (((/* implicit */long long int) (short)-32749)))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                    arr_68 [i_0] [i_0] [i_0] = var_14;
                    arr_69 [i_1] = ((/* implicit */short) min((((((/* implicit */int) (unsigned short)21580)) < (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_19] [i_19])))), (((((/* implicit */int) arr_44 [i_0] [i_1] [i_19] [i_19])) != (((/* implicit */int) var_14))))));
                    /* LoopNest 2 */
                    for (long long int i_20 = 0; i_20 < 20; i_20 += 1) 
                    {
                        for (unsigned short i_21 = 0; i_21 < 20; i_21 += 3) 
                        {
                            {
                                var_49 = ((/* implicit */long long int) min((var_49), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (var_16)))), (min((((/* implicit */unsigned int) (unsigned short)1)), (var_17)))))) ? (((((/* implicit */_Bool) arr_33 [(short)17] [i_1] [i_19])) ? (min((((/* implicit */long long int) (signed char)23)), (2278461790766277649LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)28)))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64156)))))));
                                var_50 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)32738)) : (((/* implicit */int) (unsigned short)6)))))));
                                var_51 = var_16;
                                var_52 = ((/* implicit */long long int) min((((((((/* implicit */int) (short)12112)) >> (((7063253184763138607LL) - (7063253184763138588LL))))) != (((/* implicit */int) ((var_6) < (var_15)))))), (((((/* implicit */int) ((unsigned short) var_10))) <= (((/* implicit */int) ((((/* implicit */_Bool) 1162245269U)) && (((/* implicit */_Bool) var_13)))))))));
                            }
                        } 
                    } 
                    var_53 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_70 [i_0] [i_0] [(short)11] [i_19])) : (((/* implicit */int) arr_70 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) max((var_7), (arr_70 [i_0] [i_1] [i_1] [i_19])))) : (((/* implicit */int) min((arr_70 [i_0] [i_1] [i_19] [i_19]), (arr_70 [(unsigned short)11] [i_19] [(short)3] [9LL]))))));
                }
                var_54 += ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)13)), (-9151698219419525260LL)))) == (0ULL))))));
                var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_27 [(signed char)4] [i_1] [i_0] [i_0]))))) - (((((unsigned long long int) var_14)) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_1] [(short)10])) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (unsigned short)1))))))))))));
                var_56 = (-((~(var_15))));
            }
        } 
    } 
    var_57 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)65497), (var_8)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_6))) : (((/* implicit */long long int) max((var_17), (((/* implicit */unsigned int) (unsigned short)16178)))))))) ? (((/* implicit */int) (unsigned short)13)) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
}
