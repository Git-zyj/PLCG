/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130987
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
    var_18 = ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (signed char)-29)));
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_17))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [5ULL] [i_0] [i_1 - 2] = ((/* implicit */int) ((((unsigned long long int) max((15LL), (((/* implicit */long long int) (short)-15132))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (var_10))))));
                arr_5 [i_0] = ((/* implicit */long long int) var_2);
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (short)15105);
}
