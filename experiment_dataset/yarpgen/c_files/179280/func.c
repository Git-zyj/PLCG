/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179280
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
    var_17 = ((/* implicit */int) var_5);
    var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : ((~(((/* implicit */int) var_4))))))));
    var_19 |= ((/* implicit */short) var_7);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0)))))));
        arr_2 [i_0 - 1] [i_0 - 1] = (-(((/* implicit */int) var_8)));
    }
}
