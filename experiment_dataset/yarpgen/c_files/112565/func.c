/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112565
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (var_9) : (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [3LL] [i_0] = ((/* implicit */short) 6685257329801421969ULL);
                            arr_13 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) -992321900)) != (((((_Bool) arr_6 [i_2] [8LL] [8LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 694719185)))))) : ((+(arr_5 [i_0] [i_1] [i_1])))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 4) 
                            {
                                var_12 *= ((/* implicit */unsigned long long int) var_0);
                                arr_17 [i_4] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (+(arr_14 [i_0] [i_1] [i_2] [i_3] [i_4])))))) % (min((arr_15 [i_4 - 2] [i_4 - 1]), (((/* implicit */unsigned long long int) var_2))))));
                                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 6812697304805372686LL)))) <= (((((/* implicit */_Bool) arr_7 [i_4 - 1])) ? (arr_7 [i_4 + 1]) : (arr_7 [i_4 - 1]))))))));
                                var_14 *= ((/* implicit */signed char) var_8);
                            }
                            var_15 = ((/* implicit */_Bool) var_3);
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */_Bool) max((arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] [21]), (((/* implicit */unsigned long long int) (~(var_6))))))) ? (((((/* implicit */_Bool) var_5)) ? (min((var_10), (var_10))) : (((/* implicit */unsigned long long int) arr_14 [18LL] [i_0] [0ULL] [i_0] [i_1])))) : (max(((+(var_9))), ((+(18446744073709551615ULL)))))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 4; i_5 < 23; i_5 += 4) 
                {
                    for (long long int i_6 = 1; i_6 < 22; i_6 += 1) 
                    {
                        {
                            arr_23 [(unsigned char)2] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 1243907982U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)0)))) : (((((/* implicit */_Bool) 797967197U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_2)))))));
                            /* LoopSeq 4 */
                            for (signed char i_7 = 3; i_7 < 23; i_7 += 1) 
                            {
                                var_17 |= ((unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_6 - 1] [i_6 - 1] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6 - 1] [(unsigned short)13] [10]))) : (var_9)));
                                arr_28 [i_0] [i_0] [i_1] [i_0] [i_5 - 3] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128)))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 797967183U)) || (((/* implicit */_Bool) (unsigned char)128)))))))) : ((((-(arr_14 [i_6] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_0]))) + (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])))));
                                var_18 = ((/* implicit */_Bool) (-(((max((arr_11 [i_0] [i_0] [11] [i_0] [(signed char)18] [19ULL]), (((/* implicit */unsigned long long int) (unsigned short)8731)))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_0] [i_1] [i_1])) * (((/* implicit */int) (unsigned short)6539)))))))));
                            }
                            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                            {
                                var_19 = ((/* implicit */long long int) (+(((unsigned int) arr_9 [i_0]))));
                                arr_31 [i_0] [i_1] [i_5 - 2] [i_6 + 1] [i_0] = (unsigned short)6539;
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((min((var_10), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) 3825513265U))))) ? (arr_14 [i_5] [i_5 + 1] [i_6] [i_6 + 1] [i_8]) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0)))))));
                            }
                            /* vectorizable */
                            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                            {
                                var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5 - 3] [i_9]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [(signed char)8] [i_1] [i_1])) && (((/* implicit */_Bool) var_2))))))));
                                arr_34 [20LL] [i_1] [(_Bool)1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                            }
                            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                            {
                                arr_39 [i_0] [i_0] [i_0] [i_6] [i_10] = ((/* implicit */long long int) ((var_9) >= (((((/* implicit */_Bool) 1140359207)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6814950071400295479ULL)))));
                                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_6 + 1] [i_6 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_6 + 1] [i_6 + 1])))) * ((+(((/* implicit */int) var_3))))));
                            }
                            var_23 ^= ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_11 = 4; i_11 < 21; i_11 += 1) 
                {
                    for (signed char i_12 = 3; i_12 < 23; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(154414930254270025LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) * (var_6)))) : (var_9))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_12])) ? (var_5) : (((/* implicit */unsigned long long int) arr_37 [i_13] [i_12 - 1] [(short)4] [i_11] [i_1] [(unsigned char)18] [(short)4]))))) ? (((((/* implicit */unsigned long long int) arr_37 [i_0] [i_0] [i_0] [i_0] [17U] [i_0] [i_0])) / (var_5))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (var_10)))))));
                                var_25 = ((/* implicit */int) var_3);
                                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0]))) | (arr_11 [i_0] [i_1] [i_11] [i_11 - 1] [i_12 - 2] [i_13])))))) ? (((((/* implicit */long long int) 2018960755)) - (7012920985092908367LL))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)49572)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_21 [12U] [i_11 + 3] [i_12 + 1] [i_13])))) | (((/* implicit */int) min((var_7), (arr_42 [i_0] [6LL] [i_11] [i_1]))))))))))));
                                var_27 = ((/* implicit */unsigned int) (~((-((-(((/* implicit */int) arr_32 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
