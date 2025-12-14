/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101266
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_10 ^= ((/* implicit */signed char) (+((~(arr_2 [i_0 + 3])))));
        var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0 + 2])), ((-(arr_2 [i_0 + 1]))))))));
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((max((var_4), (((/* implicit */int) var_1)))), ((~(arr_2 [i_0]))))))));
        var_12 -= ((/* implicit */long long int) (+(((/* implicit */int) min((arr_1 [i_0 + 1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0]))))))))));
    }
    var_13 ^= ((/* implicit */unsigned int) min((max((((/* implicit */int) var_2)), (var_3))), (((/* implicit */int) var_1))));
}
