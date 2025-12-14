/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171053
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
    var_20 = ((/* implicit */_Bool) min((((/* implicit */long long int) 1679773521)), (21LL)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) 3817076641U)) && (((/* implicit */_Bool) 0LL)))))));
        var_22 |= ((/* implicit */int) var_16);
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_23 ^= ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_2)))), ((~(((/* implicit */int) max((var_12), (arr_2 [i_1]))))))));
        var_24 *= ((/* implicit */_Bool) 1370696414);
        var_25 = ((/* implicit */short) max((((((/* implicit */_Bool) -3587564056040201212LL)) ? (((/* implicit */long long int) 1023)) : ((~(-3587564056040201224LL))))), (((/* implicit */long long int) 1023))));
        arr_5 [i_1] [i_1] = (~((~(-1308745290))));
    }
    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) var_4))));
}
