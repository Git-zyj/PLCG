/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13563
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_11))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [(signed char)19]))))), (arr_1 [i_0]));
        var_20 *= ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */long long int) arr_0 [i_0] [3LL])) ^ (arr_1 [i_0])))) ? (arr_1 [i_0]) : (((/* implicit */long long int) arr_0 [i_0] [i_0])))), (((/* implicit */long long int) var_5))));
        var_21 = ((/* implicit */int) (+(min((10974569758539887803ULL), (((((/* implicit */_Bool) var_10)) ? (10974569758539887793ULL) : (((/* implicit */unsigned long long int) 2921261554U))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0])) % (((/* implicit */int) var_11))))))))));
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned char)15]))) : (arr_1 [i_0]))))))), ((((-(arr_5 [i_0] [i_0] [i_2] [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [(signed char)10] [(signed char)10] [i_1] [i_4 + 1] [i_4] = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_2] [i_4]);
                                arr_14 [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)16128)) : (((/* implicit */int) arr_9 [i_4] [i_1] [i_2] [i_1 - 2] [i_1] [i_0])))), (((/* implicit */int) ((unsigned short) 8188ULL)))));
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_6 [i_3 - 1] [i_1 - 3]))));
                                var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)114))) : (2930351883U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_1 + 1] [i_2] [i_3] [i_4] [i_4 - 1]))))))) : (min((arr_5 [i_0] [i_1] [i_1 - 2] [i_3]), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_1 - 2] [i_1] [i_1 - 2] [i_4] [10U])))));
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) min((((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_0 [i_3] [i_3 + 2])) ^ (1364615412U)))) | (((long long int) 2930351883U)))), (((/* implicit */long long int) ((unsigned char) arr_5 [i_0] [i_0] [i_1 - 2] [i_3 + 1]))))))));
                            }
                        } 
                    } 
                    arr_15 [i_1] [19LL] [i_1 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_1 - 2] [i_1] [i_1 - 2] [i_2] [6LL] [i_2])) ? (max((2930351884U), (((/* implicit */unsigned int) (short)-5463)))) : (((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 + 2])) ? (197228472U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                    arr_16 [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_11 [(short)5] [i_1 + 2] [i_2] [i_2] [7LL] [i_2] [i_0])) : (((/* implicit */int) arr_4 [i_0]))))) ? (((/* implicit */unsigned long long int) ((1364615412U) << (((((/* implicit */int) (signed char)-109)) + (117)))))) : (arr_12 [i_1 - 2] [i_1] [i_1] [i_2]))) - (((/* implicit */unsigned long long int) ((1373705741U) - (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
                }
            } 
        } 
    }
    var_26 |= ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_12))))) ? (min((2930351883U), (((/* implicit */unsigned int) (short)-8913)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_12)))))))));
    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_10))));
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_0)))))));
        var_29 ^= ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_5])) && (((/* implicit */_Bool) var_15))))), ((+(((/* implicit */int) (signed char)82))))));
    }
}
