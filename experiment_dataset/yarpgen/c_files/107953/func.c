/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107953
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
    var_12 &= ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_13 = var_2;
                arr_6 [i_0] = ((((/* implicit */_Bool) arr_1 [10ULL])) ? (max((arr_3 [i_0]), (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) (~(min((var_6), (1873915359U)))))));
                arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 919935472U))))) ? (((max((var_3), (arr_3 [i_0]))) + (((/* implicit */unsigned long long int) var_1)))) : (((arr_5 [i_0] [i_0 + 2] [8U]) - (arr_5 [i_0] [i_0 + 1] [i_0 - 1])))));
            }
        } 
    } 
}
