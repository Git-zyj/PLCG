/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10017
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_10 += ((/* implicit */short) var_4);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)43919));
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
        arr_6 [i_1] = ((/* implicit */long long int) (short)-1);
    }
    var_12 ^= ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
    var_13 = ((/* implicit */_Bool) var_5);
    var_14 = ((/* implicit */_Bool) (signed char)-18);
}
