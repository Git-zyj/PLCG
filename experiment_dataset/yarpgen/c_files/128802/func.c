/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128802
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) / (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2234923306787342919LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))))));
        var_15 &= ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_0 [i_0]))) * (((/* implicit */int) arr_0 [i_0]))));
        var_16 = ((/* implicit */short) (~(((/* implicit */int) var_12))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((int) 7219129607455894035ULL));
    }
    var_17 = var_3;
}
