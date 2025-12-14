/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151670
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
    var_15 = ((/* implicit */unsigned short) (-((+(var_8)))));
    var_16 = ((/* implicit */unsigned int) 9223372036854775807LL);
    var_17 += ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_18 ^= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) 9223372036854775801LL)) ? (-9223372036854775807LL) : (((/* implicit */long long int) arr_1 [i_0] [i_0])))));
        arr_3 [i_0] = max((4890211495314657147LL), (-9223372036854775807LL));
    }
}
