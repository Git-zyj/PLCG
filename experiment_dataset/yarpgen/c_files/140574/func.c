/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140574
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_4]))) - (arr_10 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])))) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [i_1 - 1] [i_1 + 1] [(signed char)3] [i_1 - 1] [i_1 - 1])) <= (((/* implicit */int) var_13))))) : (((/* implicit */int) (short)-31986))));
                                var_17 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((/* implicit */int) (short)-31986)) : (((/* implicit */int) arr_5 [i_1 + 1])))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_1 + 1] [i_1 - 1] [(unsigned char)4] [i_1 - 1] [i_1 - 1])) || (((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 + 1])))))));
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max(((-(((((/* implicit */_Bool) 6510983459108414546ULL)) ? (((/* implicit */int) (unsigned short)40726)) : (((/* implicit */int) (unsigned short)17877)))))), (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 1])))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) 866967173U))));
                arr_15 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0])) < (((/* implicit */int) var_6))))) << (((((/* implicit */int) arr_5 [i_0])) - (44693)))))) ? (((((/* implicit */unsigned int) ((((((/* implicit */int) var_14)) + (2147483647))) >> (((var_7) - (378254876693455225ULL)))))) % (max((286895975U), (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_1 - 1] [i_0])))))) : (((unsigned int) ((unsigned char) arr_9 [i_0] [i_0] [i_0] [i_0])))));
                arr_16 [i_0] |= ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */signed char) var_9)), (arr_8 [i_1 - 1])))) < (((/* implicit */int) max((arr_0 [i_1 + 1]), (((/* implicit */short) arr_8 [i_1 - 1])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 611636512U)) || (((/* implicit */_Bool) var_4)))))));
    var_22 *= ((/* implicit */short) (((((!(((/* implicit */_Bool) var_13)))) ? (max((762500897U), (27U))) : (min((var_12), (((/* implicit */unsigned int) var_0)))))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
}
