/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169134
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
    var_10 |= var_3;
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */short) var_7);
        var_12 = ((/* implicit */unsigned long long int) var_7);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1 - 1] &= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2))))))))));
        arr_6 [i_1] = ((/* implicit */_Bool) (~(min((arr_4 [i_1]), (((/* implicit */unsigned long long int) var_3))))));
    }
    var_13 = ((/* implicit */unsigned long long int) var_2);
}
