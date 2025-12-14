/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142725
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
    var_10 ^= var_3;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */unsigned long long int) (-(arr_4 [i_0] [i_0] [i_1])))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])) : (var_2)))));
                var_12 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned short)18038))))) : (((unsigned long long int) arr_0 [i_0])))));
            }
        } 
    } 
}
