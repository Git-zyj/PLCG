/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161009
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
    var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)29489))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [4LL] = ((/* implicit */_Bool) var_17);
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        arr_9 [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_3] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) min((140737487831040LL), (((/* implicit */long long int) var_12))))) ? (((/* implicit */int) min(((unsigned short)41617), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))) : (((/* implicit */int) var_2))))));
                        arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (max((((/* implicit */unsigned long long int) (+(arr_8 [i_3] [i_1] [i_0])))), (max((((/* implicit */unsigned long long int) (unsigned char)193)), (4503599627337728ULL))))) : (((((/* implicit */_Bool) (+(arr_6 [i_0])))) ? (((((/* implicit */_Bool) 18327536654765725554ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (var_15))) : (((/* implicit */unsigned long long int) var_11))))));
                        arr_11 [i_1] [(_Bool)0] [i_2 + 1] = ((/* implicit */long long int) (-((+(0)))));
                    }
                    arr_12 [(unsigned short)16] [8LL] [8LL] [(unsigned short)16] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) 12025382607905894055ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_1 - 1] [i_2 + 1]), (arr_1 [i_1 + 1] [i_2 - 4]))))) : (arr_0 [i_0])));
                }
            } 
        } 
        arr_13 [i_0] = ((/* implicit */_Bool) arr_8 [i_0] [(short)2] [i_0]);
    }
    /* vectorizable */
    for (long long int i_4 = 1; i_4 < 11; i_4 += 4) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (arr_5 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])));
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned int) (~(arr_6 [i_4 + 1])));
    }
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        for (short i_6 = 3; i_6 < 23; i_6 += 1) 
        {
            {
                var_21 |= ((/* implicit */long long int) max(((+(((/* implicit */int) arr_22 [i_6 - 1] [i_6 + 1] [i_6 - 3])))), (((((/* implicit */int) arr_22 [i_6] [i_6 - 2] [i_6 + 1])) & (((/* implicit */int) (unsigned char)248))))));
                /* LoopNest 3 */
                for (long long int i_7 = 2; i_7 < 21; i_7 += 1) 
                {
                    for (int i_8 = 1; i_8 < 21; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 21; i_9 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_22 [i_9 + 2] [i_9] [16ULL])), (((unsigned long long int) (signed char)-35))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)-79)) & (((/* implicit */int) (_Bool)0))))) != (min((arr_28 [i_5] [i_7] [i_5]), (((/* implicit */long long int) arr_22 [i_5] [i_5] [i_5])))))))))))));
                                arr_31 [i_6] [i_6 - 2] [i_7 + 3] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_22 [i_9] [i_5] [i_5])))) && (((/* implicit */_Bool) arr_29 [i_5] [i_6] [i_7] [i_5] [i_8 + 3] [i_9])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)45627)) ? (arr_23 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) arr_27 [i_5] [i_7 - 2] [i_5] [i_9])) << (((((/* implicit */int) (unsigned short)27886)) - (27874)))))))) : (min((((/* implicit */unsigned long long int) (unsigned short)11933)), (arr_24 [i_7 + 3] [i_7 + 3] [i_8 + 2])))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_33 [i_10] [i_6 - 3] [i_6] [i_6])))) ? (((/* implicit */int) ((signed char) (+(((/* implicit */int) (_Bool)1)))))) : ((+(((/* implicit */int) var_2))))));
                    arr_34 [i_10] [i_6] [i_5] = (-(((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_6] [i_6] [i_6 - 3])) || (((/* implicit */_Bool) arr_28 [i_5] [i_6] [i_6 - 3]))))));
                    var_24 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)98)) % (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) != (var_6))))) : (min((arr_28 [i_5] [i_5] [i_5]), (((/* implicit */long long int) arr_29 [i_5] [i_5] [i_10] [(signed char)14] [i_10] [i_10]))))))) - (min((((/* implicit */unsigned long long int) ((short) 16867661904406138760ULL))), (arr_24 [i_6] [i_6 + 1] [i_6])))));
                }
                /* vectorizable */
                for (signed char i_11 = 1; i_11 < 23; i_11 += 3) 
                {
                    arr_38 [i_6] [1U] [i_11] = ((/* implicit */int) var_13);
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (798088464U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_6] [i_6 - 3] [i_6 - 1] [i_6])))));
                }
                for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    var_26 = ((/* implicit */_Bool) ((int) (+(((((/* implicit */int) var_12)) * (((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_30 [i_13] [i_6 + 1] [i_12] [i_13] [i_14 - 1] [i_14 - 1] [i_6 - 2]) - (((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_6 - 1] [i_13] [i_5] [i_6 - 1] [i_5] [i_6 - 1] [i_5]))) + (arr_30 [i_13] [i_13] [i_12] [i_13] [i_13] [(signed char)12] [i_13])))))) ? (((/* implicit */unsigned long long int) ((arr_41 [i_14 - 1] [i_6 - 3] [i_12] [i_13]) ? (((/* implicit */int) arr_41 [i_14 - 1] [i_6 - 3] [i_12] [(short)21])) : (((/* implicit */int) arr_41 [i_14 - 1] [i_6 - 2] [i_6 - 2] [(short)11]))))) : (((arr_24 [i_6 + 1] [(signed char)0] [i_6 + 1]) / (((/* implicit */unsigned long long int) arr_37 [i_6 - 1] [i_6 - 1] [i_6 - 3]))))));
                            arr_46 [i_6] [i_6] [18ULL] [19ULL] [i_14 - 1] [i_14 - 1] = ((/* implicit */unsigned long long int) (unsigned short)17331);
                            arr_47 [i_6] [i_6] [i_12] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) min(((signed char)0), (((/* implicit */signed char) arr_42 [i_5] [i_6 - 1] [i_13] [i_14]))))), ((unsigned char)140))))) == (max((((/* implicit */unsigned int) var_17)), (arr_37 [i_6 - 2] [i_6 - 2] [i_6 - 2])))));
                        }
                        for (long long int i_15 = 0; i_15 < 24; i_15 += 2) 
                        {
                            arr_50 [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)21494)) / (((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) var_11)))))))) != (arr_33 [i_6 - 1] [i_6 - 2] [i_6 - 3] [i_6])));
                            var_28 ^= ((/* implicit */short) ((unsigned char) ((unsigned int) arr_25 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_13])));
                            var_29 |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (arr_36 [i_12] [i_12] [i_6])))) || (((/* implicit */_Bool) min((((/* implicit */long long int) arr_43 [i_5] [i_5] [i_5])), (arr_30 [i_13] [i_13] [i_12] [i_12] [i_13] [i_12] [i_15]))))))) <= (((/* implicit */int) ((min((var_14), (((/* implicit */long long int) var_13)))) == (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)57947)) >> (((((/* implicit */int) (short)-6737)) + (6755)))))))))));
                            arr_51 [i_5] [i_5] [(_Bool)1] [i_13] [i_5] &= ((/* implicit */unsigned long long int) min((((/* implicit */short) var_16)), ((short)-16707)));
                        }
                        var_30 = ((/* implicit */unsigned char) var_17);
                    }
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        arr_54 [i_6] [i_6 + 1] [i_12] [i_12] [i_16] [i_16] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)39195))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 2) 
                        {
                            arr_57 [i_5] [i_5] [i_12] [i_16 - 1] [i_6] [i_5] = (-((((~(-1312190306))) >> (((((((/* implicit */_Bool) arr_26 [i_12] [i_16] [i_12] [i_6])) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) (signed char)-10)))) - (80))))));
                            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) arr_18 [i_6 - 3]))));
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */int) max(((unsigned short)0), (arr_21 [i_6] [i_6] [i_6])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_5] [i_5] [i_5] [i_12] [i_5] [i_17] [i_17])) || (((/* implicit */_Bool) arr_20 [i_6]))))))) >> (((((((/* implicit */_Bool) ((-769332304) + (((/* implicit */int) (unsigned short)5501))))) ? (var_6) : (((/* implicit */unsigned long long int) (+(var_14)))))) - (13750508989357291427ULL))))))));
                            arr_58 [i_5] [(unsigned short)19] [i_12] [i_6] [i_6] = ((/* implicit */short) arr_20 [i_16]);
                            var_33 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((var_17) % (((/* implicit */int) var_2))))) <= (max((var_11), (((/* implicit */unsigned int) var_16))))))) - (((((/* implicit */_Bool) ((unsigned long long int) -1549372794))) ? (((/* implicit */int) min(((unsigned char)89), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) var_7))))));
                        }
                        for (unsigned char i_18 = 1; i_18 < 23; i_18 += 2) 
                        {
                            var_34 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (689816354353123074ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) || (((/* implicit */_Bool) 4294967295U))))))));
                            var_35 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_39 [(unsigned char)21] [(unsigned char)21])) >> (((((/* implicit */int) arr_22 [21ULL] [i_12] [i_6])) + (84)))))) : (3571136814U)))) ? (((((/* implicit */_Bool) (short)7168)) ? (((arr_60 [(short)4] [i_6 - 1] [(short)16] [i_16] [(short)4]) ? (arr_35 [i_5] [i_12] [(unsigned short)12]) : (((/* implicit */unsigned long long int) 58720256)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65405)) ? (2391944U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)46)))))))) : (((/* implicit */unsigned long long int) min((-1516497867), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_42 [i_5] [i_6 - 2] [i_5] [i_5])) : (((/* implicit */int) arr_42 [i_18] [i_12] [i_6] [i_5])))))))));
                            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) arr_18 [i_5]))));
                        }
                        for (unsigned short i_19 = 0; i_19 < 24; i_19 += 3) 
                        {
                            arr_65 [i_5] [i_6] [i_12] [i_6] [i_19] = ((/* implicit */unsigned char) max((((/* implicit */int) min((((/* implicit */signed char) ((3784152071057420095ULL) != (var_5)))), ((signed char)17)))), (min((((/* implicit */int) min((arr_61 [i_16 - 1] [(short)10]), (((/* implicit */unsigned char) arr_42 [(short)14] [i_6] [i_6] [(unsigned short)22]))))), ((~(((/* implicit */int) arr_29 [i_5] [i_6] [i_5] [(signed char)14] [i_16] [i_19]))))))));
                            arr_66 [i_5] [i_5] [i_6] [i_16 - 1] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)16742)) << (((arr_37 [i_19] [i_5] [i_5]) - (1450582147U)))))) ? (min((arr_37 [i_5] [i_12] [i_19]), (arr_37 [i_5] [i_5] [i_5]))) : (min((arr_37 [i_16] [i_12] [i_5]), (arr_37 [i_19] [i_16] [i_12])))));
                        }
                        arr_67 [i_5] [i_6] = max((var_6), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_53 [i_6] [i_6] [i_6] [i_6 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12740))) : (arr_37 [(signed char)3] [i_6 - 1] [i_6]))) >> (((var_11) - (3204162371U)))))));
                        arr_68 [i_6] [(signed char)7] [i_12] [(signed char)7] = ((/* implicit */short) arr_60 [i_6] [i_5] [i_5] [i_5] [i_6]);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_20 = 3; i_20 < 23; i_20 += 1) 
                    {
                        arr_72 [i_5] [i_5] [i_6 - 2] [i_12] [i_6] [i_20 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_20 + 1] [i_20] [i_12] [i_5] [i_5] [i_5])) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) arr_52 [i_6] [(signed char)5] [(signed char)5] [i_6]))));
                        /* LoopSeq 1 */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            var_37 = ((/* implicit */int) ((short) arr_40 [(_Bool)1]));
                            arr_76 [i_6] = ((/* implicit */unsigned int) ((long long int) arr_70 [i_5] [i_6] [i_6] [i_20]));
                        }
                        arr_77 [i_5] [(unsigned char)16] [i_5] [i_5] [(_Bool)1] [i_6] = ((/* implicit */unsigned char) var_17);
                    }
                }
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23504)))))) : (((/* implicit */int) ((signed char) var_13))))) : (((/* implicit */int) var_10))));
}
