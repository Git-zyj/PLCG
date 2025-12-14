/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142049
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
    var_11 ^= ((/* implicit */long long int) max((((unsigned int) var_0)), (((/* implicit */unsigned int) var_0))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (short i_3 = 4; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_12 = ((13993233268338350143ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9673))));
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0 - 3] [8LL] [8LL])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [7U] [i_1 - 3] [i_1] [i_1])) ? (((/* implicit */int) ((((/* implicit */int) var_0)) > (577021670)))) : (((/* implicit */int) var_6)))))));
                            var_14 = ((/* implicit */long long int) (unsigned short)1);
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 - 1] [i_1] [i_1 - 1])) ? (arr_4 [i_1 - 3] [i_1 + 1] [(unsigned short)0] [i_1]) : (arr_4 [i_1 + 1] [i_1 - 3] [i_1 + 1] [i_1]))), (((/* implicit */long long int) ((signed char) arr_4 [i_1 - 2] [i_1 - 1] [12U] [i_1 - 1])))));
                var_16 = ((/* implicit */unsigned int) var_2);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) var_1);
}
