/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163779
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
    var_18 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) arr_3 [i_0]);
        var_20 = arr_1 [i_0 - 1];
    }
    for (signed char i_1 = 1; i_1 < 20; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) arr_7 [i_1]);
        var_21 = ((/* implicit */short) ((((/* implicit */int) var_5)) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) var_12))))));
    }
}
