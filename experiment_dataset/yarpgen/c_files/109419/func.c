/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109419
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
    var_12 ^= ((/* implicit */int) var_3);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_13 |= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)91))));
        arr_2 [i_0] = ((/* implicit */_Bool) (unsigned char)24);
    }
    for (signed char i_1 = 1; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_14 = var_1;
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((_Bool) arr_1 [i_1])))) ? (((((/* implicit */_Bool) ((int) arr_3 [i_1]))) ? ((+(arr_4 [i_1 + 1]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_1]))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)59129)))))));
    }
    var_15 = ((/* implicit */int) ((short) ((-1) * (var_5))));
}
