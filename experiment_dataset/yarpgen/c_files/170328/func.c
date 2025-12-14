/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170328
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_13 ^= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 + 2])) ? (((/* implicit */unsigned long long int) arr_4 [i_1 + 2] [i_1 - 1])) : (18446744073709551615ULL))));
                var_14 = ((/* implicit */long long int) (-((+(((arr_0 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)13] [i_1])))))))));
            }
        } 
    } 
    var_15 = max((var_4), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))));
    var_16 = var_8;
}
