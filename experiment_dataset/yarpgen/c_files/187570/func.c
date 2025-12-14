/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187570
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
    var_14 = ((/* implicit */short) min((var_14), (var_1)));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (max((max((var_5), (((/* implicit */int) var_0)))), (((/* implicit */int) max(((short)-15865), (var_1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)240)))))));
    var_16 = ((/* implicit */short) var_12);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)36))));
        var_17 = ((/* implicit */signed char) (short)-22952);
    }
}
