/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131522
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
    var_11 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    arr_6 [i_0] [i_1 - 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_1 - 1]))))))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            arr_14 [i_3] [i_3] = ((/* implicit */long long int) arr_10 [i_1 + 1] [i_1 + 1] [(unsigned char)12] [(unsigned char)12] [i_0]);
                            var_12 ^= ((/* implicit */unsigned short) -1);
                        }
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            arr_17 [i_5] [i_3] [i_5] [i_5] [i_1] [i_0] [i_0] = max((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))), (((463756077) / (((/* implicit */int) (unsigned char)28)))));
                            var_13 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_5)))) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_3] [i_1 + 1] [i_2] [i_3] [i_3])) ? (3318868202U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_3])))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)227)) % (((/* implicit */int) arr_7 [i_0] [i_3]))))) : (((long long int) arr_7 [i_1 - 1] [i_3]))));
                        }
                        for (unsigned char i_6 = 3; i_6 < 22; i_6 += 4) 
                        {
                            arr_20 [i_6] = ((/* implicit */unsigned long long int) min(((((+(arr_19 [i_0] [i_1] [i_0] [i_2] [i_3] [i_0]))) * (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)169))) / (arr_19 [i_0] [i_1 + 1] [i_2] [i_3] [i_3] [i_6 + 2]))))), (((/* implicit */long long int) (unsigned char)29))));
                            var_14 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) var_1)), (arr_18 [i_0] [i_0] [i_2] [i_3] [i_6]))) | (((/* implicit */unsigned long long int) var_1))));
                            var_15 = ((/* implicit */long long int) ((short) ((unsigned short) ((var_10) - (((/* implicit */int) arr_3 [(unsigned short)9]))))));
                            var_16 -= ((/* implicit */short) var_8);
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            arr_23 [i_0] [i_1 + 1] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(max((arr_22 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]), (arr_22 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])))));
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_16 [i_3] [i_3] [i_2] [i_3] [i_3] [i_1 + 1]))))))) ? (var_8) : (((/* implicit */unsigned long long int) arr_11 [i_1 - 1] [i_1]))));
                            arr_24 [i_0] [i_1 + 1] [i_2] [i_2] [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_9)), (((long long int) max((((/* implicit */long long int) arr_15 [i_0] [i_1] [i_1] [i_3] [i_3] [i_1])), (arr_4 [i_0] [i_7] [i_2]))))));
                        }
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        var_18 ^= ((/* implicit */signed char) max((max((((/* implicit */long long int) var_6)), (arr_0 [i_1 - 1] [i_1 - 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_8] [i_1 + 1] [i_2] [i_1 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_13 [i_1 + 1] [i_1 - 1] [i_1 - 1])))))));
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_13 [i_0] [i_1 + 1] [i_0])), (max((arr_8 [i_1 - 1] [i_1 - 1]), ((~(arr_2 [i_0] [i_2] [i_0]))))))))));
                        arr_28 [i_8] [i_8] [i_2] [i_8] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((var_7), (arr_21 [i_1 - 1])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_2] [i_0]))))) : (((((/* implicit */_Bool) min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_8] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93))) : (var_0)))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            {
                                var_20 = var_5;
                                arr_35 [i_9] = ((/* implicit */short) ((var_9) ? (arr_10 [i_0] [i_1] [i_1] [i_1] [i_10]) : (((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_27 [i_10] [i_9] [i_2] [i_1 + 1] [i_0]))))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_1 + 1] [i_2] [i_10])) ? (max((((/* implicit */int) arr_16 [i_0] [i_9] [i_0] [i_0] [i_0] [i_0])), (var_2))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_9] [i_10] [i_10])))))))) : ((+(arr_32 [i_0] [i_0] [18LL] [i_9] [i_0])))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((var_0) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))))) * (((/* implicit */unsigned long long int) (+(arr_25 [i_1] [i_2] [i_1] [i_0]))))))) ? (arr_33 [i_0] [i_1 + 1] [i_2]) : (max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))))), (min((((/* implicit */unsigned int) (short)14051)), (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_13 = 0; i_13 < 25; i_13 += 3) 
                        {
                            arr_44 [i_0] [i_1] [i_11] [i_11] [i_12] [i_11] [i_12] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_0 [i_1 - 1] [i_1 - 1])));
                            var_23 = ((/* implicit */signed char) (-(arr_11 [i_1] [i_1])));
                        }
                        for (unsigned char i_14 = 3; i_14 < 23; i_14 += 4) 
                        {
                            var_24 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_31 [i_0] [(_Bool)1] [i_12] [i_12] [i_14] [i_14 - 1])) ? (var_0) : (((/* implicit */unsigned long long int) var_10))))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) var_3))));
                        }
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_0] [i_11] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_0] [i_0] [i_1] [i_11] [i_11] [i_11]))) : (arr_9 [i_1 + 1] [i_1 + 1] [i_1])));
                        var_27 ^= arr_11 [i_12] [i_12];
                        arr_47 [i_12] = ((/* implicit */long long int) arr_21 [i_11]);
                        var_28 = ((/* implicit */int) (+(arr_33 [i_0] [i_1 + 1] [i_0])));
                    }
                    for (int i_15 = 0; i_15 < 25; i_15 += 4) 
                    {
                        arr_50 [i_1] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))) ? (((unsigned int) arr_5 [i_0] [i_1 - 1] [i_11] [i_15])) : (((/* implicit */unsigned int) arr_22 [i_15] [i_11] [i_1] [i_0] [i_0] [i_0] [i_0]))));
                        var_29 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_42 [i_15] [i_15] [i_11] [i_15] [i_1 - 1] [i_11] [i_15]))));
                    }
                    for (unsigned short i_16 = 0; i_16 < 25; i_16 += 3) 
                    {
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_11] [i_0] [i_0] [i_0])) ? (arr_11 [i_1 - 1] [i_16]) : (arr_11 [i_11] [i_16]))))));
                        arr_54 [i_0] [i_1] [i_0] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_11] [i_0] [i_11] [i_11] [i_1 - 1])) ? (arr_10 [i_0] [i_0] [i_11] [i_16] [i_1 - 1]) : (arr_10 [i_11] [i_1 - 1] [i_11] [i_11] [i_1 + 1])));
                        arr_55 [i_0] [i_0] [i_1 + 1] [i_11] [i_16] = (~(((var_8) * (((/* implicit */unsigned long long int) var_5)))));
                    }
                    arr_56 [i_0] [i_0] [i_0] [i_11] = ((arr_26 [i_1 - 1]) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (signed char)91)));
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 0; i_17 < 25; i_17 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_18 = 0; i_18 < 25; i_18 += 4) 
                        {
                            arr_62 [i_0] [i_0] [i_11] [i_17] [i_18] = ((/* implicit */_Bool) ((((/* implicit */int) (short)14051)) << (((arr_22 [i_0] [i_0] [i_1 + 1] [i_11] [20] [i_11] [i_18]) + (1801350558)))));
                            var_31 ^= ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_9 [i_0] [i_1 - 1] [i_11]));
                            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10183211322122437389ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-16059)))))));
                            arr_63 [i_0] [i_1] [i_11] [i_17] [i_1] [i_1] [i_17] = arr_13 [i_17] [i_11] [i_1 + 1];
                            arr_64 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(arr_15 [i_0] [i_0] [i_1 - 1] [i_1] [i_18] [i_18])));
                        }
                        /* LoopSeq 4 */
                        for (int i_19 = 0; i_19 < 25; i_19 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_17] [i_11] [i_1])) ? (arr_53 [i_0] [i_0]) : (((/* implicit */unsigned int) arr_48 [i_17] [i_1 - 1] [i_19] [i_1 - 1] [20ULL])))))));
                            var_34 = ((/* implicit */signed char) arr_30 [i_0] [i_1] [i_0] [i_17] [i_19]);
                        }
                        for (signed char i_20 = 0; i_20 < 25; i_20 += 4) /* same iter space */
                        {
                            var_35 ^= ((/* implicit */int) arr_69 [i_11] [i_1 + 1] [i_1 - 1] [i_17]);
                            var_36 = ((/* implicit */unsigned long long int) max((var_36), ((~(arr_61 [i_20])))));
                        }
                        for (signed char i_21 = 0; i_21 < 25; i_21 += 4) /* same iter space */
                        {
                            arr_73 [i_17] [1ULL] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 1704131411)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)228))) : (6569681975825443348LL)))));
                            arr_74 [i_1 - 1] [(unsigned short)5] [i_21] = ((/* implicit */unsigned int) ((_Bool) (+(arr_22 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1] [i_21]))));
                            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-22399)) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) (_Bool)1))));
                            arr_75 [i_1 + 1] [i_1 + 1] [i_21] = ((/* implicit */short) ((arr_26 [i_0]) ? (((/* implicit */int) arr_26 [i_0])) : (arr_38 [i_0] [i_0] [i_0])));
                        }
                        for (signed char i_22 = 0; i_22 < 25; i_22 += 4) /* same iter space */
                        {
                            var_38 ^= ((((/* implicit */_Bool) arr_49 [i_1 + 1] [i_11] [i_11] [i_22])) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_1 - 1] [i_22] [i_22] [i_22]))) : (var_5));
                            arr_80 [i_0] [i_1] [(unsigned char)14] [(unsigned char)14] [i_17] [i_11] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_40 [i_22] [i_17] [i_11] [18] [i_1 - 1] [(unsigned char)6]))));
                        }
                        /* LoopSeq 2 */
                        for (int i_23 = 2; i_23 < 21; i_23 += 3) 
                        {
                            arr_83 [i_0] [i_1] [i_11] [i_1] [16U] [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_1] [(short)23] [i_17] [i_23])) || (((((/* implicit */_Bool) arr_5 [i_23] [i_1] [i_1] [i_0])) || (((/* implicit */_Bool) arr_31 [i_23] [i_23 + 1] [i_17] [i_11] [i_1] [i_0]))))));
                            arr_84 [i_23] [i_0] [i_0] = (short)29953;
                        }
                        for (unsigned char i_24 = 0; i_24 < 25; i_24 += 4) 
                        {
                            var_39 ^= ((/* implicit */long long int) ((unsigned long long int) ((long long int) 976099093U)));
                            arr_87 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_69 [i_1 + 1] [i_1 + 1] [i_17] [i_17])) ? (((((((/* implicit */int) arr_57 [i_0] [i_1 - 1] [i_0] [i_1 - 1] [i_1 - 1] [i_24])) + (2147483647))) >> (((((/* implicit */int) arr_79 [i_0] [i_0] [i_11] [i_17] [i_24])) - (22))))) : (799971888)));
                            var_40 ^= ((/* implicit */unsigned char) ((int) arr_36 [i_1 - 1] [i_1 - 1] [i_1 + 1]));
                        }
                        arr_88 [i_17] [i_11] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_70 [i_1] [i_11] [i_11] [i_11] [i_1] [i_17] [i_1 + 1])) || (((/* implicit */_Bool) arr_70 [i_0] [i_0] [i_0] [i_1] [i_11] [i_11] [i_17])))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_17] [i_11] [i_17])) >= (((/* implicit */int) arr_5 [i_0] [(unsigned char)10] [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) > (406062972U))))));
                    }
                    arr_89 [i_11] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) arr_5 [i_1] [i_1] [i_1] [i_11]);
                }
            }
        } 
    } 
    var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (976099093U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) % (min((((/* implicit */unsigned int) (short)-32182)), (976099093U)))))) ? (var_1) : (((/* implicit */unsigned int) max((((/* implicit */int) var_9)), ((~(var_2)))))))))));
    var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) max((((/* implicit */long long int) var_10)), (var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) ((var_1) > (((/* implicit */unsigned int) var_10)))))))) : (min(((-(var_0))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_6)), (var_7))))))));
}
