/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139442
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_10))));
        var_21 |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)-1)) ? (-10LL) : (10LL)))));
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [(short)11] [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (+(var_11))))));
        var_23 = ((/* implicit */short) var_13);
    }
    var_24 = ((/* implicit */short) (unsigned short)65535);
}
