/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13300
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551591ULL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)(-127 - 1)))))) / (((arr_5 [i_0] [i_0]) * (((/* implicit */unsigned long long int) 3LL)))))));
                var_11 ^= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (arr_3 [(signed char)2] [6ULL]))) != (max((((arr_3 [i_0 - 1] [2ULL]) >> (((((/* implicit */int) var_9)) + (119))))), (max((0ULL), (((/* implicit */unsigned long long int) var_1))))))));
            }
        } 
    } 
    var_12 = ((((/* implicit */_Bool) var_7)) ? (13530291488823370052ULL) : (var_6));
    var_13 = ((unsigned long long int) min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (18446744073709551615ULL)));
    var_14 = ((long long int) var_5);
}
