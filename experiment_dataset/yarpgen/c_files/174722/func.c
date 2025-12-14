/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174722
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 4; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_15 -= (-(((/* implicit */int) (_Bool)1)));
                                var_16 *= ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned char)172)) ? (arr_3 [i_4] [i_3 + 1] [i_4]) : (arr_3 [i_4] [i_3 + 1] [i_4]))));
                                var_17 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (_Bool)0)), (max((1099511627775ULL), (arr_5 [i_2 - 4] [i_2] [i_2])))));
                                var_18 ^= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_4] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((425231233U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 1; i_5 < 23; i_5 += 4) 
                    {
                        var_19 -= ((/* implicit */unsigned short) var_9);
                        var_20 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned short)0)), (((((/* implicit */_Bool) arr_6 [i_5] [i_5] [i_5 - 1] [i_5 + 1])) ? (min((((/* implicit */unsigned int) var_5)), (var_4))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1802519583)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                    }
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_2]))));
                        var_22 *= ((/* implicit */unsigned int) min(((+(arr_8 [i_1] [i_2] [i_2] [i_1]))), (((((/* implicit */_Bool) arr_13 [i_2 - 2] [i_6] [i_2 - 2] [i_6] [i_0])) ? (((/* implicit */int) var_10)) : (arr_8 [i_6] [i_6] [i_6] [i_1])))));
                    }
                    for (int i_7 = 4; i_7 < 22; i_7 += 4) 
                    {
                        var_23 = var_14;
                        var_24 -= ((/* implicit */unsigned char) ((unsigned long long int) (~(((/* implicit */int) (_Bool)1)))));
                        var_25 *= ((/* implicit */unsigned char) var_7);
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 834109334)))))) >= (min((((/* implicit */long long int) arr_20 [i_2] [i_2] [i_1] [i_1] [i_0])), (1783648746422767888LL)))))), (max((arr_16 [i_7 - 1] [i_7 + 1] [i_7] [i_7]), (((/* implicit */unsigned int) max((arr_6 [i_7] [i_2] [i_1] [i_0]), (((/* implicit */short) (unsigned char)228))))))))))));
                    }
                }
            } 
        } 
    } 
    var_27 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (((long long int) var_6))))), (((unsigned long long int) var_11))));
}
