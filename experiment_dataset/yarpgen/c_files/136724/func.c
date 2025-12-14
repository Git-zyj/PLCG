/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136724
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
    var_17 = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
    var_18 &= ((/* implicit */short) (-(((/* implicit */int) var_9))));
    var_19 = ((/* implicit */int) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((long long int) -2144344260));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) -7244793999737063535LL));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((18446744073709551615ULL) << (((((/* implicit */int) (unsigned char)242)) - (239))))))));
    }
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_12))));
}
