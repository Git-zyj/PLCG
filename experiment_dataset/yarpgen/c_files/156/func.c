/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156
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
    var_17 = ((/* implicit */signed char) ((unsigned short) var_1));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) arr_0 [i_0]);
        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)67))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1])) - (((/* implicit */int) arr_3 [i_1] [i_1]))));
        arr_4 [i_1] = ((/* implicit */unsigned char) ((unsigned short) arr_2 [i_1]));
        var_21 = ((short) arr_0 [i_1]);
    }
}
