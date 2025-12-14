/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158518
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))) >> (((min((((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (var_1)))), (var_0))) - (3228723693LL)))));
    var_12 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                var_14 -= arr_5 [i_1];
                var_15 = ((/* implicit */signed char) ((((/* implicit */int) max(((unsigned char)213), (((/* implicit */unsigned char) (signed char)42))))) >> (((((/* implicit */int) arr_4 [i_1] [2ULL])) - (31589)))));
                var_16 ^= ((/* implicit */unsigned long long int) arr_0 [i_0]);
            }
        } 
    } 
}
