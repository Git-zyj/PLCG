/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167445
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
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [(signed char)2] [i_0]))) > (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))) + (var_14))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (1146299561U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [(unsigned char)3] [i_0]))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_14 [i_4] [3] [i_4 - 2] [i_4] [5] [2U] &= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_9 [i_4] [i_4 + 2] [i_4] [i_3])) >> ((((~(3299771112U))) - (995196176U))))) >= (((/* implicit */int) arr_2 [i_0] [(_Bool)1] [i_4 - 2]))));
                                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+(max(((-(3299771112U))), (((/* implicit */unsigned int) (_Bool)0)))))))));
                                arr_15 [i_0] [i_1] [i_0] [(unsigned short)0] [i_3] [i_0] [3LL] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_3 [i_3] [9LL] [i_0])), (max((((/* implicit */unsigned long long int) ((3148667756U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65511)))))), (arr_1 [i_4 + 2])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
