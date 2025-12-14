/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151052
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
    var_17 = ((/* implicit */unsigned long long int) (unsigned short)7157);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_18 &= ((/* implicit */unsigned short) var_14);
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned char) max((((/* implicit */int) (unsigned short)58379)), ((-2147483647 - 1)))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) ^ (((((/* implicit */int) (unsigned short)7137)) & (((/* implicit */int) var_1))))));
        arr_5 [16LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [5ULL])) ? (4354620209116420879LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58366)))));
    }
}
