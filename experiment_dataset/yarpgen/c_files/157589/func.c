/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157589
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
    var_18 = ((/* implicit */unsigned char) ((_Bool) var_10));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) <= (4294967295U)))))))));
        arr_2 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) arr_1 [i_0])), (((arr_0 [i_0] [i_0]) | (((0LL) ^ (0LL)))))));
        var_20 = ((/* implicit */_Bool) arr_1 [i_0]);
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) var_8);
        var_22 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_4 [i_1] [i_1])), (((1073741568U) << ((((+(-14))) + (17)))))));
    }
}
