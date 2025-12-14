/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173118
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
    for (signed char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] |= ((/* implicit */short) (!(arr_0 [13LL])));
        var_13 ^= var_3;
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) (((+(var_6))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))))));
        arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 422705380)) ? (-422705381) : (((/* implicit */int) (_Bool)1))));
    }
}
