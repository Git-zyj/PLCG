/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181474
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) var_1)))))) ? (((((unsigned long long int) var_1)) & (((unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)65522)) : (((/* implicit */int) var_4)))))))));
    var_15 = ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) var_2)), (var_6)))))) ? (((((/* implicit */_Bool) (~(var_0)))) ? (var_0) : (((/* implicit */long long int) var_9)))) : (var_7));
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_7))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) arr_2 [i_0])), (2358129826U))) ^ (((/* implicit */unsigned int) max((-1724691696), (((/* implicit */int) (unsigned char)7)))))))), (max((max((17179869183ULL), (17179869183ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3985772028065733279LL)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) (unsigned char)207)))))))));
        var_18 |= ((/* implicit */unsigned long long int) ((unsigned short) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)31)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_1]))));
        arr_5 [i_1] [i_1] = ((/* implicit */int) ((((arr_4 [i_1] [i_1]) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))))) - (((arr_3 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                {
                    arr_12 [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_8 [i_1]);
                    /* LoopNest 2 */
                    for (signed char i_4 = 3; i_4 < 10; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            {
                                arr_18 [5] = (!(((/* implicit */_Bool) min((((-1LL) ^ (1023LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_11 [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [i_4]))))))))));
                                arr_19 [i_1] = ((/* implicit */int) ((min((arr_4 [i_4 + 1] [i_4 + 1]), (-1023LL))) * (((long long int) arr_6 [i_1] [i_4] [i_4 - 1]))));
                                arr_20 [i_1] [4LL] [i_3] [i_4] [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((int) arr_6 [i_3] [i_2] [i_3]));
                                arr_21 [3LL] [i_3] [i_3] [i_3] [(unsigned short)10] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -6119786887446847152LL)) <= (2305561534236983296ULL)))), (arr_2 [i_3])));
                                var_20 = ((/* implicit */unsigned int) min(((-(arr_16 [i_4 - 2] [i_4] [i_4 - 1] [i_5] [i_5] [i_5] [i_5]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4] [i_4 - 1] [i_4] [i_4])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_21 = ((/* implicit */int) (unsigned short)65529);
}
