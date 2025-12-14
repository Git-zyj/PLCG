/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115820
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
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((7963051806704635378ULL) & (((/* implicit */unsigned long long int) 0LL)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (((((/* implicit */int) var_4)) % (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_4 [i_0])))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (short i_3 = 3; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_21 |= ((/* implicit */long long int) min((((/* implicit */unsigned int) min(((signed char)54), (((/* implicit */signed char) arr_10 [i_0 - 1] [i_1 - 3]))))), (((arr_10 [i_0 + 2] [i_1 - 2]) ? (var_10) : (((/* implicit */unsigned int) arr_0 [i_2] [i_1 - 3]))))));
                                var_22 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (~(0LL)))) ? (((/* implicit */int) arr_4 [i_0])) : ((-(1542362687)))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [6] [i_1 + 2])), (var_10)))), (((var_9) ^ (arr_9 [8ULL] [i_1] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16))));
}
