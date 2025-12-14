/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125885
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
    var_17 = ((/* implicit */_Bool) var_5);
    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (((unsigned long long int) (_Bool)1))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    arr_8 [16LL] [i_0] [i_2] = ((/* implicit */short) (((_Bool)1) && (((/* implicit */_Bool) max(((-(((/* implicit */int) var_1)))), (((/* implicit */int) arr_3 [i_0] [i_1])))))));
                    arr_9 [(unsigned char)13] [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))))))), (var_1)));
                }
                for (short i_3 = 1; i_3 < 14; i_3 += 4) 
                {
                    arr_13 [(_Bool)0] [i_0] [(signed char)3] = ((/* implicit */unsigned char) arr_0 [i_0 + 2] [i_3]);
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 1; i_5 < 16; i_5 += 2) 
                        {
                            {
                                arr_18 [(short)12] [(_Bool)1] [i_0] [5U] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(5247725958880714904ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (arr_15 [i_4] [i_1] [i_3 + 2] [i_0]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1855251829)), (arr_4 [i_4])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0 + 4] [i_0 + 4] [i_3 + 4] [i_5 + 2] [i_5 + 2])) && (var_7))))));
                                var_19 = ((/* implicit */unsigned char) (((((_Bool)1) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))) < (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((-2797917755520173008LL) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))) && (((/* implicit */_Bool) arr_3 [i_6] [i_3 - 1])))) ? (max((((/* implicit */unsigned long long int) 2947947060U)), (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_11 [i_6] [i_0 + 1] [i_6]), (((/* implicit */short) arr_20 [i_0] [i_1] [i_3] [(_Bool)0]))))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            arr_26 [i_0 + 1] [i_1] [4LL] [i_0] [i_7] = ((/* implicit */long long int) min((((1855251813) & (1579896838))), (((/* implicit */int) ((signed char) arr_22 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_0] [i_0])))));
                            var_21 = ((/* implicit */unsigned char) var_11);
                            arr_27 [i_0 + 4] [2LL] [i_3] [(signed char)10] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) -8001582849950079746LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (13199018114828836712ULL)))));
                            arr_28 [8U] [i_1] [i_0] [4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [(unsigned char)7])) ? (arr_15 [i_3] [i_3] [i_3] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_16 [i_0] [i_1] [i_3] [i_6] [i_7])) : ((+(((/* implicit */int) ((unsigned char) var_6)))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) (unsigned short)57640)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))), (min((((/* implicit */int) arr_21 [i_0 - 1] [8LL] [i_3 + 1] [i_6] [(_Bool)1])), (arr_19 [i_0 + 1] [i_0 + 1]))))), (max((((/* implicit */int) (short)-19029)), (((((/* implicit */_Bool) (short)1536)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) var_4))))))));
                            var_23 = ((/* implicit */short) max((max((var_14), (((/* implicit */unsigned long long int) arr_6 [4] [i_1] [i_3] [i_3 + 4])))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_11 [i_0] [i_0 + 3] [i_3 + 4])), (((unsigned int) 1855251822)))))));
                            var_24 |= ((/* implicit */long long int) min(((~(((/* implicit */int) ((short) var_13))))), (((/* implicit */int) var_9))));
                        }
                        for (int i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2488983519584288174LL)) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)97))) : (15447806210015800357ULL))) == (((/* implicit */unsigned long long int) 1347020223U))))) : (((/* implicit */int) (short)-8172))));
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_31 [i_0])))) ? (((arr_31 [i_0]) + (arr_31 [i_0]))) : (((((/* implicit */_Bool) arr_31 [i_0])) ? (arr_31 [i_0]) : (arr_31 [i_0])))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_10 = 2; i_10 < 16; i_10 += 4) 
                        {
                            arr_36 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) arr_4 [i_0 + 3]));
                            var_27 ^= ((/* implicit */unsigned char) ((var_4) ? (((/* implicit */int) arr_22 [i_0] [i_6] [i_0 + 4] [i_3 + 1] [i_10 - 1] [i_10 + 2] [i_10])) : (((/* implicit */int) (_Bool)1))));
                        }
                    }
                    for (unsigned int i_11 = 4; i_11 < 15; i_11 += 4) 
                    {
                        arr_39 [i_0] [i_3] [(unsigned short)6] [i_0] = ((/* implicit */long long int) max((var_0), (((/* implicit */unsigned short) (_Bool)1))));
                        var_28 &= ((/* implicit */unsigned long long int) arr_20 [i_11 + 1] [(signed char)16] [i_11 - 1] [i_11]);
                    }
                    for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 18; i_13 += 4) 
                        {
                            arr_44 [9] [i_0] [(unsigned short)16] [i_12] [i_13] = ((/* implicit */int) (~(var_11)));
                            arr_45 [10U] [i_1] [i_0] = (~(arr_25 [i_0 + 3] [i_0] [i_1] [i_3 + 4] [i_3]));
                            arr_46 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (18126939355857378453ULL)));
                            var_29 += ((/* implicit */unsigned char) (~(1347020232U)));
                        }
                        /* vectorizable */
                        for (long long int i_14 = 0; i_14 < 18; i_14 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) arr_19 [10] [(signed char)11]))));
                            arr_50 [i_14] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_11 [i_0] [i_3 + 3] [i_3]))));
                        }
                        /* vectorizable */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_55 [i_0] [i_15] [i_3] [(unsigned short)0] [i_15] = ((/* implicit */short) (~(((/* implicit */int) arr_11 [i_0] [3U] [i_3]))));
                            var_31 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_22 [i_0] [i_0] [i_3 + 4] [i_15] [i_15] [i_12] [i_0])) | (((/* implicit */int) var_5)))) != (((/* implicit */int) ((_Bool) var_1)))));
                            var_32 ^= ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_1)) - (11))))));
                            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (2998937863693751259ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_0] [i_0] [i_3 + 1] [i_12] [(unsigned char)14]))) : (((unsigned long long int) var_1))));
                        }
                        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                        {
                            arr_58 [i_0 + 4] [(signed char)14] [13LL] [i_3] [i_12] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_21 [i_16 + 1] [i_3 + 4] [i_0 + 3] [i_12] [i_16])) == (arr_23 [i_0] [i_3] [i_12] [i_16 + 1] [(signed char)2]))))) < (min((((/* implicit */unsigned int) (signed char)-115)), (1347020235U)))));
                            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) var_3))));
                            arr_59 [i_12] [i_12] [i_0] = ((/* implicit */unsigned char) max((1347020232U), (((/* implicit */unsigned int) max(((+(((/* implicit */int) var_15)))), ((~(((/* implicit */int) var_4)))))))));
                            arr_60 [(signed char)1] [i_3 + 2] [i_3] [i_0] = ((/* implicit */unsigned int) var_14);
                            var_35 = ((/* implicit */long long int) arr_34 [i_0] [i_1] [i_3 + 1] [(unsigned char)10]);
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 2) 
                        {
                            arr_65 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_53 [i_1] [i_3 - 1] [i_17])) >> (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)))) - (74)))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 1347020236U)) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_1])) : (((/* implicit */int) var_5)))), (((/* implicit */int) min((arr_14 [i_0] [(_Bool)1] [i_0] [i_0]), (((/* implicit */unsigned char) arr_52 [i_17] [i_0] [(_Bool)1] [i_0] [(short)11])))))))) : (min((((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))), (min((2947947060U), (((/* implicit */unsigned int) var_10))))))));
                            var_36 = ((/* implicit */_Bool) (unsigned short)24406);
                            var_37 = ((/* implicit */short) (((+(((unsigned long long int) arr_2 [i_0])))) << (((((((/* implicit */_Bool) ((unsigned long long int) 1347020235U))) ? (((/* implicit */int) (unsigned short)22825)) : (((/* implicit */int) (_Bool)1)))) - (22822)))));
                        }
                        var_38 *= ((/* implicit */unsigned int) (unsigned short)26486);
                    }
                    for (int i_18 = 0; i_18 < 18; i_18 += 4) 
                    {
                        arr_70 [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((arr_19 [i_0 + 3] [i_3 - 1]) % (((/* implicit */int) arr_3 [i_0] [i_3 + 3])))), (((((/* implicit */int) var_12)) / (((/* implicit */int) var_8))))));
                        arr_71 [i_0] [i_3 + 1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)142)) <= (((/* implicit */int) (unsigned short)41129)))) ? (((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) ((var_12) && (((/* implicit */_Bool) 15700115037283102666ULL)))))))) : (max((((((/* implicit */int) arr_43 [14] [4U] [i_3] [14U] [i_3])) | (((/* implicit */int) var_13)))), (((/* implicit */int) ((signed char) var_16)))))));
                    }
                    var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)115)) > (((/* implicit */int) var_10))))), (2809924056431358706ULL)))) ? (((var_12) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */int) (short)23280)) : (((/* implicit */int) var_12))))) : (max((((/* implicit */unsigned int) 1516927313)), (arr_57 [i_0 - 1] [i_0 + 3] [i_3 + 4] [i_3 - 1] [(signed char)17]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)1738)))) & ((-(((/* implicit */int) var_13)))))))));
                }
                for (signed char i_19 = 0; i_19 < 18; i_19 += 2) 
                {
                    var_40 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) (short)-7595)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_16))))))) && (((/* implicit */_Bool) (unsigned short)41129))));
                    var_41 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (short)13031))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) arr_6 [i_0] [i_0 + 3] [i_0 + 1] [i_0 + 2])) - (((/* implicit */int) arr_22 [i_19] [i_1] [(short)6] [16U] [i_0] [i_1] [i_0 + 1]))))));
                }
                /* vectorizable */
                for (unsigned char i_20 = 0; i_20 < 18; i_20 += 2) 
                {
                    var_42 *= ((/* implicit */unsigned char) (-((+(((/* implicit */int) var_13))))));
                    /* LoopNest 2 */
                    for (unsigned char i_21 = 2; i_21 < 15; i_21 += 4) 
                    {
                        for (unsigned long long int i_22 = 0; i_22 < 18; i_22 += 4) 
                        {
                            {
                                arr_81 [(unsigned char)0] [i_1] [i_1] [i_1] [i_0] [3ULL] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) var_4)))));
                                var_43 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0))));
                                arr_82 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (arr_66 [i_0] [i_0 + 4] [i_20] [i_21]) : (arr_66 [7LL] [i_0 + 3] [i_20] [i_21 + 2])));
                                var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(1347020235U)))) ? (((/* implicit */unsigned long long int) arr_1 [i_21 + 3] [i_0 + 2])) : ((~(var_11)))));
                            }
                        } 
                    } 
                    var_45 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-13032))));
                }
                var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~((-(((/* implicit */int) arr_72 [i_0] [i_1] [(short)17]))))))) + (((long long int) var_11))));
            }
        } 
    } 
}
