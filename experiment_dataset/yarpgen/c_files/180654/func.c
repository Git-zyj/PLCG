/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180654
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
    for (signed char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [(unsigned short)4]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0])) ? (0U) : (arr_1 [i_0] [i_0 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_1 [i_0 - 1] [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)51935)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))), (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))))) ? ((-(((((/* implicit */_Bool) var_1)) ? (2894746370U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))))))) : (max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [12U] [12U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0]))))), (((/* implicit */unsigned int) (_Bool)1))))));
        var_13 = ((/* implicit */unsigned int) (unsigned char)236);
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_14 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) && (((/* implicit */_Bool) arr_2 [7U] [i_0 - 1])))))) % (min((((/* implicit */unsigned int) max(((unsigned short)31498), (((/* implicit */unsigned short) var_3))))), (((((/* implicit */_Bool) var_11)) ? (var_2) : (arr_1 [9ULL] [i_1])))))));
            var_15 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        }
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) % (((arr_9 [i_0 - 1]) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_2] [6U])) : (arr_6 [0] [i_0 - 2] [i_0 - 2])))));
            arr_10 [i_0] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) arr_2 [i_0] [i_0 - 3]))))) - (((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 + 1])) ? (arr_1 [i_0 - 2] [i_0 - 2]) : (arr_1 [i_0 - 3] [i_0 + 1]))));
            arr_11 [12LL] &= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 - 2] [i_0 - 1])) ? (arr_8 [i_0] [i_0 - 2] [i_0 - 3]) : (((/* implicit */unsigned long long int) 3616289823U))))));
        }
        for (int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            arr_14 [i_3] [i_0] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0])) > (((/* implicit */int) (signed char)-18)))))));
            arr_15 [i_0 - 1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 461534399566161611ULL)) ? (arr_1 [i_0] [i_0]) : (0U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)100))) : (arr_6 [i_0] [i_0 + 1] [i_0]))) | (((((/* implicit */_Bool) (+(4294967295U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2]))) : (((((/* implicit */_Bool) 2173687023U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)79))) : (arr_8 [i_0] [i_0] [i_3])))))));
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 4; i_6 < 13; i_6 += 2) 
                    {
                        {
                            arr_24 [i_6] [i_3] [i_3] |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_20 [i_3] [i_0 - 1] [i_3] [i_0 - 1] [i_6 - 4] [i_6])) : (((/* implicit */int) arr_20 [i_6] [i_0 - 1] [i_3] [i_0 - 1] [i_6 - 1] [i_6]))))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_16 [i_0] [i_3] [(unsigned char)11] [(short)10])))) < (((((/* implicit */_Bool) 3383551612U)) ? (((/* implicit */int) arr_9 [i_0 - 3])) : (((/* implicit */int) (short)-23567))))))) + (((/* implicit */int) (unsigned char)20))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */unsigned long long int) var_6);
        }
        for (short i_7 = 2; i_7 < 13; i_7 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) arr_7 [i_0])), (((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)74)))))))));
            arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(1964228634U)));
            arr_28 [i_7] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (short)2357)) : (((/* implicit */int) var_5))))) ? (max((var_10), (var_10))) : (((((/* implicit */_Bool) (short)4627)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7 - 2] [i_0 + 1]))) : (var_12)))));
        }
    }
    for (unsigned char i_8 = 4; i_8 < 15; i_8 += 2) 
    {
        arr_32 [13ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_8] [i_8 - 3] [i_8 - 3] [i_8 - 1] [i_8 - 1] [i_8])) != (((/* implicit */int) var_11))));
        arr_33 [i_8] = ((/* implicit */unsigned long long int) (-(1053870825U)));
        /* LoopSeq 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_37 [i_8] [i_9]), (((/* implicit */int) arr_2 [i_8] [i_8]))))) ? (((((/* implicit */int) var_8)) * (((/* implicit */int) (unsigned char)126)))) : (((/* implicit */int) ((var_0) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */int) ((signed char) var_9))) : (((((/* implicit */_Bool) 3364594615U)) ? (((/* implicit */int) var_4)) : (arr_34 [i_8] [i_8] [(signed char)3])))))) : (((1273631970U) ^ (((((/* implicit */_Bool) arr_18 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [(unsigned short)7] [i_8 - 4]))) : (1593274295U)))))))));
            var_21 = ((/* implicit */unsigned long long int) arr_18 [i_8] [i_8] [i_8] [i_8]);
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_22 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */int) arr_38 [i_8] [i_8 - 3] [i_8])) : ((-(-2147483635)))))) ? (((((/* implicit */_Bool) arr_30 [i_10] [i_10])) ? (((/* implicit */int) max((var_9), (var_9)))) : (arr_37 [(short)5] [i_8 - 2]))) : (((/* implicit */int) ((arr_26 [i_8 - 4] [i_8 - 4]) && (arr_9 [i_8 + 1]))))));
            arr_41 [(signed char)14] [i_10] [i_10] = ((((/* implicit */_Bool) arr_22 [i_8 - 2] [i_8 - 2] [i_8] [i_8 - 2] [i_8])) ? (min(((-(3251365472U))), (((/* implicit */unsigned int) max((var_3), (((/* implicit */signed char) arr_16 [i_8] [i_10] [i_8] [i_8 + 1]))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (var_2)))) << (((/* implicit */int) ((4294967295U) <= (3697291641U))))))));
            var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) 33553920)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) min((arr_34 [i_10] [i_8 - 1] [i_8]), (((/* implicit */int) arr_16 [i_8] [i_8] [i_8] [i_8]))))) : ((-(arr_5 [i_8] [i_10] [i_8]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))));
        }
        var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_29 [i_8] [i_8 + 1])))) ? ((-(arr_29 [(unsigned char)3] [i_8 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    }
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) ^ ((+(((/* implicit */int) var_7))))));
}
