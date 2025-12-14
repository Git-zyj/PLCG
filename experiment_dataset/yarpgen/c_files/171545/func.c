/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171545
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
    var_17 = ((/* implicit */long long int) ((int) min((var_0), (((/* implicit */unsigned long long int) ((int) -2098492707))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_18 ^= min((((unsigned long long int) ((long long int) 1148417904979476480LL))), (((/* implicit */unsigned long long int) arr_2 [i_0])));
        arr_4 [i_0] = arr_2 [i_0];
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_3 [i_0 + 1]) | (arr_3 [i_0 - 1])))) ? ((+(arr_3 [i_0 + 1]))) : ((~(arr_3 [i_0 - 1])))));
        var_20 = arr_1 [i_0];
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (min((((/* implicit */long long int) (-2147483647 - 1))), (arr_5 [i_1]))) : (((long long int) -1148417904979476472LL)))));
        arr_10 [i_1] [i_1] = ((/* implicit */long long int) ((int) 1148417904979476482LL));
    }
}
