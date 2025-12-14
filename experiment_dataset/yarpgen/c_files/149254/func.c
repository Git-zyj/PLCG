/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149254
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
    var_16 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((9223372036854775807LL) != (var_0)))) : ((-(2147483647))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_17 = max((arr_1 [i_1]), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])));
                var_18 = ((/* implicit */long long int) min((var_18), (min((8589869056LL), (8589869056LL)))));
                var_19 = ((/* implicit */unsigned short) (~(max((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)50)) ? (8589869056LL) : (8589869056LL))))))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+(18446744073709551615ULL))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (min((max((0ULL), (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_13)))))))));
}
