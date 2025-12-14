/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117047
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [(unsigned char)5]))))) || (arr_0 [i_0 - 1])))) : (((((/* implicit */_Bool) var_0)) ? (((arr_0 [(short)1]) ? (((/* implicit */int) arr_1 [3U])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_3))))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 2]))))) & (((((/* implicit */_Bool) ((unsigned short) var_6))) ? ((~(((/* implicit */int) var_9)))) : (((arr_0 [i_0]) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) var_4))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0 + 1]);
    }
    /* LoopSeq 3 */
    for (unsigned int i_1 = 4; i_1 < 9; i_1 += 1) 
    {
        var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) max(((+(((/* implicit */int) var_4)))), (((int) (unsigned char)179))))), (((unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (405416792))))));
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_5 [i_1 - 3])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), (arr_5 [i_1 - 4])))) : (arr_6 [i_1 - 3])));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */_Bool) arr_9 [i_2]);
        arr_13 [i_2] = ((/* implicit */int) arr_9 [i_2]);
    }
    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        arr_18 [i_3] = arr_16 [i_3] [i_3];
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            for (short i_5 = 3; i_5 < 21; i_5 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
                    {
                        arr_25 [i_3] [i_4] [i_6] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */int) max((max((arr_16 [i_3] [i_4]), (((/* implicit */unsigned short) (short)-1)))), (((/* implicit */unsigned short) arr_20 [i_3] [i_3]))))), (((arr_21 [i_5 - 1] [i_5 - 2] [i_5 - 3]) ? (((/* implicit */int) arr_21 [i_5 - 1] [i_5 - 2] [i_5 - 1])) : (((/* implicit */int) arr_21 [i_5 - 1] [i_5 - 2] [i_5 + 1]))))));
                        var_16 = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */int) (unsigned short)65535)), (var_0))));
                        arr_26 [i_3] [i_3] [i_6] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_4] [i_6]))))) : (((/* implicit */int) arr_17 [i_6]))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                        {
                            var_17 = ((/* implicit */_Bool) arr_27 [i_3] [i_4] [(short)15] [i_6] [i_7]);
                            arr_29 [i_6] [i_7] [i_4] [i_6] [i_5 - 3] [i_4] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_20 [i_5 - 1] [i_5 - 1])) : (((/* implicit */int) arr_17 [i_5 - 1]))));
                        }
                        for (int i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                        {
                            var_18 -= ((/* implicit */_Bool) min((((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1)))) * (((/* implicit */int) min((var_13), (((/* implicit */short) (signed char)-1))))))), (((/* implicit */int) arr_10 [i_4]))));
                            arr_32 [i_3] [i_4] [i_5] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_6] [i_6])) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_17 [i_4]))))) & (((((/* implicit */_Bool) arr_23 [i_3] [i_6])) ? (((/* implicit */unsigned long long int) var_12)) : (arr_9 [i_6])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)0), (((/* implicit */short) var_4))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */int) arr_17 [i_3])) % (((/* implicit */int) var_3))))))) : (min((((/* implicit */unsigned long long int) arr_16 [i_5 - 3] [i_5 - 3])), (arr_11 [i_6]))));
                            arr_33 [i_3] [i_3] [i_6] = ((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) arr_27 [i_3] [i_4] [i_3] [i_6] [i_8])) : (var_6))), (((((/* implicit */_Bool) arr_27 [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_27 [i_3] [i_4] [i_5] [i_6] [i_8])) : (((/* implicit */int) arr_27 [i_8] [i_3] [i_5 + 1] [i_3] [i_3]))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((((/* implicit */int) arr_17 [i_5 - 2])) + (((/* implicit */int) var_10)))) : (((/* implicit */int) min((arr_17 [i_5 - 1]), (arr_17 [i_5 - 3]))))));
                            var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_27 [i_5 - 1] [i_5 - 2] [i_5 - 3] [i_5] [i_5])) ? (((/* implicit */int) (short)-4280)) : (((/* implicit */int) arr_27 [i_5 - 1] [i_5 - 2] [i_5 - 3] [i_5] [i_5 - 2])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_5 - 1] [i_5 - 2] [i_5 - 3] [i_5 + 1] [i_5 - 1])) || (((/* implicit */_Bool) arr_27 [i_5 - 1] [i_5 - 2] [i_5 - 3] [i_5 - 1] [i_5 - 1])))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned char) arr_34 [i_5 - 3] [i_5 - 1] [i_9] [i_9] [i_9]);
                            var_22 &= ((/* implicit */short) ((((/* implicit */int) (short)4279)) + (((/* implicit */int) (signed char)2))));
                            arr_37 [i_3] [i_3] [i_5] [i_6] [i_9] [i_6] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */unsigned long long int) -2394831253924979101LL)) : (arr_30 [i_6])));
                        }
                    }
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
                    {
                        arr_41 [(unsigned short)13] [i_5 - 1] [i_3] [i_10] = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_38 [i_10] [i_5 + 1] [i_10] [i_10])), (arr_27 [i_3] [i_5 - 3] [i_5 - 3] [i_4] [i_4])))) ? (((/* implicit */int) ((_Bool) arr_27 [i_3] [i_5 - 3] [i_5 + 1] [i_10] [(unsigned char)14]))) : (((/* implicit */int) min((arr_38 [i_3] [i_5 - 3] [i_10] [i_3]), (arr_38 [i_10] [i_5 - 1] [i_10] [i_10])))));
                        arr_42 [i_10] = min((((/* implicit */int) ((((/* implicit */_Bool) ((arr_21 [i_3] [i_4] [i_5]) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [i_3])))))) || (((/* implicit */_Bool) (-(arr_24 [i_3] [i_10]))))))), ((+(((/* implicit */int) ((((/* implicit */int) arr_16 [i_10] [i_5 - 3])) <= (((/* implicit */int) var_10))))))));
                    }
                    for (long long int i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        var_23 -= ((/* implicit */int) max((262143U), (((/* implicit */unsigned int) max((((((/* implicit */int) var_9)) + (((/* implicit */int) arr_44 [i_3] [i_4] [i_4] [i_5] [i_11])))), (((((/* implicit */int) var_2)) / (((/* implicit */int) (_Bool)1)))))))));
                        var_24 = ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_44 [11] [i_4] [i_4] [i_5] [i_11])))), (((((/* implicit */_Bool) arr_30 [i_3])) ? (((/* implicit */int) arr_34 [i_11] [i_5 + 1] [i_5] [i_4] [i_3])) : (((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) ((unsigned int) (short)2760))) ? (((/* implicit */int) ((unsigned char) var_7))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_31 [i_3] [i_3] [i_5 - 2]))) < (max((-2394831253924979099LL), (((/* implicit */long long int) (signed char)15))))))));
                        var_25 ^= ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_35 [i_5 - 3] [i_5 - 1] [i_3] [i_5 - 1] [i_5 - 3]), (arr_38 [i_5 - 1] [i_3] [i_3] [i_5 - 3]))))));
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_48 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_44 [i_3] [i_3] [i_5] [i_5] [i_4]);
                        arr_49 [i_3] [i_4] [i_5] [i_12] [i_12] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)5)))), (((/* implicit */int) ((unsigned char) var_12)))))), (arr_9 [i_3])));
                    }
                    for (short i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            arr_55 [i_14] [i_13] [i_5] [i_4] [i_4] [i_3] [i_14] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)127)) : (-1)))) ? (((arr_9 [i_14]) + (arr_43 [i_3] [i_3] [i_3] [i_3] [4U] [i_3]))) : (((/* implicit */unsigned long long int) ((long long int) 18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((int) arr_39 [i_5 - 1] [i_5 + 1])))));
                            arr_56 [i_3] [i_4] [i_5 + 1] [i_13] [i_14] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_53 [i_5 - 3] [i_5 - 1] [i_5 - 1] [i_14] [i_14])))) == (arr_53 [i_5 + 1] [i_5 - 2] [i_5 - 3] [i_13] [i_14])));
                        }
                        for (short i_15 = 2; i_15 < 20; i_15 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */int) arr_45 [i_5 - 1] [i_3]);
                            arr_59 [i_3] [i_15] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_11 [i_15])))) ? (((((/* implicit */_Bool) arr_11 [i_15])) ? (arr_11 [i_15]) : (arr_11 [i_15]))) : (min((arr_11 [i_15]), (arr_11 [i_15])))));
                            arr_60 [i_15] [i_4] [i_4] [i_15 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (((-(((/* implicit */int) arr_50 [i_3] [i_3] [i_5] [i_13] [i_15 - 2])))) & (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_11 [i_15])))))))) ^ (((((/* implicit */_Bool) ((short) var_2))) ? (((((/* implicit */_Bool) var_0)) ? (1204474569U) : (((/* implicit */unsigned int) arr_52 [i_15] [i_5] [i_4] [i_15])))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_5)), ((short)-4279)))))))));
                            var_27 = ((/* implicit */unsigned long long int) (-((-(((((/* implicit */_Bool) arr_11 [i_15])) ? (((/* implicit */int) arr_44 [i_3] [i_3] [i_3] [i_3] [(unsigned char)1])) : (var_7)))))));
                        }
                        for (short i_16 = 2; i_16 < 20; i_16 += 1) /* same iter space */
                        {
                            arr_64 [i_16] [i_16] = ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) arr_20 [i_4] [i_4]))))), (((int) -1)))));
                            var_28 = ((/* implicit */int) arr_53 [i_3] [i_4] [i_5 + 1] [i_13] [i_13]);
                            var_29 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_12)) : (-1LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) / (-1LL))) : (((/* implicit */long long int) ((int) arr_9 [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned long long int) var_5)), (arr_11 [i_3]))));
                            var_30 = ((/* implicit */_Bool) ((((arr_53 [i_5 + 1] [i_5] [i_5 - 2] [i_5 - 1] [i_5 + 1]) < (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) var_7)) : (arr_53 [i_5 - 2] [(_Bool)1] [i_5] [i_5 - 1] [i_5 + 1]))) : (((((/* implicit */_Bool) arr_53 [i_5] [i_5] [i_5] [i_5 - 1] [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_53 [i_5 + 1] [i_5] [(short)10] [i_5 - 1] [i_5 + 1])))));
                        }
                        /* LoopSeq 2 */
                        for (short i_17 = 0; i_17 < 22; i_17 += 4) /* same iter space */
                        {
                            var_31 *= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) || (((/* implicit */_Bool) (~(arr_52 [i_3] [i_5] [i_5 - 3] [i_3]))))));
                            var_32 *= ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_36 [i_3] [(signed char)18] [i_5]))))), (((((/* implicit */_Bool) arr_20 [i_5 - 1] [i_5 - 3])) ? (arr_63 [i_5 - 2]) : (arr_63 [i_5 - 2])))));
                            var_33 -= ((/* implicit */int) ((((((/* implicit */int) arr_57 [i_3] [i_4] [i_5] [i_13] [i_17] [i_3])) ^ (arr_52 [i_3] [i_5 - 1] [i_5 - 1] [i_3]))) == (max((var_12), (((/* implicit */int) arr_57 [i_4] [i_4] [i_5] [i_13] [i_17] [i_3]))))));
                            arr_68 [i_3] [i_4] [i_5 - 2] [i_13] [i_17] = ((/* implicit */signed char) ((short) ((((((/* implicit */int) arr_61 [i_13] [i_3] [i_13] [i_13] [i_13])) <= (((/* implicit */int) var_5)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (arr_46 [i_17] [i_3])))) : (((((/* implicit */_Bool) 1164582748)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_53 [i_3] [i_3] [(unsigned short)21] [i_3] [i_3]))))));
                        }
                        for (short i_18 = 0; i_18 < 22; i_18 += 4) /* same iter space */
                        {
                            var_34 ^= ((/* implicit */unsigned short) (((~(arr_47 [i_5] [i_5] [i_5 - 3]))) <= (((int) ((arr_63 [i_4]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_5 - 2] [i_3]))))))));
                            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_3] [21ULL] [i_5 - 2])) ? (((((/* implicit */_Bool) (-(arr_40 [i_3] [i_3] [i_3] [i_3] [i_3])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) arr_40 [i_5] [i_5 - 1] [i_5 - 3] [i_5 - 1] [i_5 - 2])) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) arr_16 [i_3] [i_4]))))));
                            var_36 = var_6;
                            var_37 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_18] [i_18])) ? (((/* implicit */int) arr_62 [i_3] [i_3] [i_4] [i_4] [i_5 + 1] [(unsigned char)18] [i_18])) : (((/* implicit */int) arr_62 [i_3] [i_4] [i_4] [i_4] [i_5] [i_13] [3]))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (4294967295U)))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) var_3)))), (arr_66 [i_5 + 1] [i_5 + 1] [i_5] [i_5] [i_5 - 3])))) : (((long long int) (-(((/* implicit */int) arr_16 [i_3] [i_3])))))));
                        }
                        arr_72 [i_5] = ((/* implicit */short) (~(((((/* implicit */_Bool) (~(-1)))) ? (((/* implicit */int) arr_10 [i_5 - 2])) : ((~(((/* implicit */int) var_11))))))));
                    }
                }
            } 
        } 
        arr_73 [i_3] = ((/* implicit */int) min((((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) arr_53 [i_3] [i_3] [i_3] [i_3] [i_3])))) || (((/* implicit */_Bool) (signed char)80))))), (arr_71 [(_Bool)1] [i_3] [(_Bool)1])));
        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7)))))));
        var_39 = ((/* implicit */int) arr_40 [i_3] [i_3] [i_3] [i_3] [i_3]);
    }
    var_40 = ((/* implicit */unsigned int) var_11);
}
