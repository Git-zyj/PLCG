/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115646
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
    for (unsigned long long int i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        var_19 = max((arr_2 [i_0 - 1]), (((min((0ULL), (18446744073709551615ULL))) / (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (var_12) : (8935141660703064064ULL))))));
        var_20 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9511602413006487576ULL))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            arr_5 [i_0] [i_0 - 2] [i_1] = (-(arr_1 [i_0 - 3]));
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((unsigned long long int) var_14)) : (arr_1 [i_0 - 3])))));
            var_22 = arr_1 [i_0 + 1];
            var_23 = (~(((((/* implicit */_Bool) 14712059943132901756ULL)) ? (var_16) : (arr_1 [13ULL]))));
        }
        arr_6 [14ULL] = (-(arr_0 [i_0 - 1]));
    }
    var_24 |= var_14;
}
