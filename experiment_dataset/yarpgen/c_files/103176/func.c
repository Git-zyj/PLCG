/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103176
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) min((var_12), (((long long int) var_11))));
        var_13 = ((((arr_1 [i_0]) + (9223372036854775807LL))) << (((((arr_0 [i_0]) + (1069248891478626418LL))) - (34LL))));
        arr_3 [i_0] [i_0] = arr_1 [i_0];
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 11; i_1 += 3) 
    {
        arr_6 [i_1] = ((((/* implicit */_Bool) var_0)) ? (((-3076498788113433241LL) & (3689612476910379278LL))) : (arr_4 [i_1 - 3] [i_1 + 2]));
        var_14 = ((3076498788113433241LL) << (((((arr_4 [i_1 + 1] [i_1 + 1]) + (5828519853219105313LL))) - (7LL))));
    }
    var_15 &= ((min((-3990857977946479655LL), (-3076498788113433241LL))) & (max((((var_8) / (var_10))), (var_10))));
}
