/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121960
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
    var_10 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)0)), (1180675059U)))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)59))) | (var_1)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */short) arr_0 [(unsigned short)4] [i_3 + 2]);
                                arr_12 [i_3] [i_1] [i_3] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((arr_7 [i_0] [i_1] [i_2] [i_4] [i_4 - 1] [i_1]), (((/* implicit */unsigned int) max((var_6), (((/* implicit */unsigned short) arr_0 [i_2] [i_2])))))))), (((((/* implicit */_Bool) 1180675059U)) ? (11366143568412561150ULL) : (((/* implicit */unsigned long long int) (-(arr_7 [i_4] [i_2 + 1] [i_2] [i_2 + 1] [i_1] [i_0]))))))));
                            }
                        } 
                    } 
                } 
                var_12 |= ((/* implicit */signed char) ((((unsigned long long int) var_2)) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_1] [i_0])), (arr_11 [i_1] [i_0] [i_0] [i_0] [i_0])))))));
                var_13 -= ((/* implicit */short) max((((unsigned int) ((unsigned int) var_7))), (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [(short)12] [i_1] [i_1]))) ^ (arr_7 [(unsigned char)3] [i_1] [i_1] [19U] [i_0] [i_0]))), (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_1]))))));
                var_14 = ((/* implicit */_Bool) max((var_14), ((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_0] [i_0])))))))));
                var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_4 [16U] [16U] [i_0])), (var_6))))))), (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_11 [i_0] [(unsigned short)16] [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_0])))) + (((/* implicit */int) var_4))))));
            }
        } 
    } 
}
