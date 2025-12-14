/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178564
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
    var_11 = ((/* implicit */long long int) var_7);
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) var_0))));
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_5)))) : (var_2))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)186))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_3 [i_0] [i_0 + 3]))))) : (1282405163187448722ULL)));
        arr_4 [1] [1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) arr_2 [i_0] [i_0 + 4])) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) var_1))))))), (((unsigned long long int) arr_1 [i_0 + 1]))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (unsigned short i_3 = 3; i_3 < 19; i_3 += 4) 
            {
                {
                    arr_12 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_11 [(unsigned char)17] [i_2] [i_2] [i_1])) : (((/* implicit */int) arr_11 [i_2] [i_2] [0] [i_3 + 4]))))));
                    arr_13 [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 1)) ? (((/* implicit */unsigned int) 602899287)) : (1972441977U))), (((/* implicit */unsigned int) ((signed char) ((var_2) <= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */long long int) (short)32745);
                        arr_16 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) -525944727)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1]))))))) % (((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) var_5)) ? (2034130752350469304LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                        arr_17 [i_2] [i_2] [i_4] = ((/* implicit */int) arr_5 [i_3 + 2]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 4; i_5 < 20; i_5 += 2) 
                        {
                            arr_20 [i_5] [i_4] [i_1] = ((/* implicit */short) var_0);
                            var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_1)) : (arr_19 [i_5 - 4] [i_3 - 2] [i_3 - 2] [i_4] [i_5 - 3])));
                        }
                        /* vectorizable */
                        for (short i_6 = 3; i_6 < 22; i_6 += 2) 
                        {
                            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (_Bool)1))));
                            var_18 = ((/* implicit */_Bool) ((arr_22 [i_2] [i_3 + 1] [i_4]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_1] [i_2] [12] [12] = ((/* implicit */unsigned int) arr_19 [i_3 - 3] [i_3 - 3] [(unsigned short)0] [(unsigned short)0] [i_3]);
                        /* LoopSeq 1 */
                        for (int i_8 = 3; i_8 < 19; i_8 += 1) 
                        {
                            arr_31 [12ULL] [i_7] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((arr_19 [i_1] [i_1] [i_1] [i_1] [(signed char)22]) >> (((arr_19 [i_1] [i_2] [i_3 - 1] [i_3 - 1] [i_8 - 3]) - (1166521708)))));
                            arr_32 [i_1] [i_1] [21] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))) == (var_8)));
                        }
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 23; i_10 += 3) 
                        {
                            arr_37 [(short)19] [i_3] [i_2] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7)))))));
                            arr_38 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) var_9))));
                            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_30 [i_3 - 3] [i_3] [4]))));
                        }
                        arr_39 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) >> (((/* implicit */int) arr_29 [i_3 + 3] [i_1] [i_1]))));
                    }
                    for (long long int i_11 = 0; i_11 < 23; i_11 += 4) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned int) (~(-6317661967067189658LL)));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_12 = 3; i_12 < 22; i_12 += 1) 
                        {
                            var_21 ^= ((/* implicit */int) ((min((((17164338910522102902ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (min((var_5), (((/* implicit */unsigned long long int) arr_36 [i_1] [i_2] [i_3 + 1] [i_3 + 1] [0ULL])))))) >> (((((/* implicit */int) max((((/* implicit */short) ((_Bool) var_1))), (arr_36 [i_1] [i_1] [i_1] [i_1] [i_1])))) - (16568)))));
                            var_22 += ((/* implicit */unsigned int) ((long long int) (unsigned char)11));
                        }
                        for (int i_13 = 2; i_13 < 20; i_13 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) arr_44 [i_13] [i_11] [i_11] [i_11] [i_3] [i_2] [(unsigned short)16]);
                            var_24 = ((/* implicit */unsigned short) ((((arr_34 [i_13 + 1] [i_11] [i_2] [i_1]) / (arr_34 [i_2] [i_2] [(short)7] [i_13 + 3]))) == (((/* implicit */unsigned long long int) arr_23 [i_3] [i_3] [(unsigned char)21] [21ULL]))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (arr_15 [i_3 - 2] [i_3 - 3] [i_3] [i_3 + 4] [i_3 - 3]))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_14 = 1; i_14 < 22; i_14 += 3) 
                        {
                            var_26 -= ((/* implicit */short) ((var_8) * (((/* implicit */int) var_0))));
                            var_27 = (_Bool)1;
                            arr_50 [i_1] [i_14] [i_1] [i_11] [6U] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)244)) : (1147227658)))) && (((/* implicit */_Bool) arr_11 [i_14 - 1] [i_3] [i_3 - 3] [i_3 + 3]))));
                            var_28 = ((/* implicit */_Bool) var_6);
                        }
                        arr_51 [(unsigned char)2] [4ULL] [(unsigned char)2] = ((/* implicit */int) (((+(((/* implicit */int) var_4)))) > (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (arr_30 [i_3 - 2] [i_3 - 3] [i_3 - 3])))));
                        var_29 = ((/* implicit */signed char) var_3);
                        arr_52 [i_11] [i_3] [i_2] [i_1] = ((/* implicit */unsigned char) (-(854504885)));
                    }
                    for (long long int i_15 = 0; i_15 < 23; i_15 += 4) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (5703857522013948656ULL)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_2] [16U] [i_3 - 3] [i_15]))) & (3682981399U)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_4))))) : (arr_15 [i_3] [(short)12] [i_3] [i_3 - 1] [i_3 - 1])))));
                        arr_55 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_1);
                    }
                }
            } 
        } 
        arr_56 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1516478125U))), (((/* implicit */unsigned int) min((((/* implicit */int) var_7)), (var_8))))))) ? (min(((+(arr_22 [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)-2850)) ? (arr_43 [9] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) -2147483645)))))));
        var_31 ^= ((/* implicit */long long int) max((((/* implicit */int) ((var_8) > (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_49 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned short)10] [i_1]))))));
    }
}
