/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156535
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
    var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)22156))) & (var_5)));
    var_19 = ((/* implicit */unsigned long long int) var_15);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
        var_21 = (+(-10));
        var_22 = ((/* implicit */int) arr_0 [i_0 + 3]);
        var_23 = ((/* implicit */unsigned char) 9);
        var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_1 [i_0 + 3] [i_0]))))));
    }
    var_25 = ((/* implicit */long long int) var_8);
}
