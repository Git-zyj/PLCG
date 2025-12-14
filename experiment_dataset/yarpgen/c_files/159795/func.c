/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159795
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
    var_15 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (min((((/* implicit */unsigned int) var_13)), (var_4)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 4; i_2 < 10; i_2 += 2) 
                {
                    arr_6 [i_2] [i_2] [i_2 + 2] = ((/* implicit */unsigned int) max(((unsigned short)61428), (((/* implicit */unsigned short) (short)17911))));
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-96))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_0] [i_0])), (arr_3 [i_2])))))), (((/* implicit */int) (short)26576)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        arr_9 [i_3] [i_3] [i_2 + 1] [i_0] [i_0] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)4))))));
                        var_17 = ((/* implicit */_Bool) (+((+(max((var_10), (((/* implicit */int) (_Bool)1))))))));
                        arr_10 [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_2 - 4] [i_0 - 1])), (((((/* implicit */int) arr_3 [i_0])) & (((/* implicit */int) (unsigned char)90))))))) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2])) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) (short)-26564))))));
                        var_18 -= ((/* implicit */signed char) 15627856189669171023ULL);
                        arr_11 [i_3] [i_0 + 1] [i_3] [i_0 + 1] [i_0 - 1] = ((/* implicit */long long int) max((((((/* implicit */int) min((arr_5 [i_2]), (arr_5 [i_0 + 2])))) << (((((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) - (15260776451490983365ULL))))), (((/* implicit */int) min(((signed char)-31), (arr_2 [i_0 + 1] [i_0 - 1]))))));
                    }
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((max((((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1])), (var_9))) + (((/* implicit */int) max((arr_7 [i_0] [i_1] [i_2] [i_1]), (arr_7 [i_0 + 2] [i_0 + 2] [i_1] [i_2 + 2])))))))));
                }
                /* LoopSeq 4 */
                for (unsigned short i_4 = 3; i_4 < 9; i_4 += 2) 
                {
                    var_20 ^= ((/* implicit */_Bool) max((((2818887884040380598ULL) + (2818887884040380585ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((arr_8 [i_0] [i_1] [i_1]), (((/* implicit */short) var_7))))), (((((/* implicit */_Bool) arr_2 [i_0] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))) : (arr_0 [i_0]))))))));
                    var_21 ^= ((/* implicit */unsigned long long int) (-(985162418487296LL)));
                    arr_16 [i_0 + 2] [i_0 + 1] [i_4] [i_0 + 1] = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_7 [i_4 - 3] [i_4] [i_4] [i_0])))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_14 [i_4] [i_1])) : (((/* implicit */int) var_7)))))), ((+(((/* implicit */int) arr_14 [i_4] [i_4]))))));
                }
                for (unsigned short i_5 = 2; i_5 < 10; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (signed char)(-127 - 1)))));
                                var_23 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) arr_12 [i_1] [i_6] [i_1] [i_6]))), (((((/* implicit */int) var_0)) + (((/* implicit */int) (unsigned char)165))))))), (min((arr_12 [i_7] [i_5 + 2] [i_0 - 2] [i_6]), (((/* implicit */unsigned long long int) 985162418487296LL))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        arr_28 [i_0] [i_5] = ((/* implicit */unsigned char) var_11);
                        arr_29 [i_5] = ((/* implicit */unsigned int) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_8]))) | (arr_17 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)157)) > (((/* implicit */int) (short)22198))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)33809)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (unsigned char)191)))))));
                    }
                }
                for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    arr_32 [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((((545918508U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)-24981))))), (((((/* implicit */int) var_7)) >= (((/* implicit */int) var_5))))))), (min((((((/* implicit */_Bool) var_14)) ? (arr_18 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned int) (unsigned char)234))))));
                    arr_33 [i_0] [i_0] [i_9] [i_9] = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), (var_10)))) == (max((((/* implicit */unsigned long long int) (unsigned short)28583)), (arr_24 [i_9] [i_1] [i_0] [i_1] [i_1] [i_0])))))));
                    var_24 = ((/* implicit */int) arr_17 [i_0] [i_1]);
                }
                for (unsigned int i_10 = 2; i_10 < 11; i_10 += 3) 
                {
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) max((max((arr_34 [i_0 + 1]), (arr_34 [i_0 + 1]))), ((~(arr_34 [i_0 + 1]))))))));
                    arr_38 [i_0 - 1] [i_0 - 3] = ((/* implicit */short) (~(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0])) || (((/* implicit */_Bool) var_5)))))) + (((((/* implicit */_Bool) arr_15 [i_0 + 2] [i_0 - 2] [i_1] [i_10])) ? (arr_18 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0 + 2] [i_0 - 2] [i_0] [i_0])))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 1; i_11 < 11; i_11 += 1) 
                    {
                        arr_41 [i_11 - 1] [i_0 + 1] [i_1] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) min((min((((/* implicit */short) arr_30 [i_0 - 1] [i_0] [i_0] [i_0])), (arr_21 [i_1] [i_0 - 3] [i_0 + 1] [i_0 - 1]))), (((/* implicit */short) ((((/* implicit */_Bool) max((var_6), (var_0)))) && (((/* implicit */_Bool) ((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))))))));
                        arr_42 [i_0] [i_0] [i_10] [i_11 - 1] [i_10] = ((/* implicit */unsigned char) arr_37 [i_0 - 2] [i_0 - 1] [i_0] [i_0 - 1]);
                        var_26 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_21 [i_1] [i_11] [i_10] [i_1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0] [i_0]))) / (arr_12 [i_1] [i_1] [i_10] [i_11]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)31726))))))) == (((/* implicit */unsigned long long int) max((arr_25 [i_0] [i_0] [i_10 - 1] [i_10 - 1] [i_10 - 2]), (((/* implicit */unsigned int) (unsigned char)62)))))));
                        var_27 = max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) arr_18 [i_0 - 2] [i_1]))))), (((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)95)))))))), (arr_24 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0 + 1]));
                    }
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) max((var_0), (var_11)))), ((~(((/* implicit */int) var_12))))))) ? ((~(((/* implicit */int) arr_21 [i_1] [i_1] [i_10 - 2] [i_12])))) : (0)));
                                arr_50 [i_0] [i_0] [i_10] [i_12] [i_0] [i_13] |= ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) arr_45 [i_0] [i_10 - 2] [i_10] [i_12] [i_10 - 2] [i_0 + 2])), (arr_12 [i_12] [i_12] [i_10 + 1] [i_12]))), (((/* implicit */unsigned long long int) max((min((((/* implicit */int) (_Bool)1)), (-142048954))), (max((((/* implicit */int) (unsigned char)119)), (var_14))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_29 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 24))))) != (((/* implicit */int) var_7))));
    var_30 = ((/* implicit */unsigned char) var_11);
    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) var_1))));
}
