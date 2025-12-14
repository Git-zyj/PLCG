/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113670
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
    var_16 = ((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) <= (((/* implicit */int) (signed char)5))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) ((int) arr_0 [i_0]));
        arr_2 [i_0] = ((/* implicit */_Bool) ((var_0) | (var_5)));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) (signed char)-107)))))));
        var_19 += ((/* implicit */unsigned char) var_15);
    }
}
