/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13084
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
    var_14 = ((/* implicit */long long int) var_5);
    var_15 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (max((((/* implicit */unsigned long long int) min((var_13), (var_13)))), (((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [10ULL] [i_1] |= ((max((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [5U]))), (((((/* implicit */_Bool) var_8)) ? (var_4) : (arr_2 [i_0]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [12LL] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_12 [i_4] [i_3] [i_2] [0] [6LL] [i_0 + 2]))))), (arr_2 [i_0])))) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0 + 4] [i_0]))));
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) max((((max((((/* implicit */unsigned long long int) arr_0 [i_0 - 2])), (arr_1 [(signed char)1]))) ^ (((((/* implicit */_Bool) arr_12 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0 - 2])) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [8ULL] [i_3] [(signed char)6]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_3] [i_2]))) / (var_1)))) ? (min((arr_9 [i_0] [i_0] [i_2] [i_3] [i_4]), (((/* implicit */long long int) arr_13 [i_0] [i_1] [i_1] [i_3] [i_4])))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_8 [i_3] [i_0] [i_0]), (arr_8 [i_3] [(signed char)10] [i_0])))))))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */signed char) var_3);
            }
        } 
    } 
}
