/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107680
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
    var_13 |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 379113913093100188LL)) ? (((-5406873324911407300LL) - (0LL))) : (((/* implicit */long long int) var_4)))), (((-1LL) / (14LL)))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */_Bool) min(((+(0LL))), (((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_0 [i_2] [i_1 + 1])))));
                    arr_9 [i_0 - 1] [i_1 - 2] = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (0LL) : (var_5));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0 + 1] [i_0 + 1] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (var_5)))) || (((/* implicit */_Bool) max((570956785530520327LL), (4711575212864941214LL)))))) || (((/* implicit */_Bool) (-(((((/* implicit */long long int) arr_7 [2LL] [i_1] [i_2] [i_4])) / (570956785530520327LL))))))));
                                var_15 = var_3;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) min((var_16), (((((/* implicit */_Bool) var_3)) ? (var_5) : (((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_1))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
}
