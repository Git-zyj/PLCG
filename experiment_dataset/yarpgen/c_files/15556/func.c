/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15556
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_1))) ? (7350893448953189225ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) + ((-(var_4))))))));
    var_11 = ((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) (short)-4384)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) >= ((~(((/* implicit */int) (short)-4384)))))))));
    var_12 = ((/* implicit */long long int) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) var_6)), (arr_6 [13ULL] [13ULL])))))) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) ((_Bool) ((-450899245) < (((/* implicit */int) var_9))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_12 [i_3] [i_0] [i_2] [i_2] [i_3] = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) arr_2 [i_0] [(_Bool)1])) - (54822)))))) : (((/* implicit */unsigned char) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_0] [(_Bool)1])) - (54822))) - (1723))))));
                        /* LoopSeq 3 */
                        for (short i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            arr_15 [i_1] [i_1] [i_2] [i_3] [i_1] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) arr_6 [i_1 + 3] [i_1 + 2])) ^ (((((/* implicit */_Bool) 1820363893)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                            arr_16 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (arr_14 [i_1 - 2] [i_3] [i_2] [i_3] [i_0])));
                            var_13 = ((/* implicit */unsigned long long int) var_2);
                            var_14 ^= ((/* implicit */signed char) (short)-4384);
                        }
                        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                        {
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
                            arr_20 [i_0] [i_1] [i_0] [i_5] [i_5] [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                            var_17 *= ((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) arr_24 [i_1 + 3] [i_1 - 1] [i_1 + 3] [i_1] [i_1 + 1])) : (((/* implicit */int) arr_24 [i_1 + 1] [i_1 + 3] [i_1 - 2] [i_1] [i_1 - 3]))));
                            var_18 = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                        }
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_3] [i_2] [i_2] [17ULL] [i_0]))) - (arr_3 [i_1 + 1] [i_1 + 1])));
                        var_20 = ((/* implicit */unsigned short) arr_14 [i_0] [i_0] [i_2] [2ULL] [i_0]);
                    }
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) var_3))))) && (((/* implicit */_Bool) (unsigned char)240)))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_2]))) - (1463274311U))) - (((((/* implicit */_Bool) -4549308781098195985LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (566815736U))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((unsigned char) (short)8128)), (var_1)))))));
                        var_22 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_24 [i_7] [i_7] [12] [i_7] [2])) * (((/* implicit */int) var_5))))));
                        arr_27 [i_0] [i_0] [i_0] [i_2] [i_2] [19LL] = ((/* implicit */unsigned char) ((int) (short)-4384));
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_8 [i_0] [i_1 - 4] [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_23 [i_0] [i_1] [(signed char)7] [i_7] [(unsigned char)4] [(unsigned char)4])))) : (((((/* implicit */long long int) 566815736U)) - (arr_22 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_0] [(unsigned short)3])))));
                        var_24 = ((/* implicit */unsigned long long int) var_5);
                    }
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                    {
                        arr_31 [i_0] = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) 1820363893)), (9223372036854775807LL))), (((/* implicit */long long int) arr_17 [(unsigned short)11] [i_1 + 1] [(unsigned short)11] [i_0]))));
                        var_25 = ((/* implicit */long long int) arr_8 [i_0] [i_2] [(unsigned short)5]);
                    }
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) ((long long int) var_3));
                        arr_34 [i_0] = var_7;
                    }
                    var_27 += ((/* implicit */unsigned long long int) (!(((arr_4 [i_0]) >= (((/* implicit */unsigned long long int) arr_23 [i_1] [i_1 + 2] [i_2] [i_0] [(unsigned char)2] [i_2]))))));
                }
                for (unsigned long long int i_10 = 3; i_10 < 20; i_10 += 2) 
                {
                    var_28 = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (873727564U))) / (((arr_17 [i_0] [i_1 - 2] [i_10] [i_0]) << (((((/* implicit */int) var_1)) - (158)))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_43 [i_0] [i_1 - 3] [i_0] [i_11] [i_12] = ((/* implicit */signed char) max((((var_4) ^ (((/* implicit */int) min((var_6), (arr_35 [i_0] [(_Bool)0] [(_Bool)1])))))), (((/* implicit */int) var_2))));
                                arr_44 [i_0] [(short)10] [i_10] [i_11] [i_12] = ((/* implicit */int) arr_1 [i_0]);
                            }
                        } 
                    } 
                    arr_45 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (566815725U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    arr_46 [i_0] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_42 [i_0] [i_0] [i_10]) / (((/* implicit */long long int) ((/* implicit */int) arr_33 [(unsigned short)11] [(unsigned short)11] [i_10] [2LL])))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-69))) : ((+(var_7)))))) : (((arr_30 [i_0] [i_0] [i_0] [i_1] [i_1] [(_Bool)1]) << (((((((/* implicit */int) arr_24 [i_0] [i_1 - 1] [i_0] [i_0] [16ULL])) - (((/* implicit */int) var_0)))) - (26227))))));
                    var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-4384))));
                }
            }
        } 
    } 
}
