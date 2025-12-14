/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166979
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_3))));
        var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) -7209856473732804153LL)) ? (arr_1 [0LL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))), (min((arr_1 [i_0]), (((/* implicit */unsigned int) (_Bool)1))))));
    }
    var_14 ^= ((/* implicit */unsigned int) var_3);
    var_15 *= ((/* implicit */signed char) ((unsigned char) var_10));
}
