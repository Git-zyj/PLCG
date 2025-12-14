/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177370
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_10 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_3 [0ULL] [6ULL] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_3 [8U] [6U] [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_1] [i_1 + 2] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_0] [i_3] [i_1 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_3] [(signed char)3] [i_1 + 1])))))));
                            var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [(unsigned short)10] [i_1 - 2] [i_3])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1 - 1] [i_3])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_1 - 1] [i_1])))))));
                            arr_11 [i_1] = ((/* implicit */unsigned int) ((long long int) arr_5 [i_0] [i_1 + 1] [i_2] [9LL]));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_0]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))));
}
