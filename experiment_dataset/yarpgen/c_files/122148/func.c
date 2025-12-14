/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122148
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (signed char)53))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */unsigned long long int) arr_2 [i_0 + 1]))));
    }
    var_21 &= ((/* implicit */short) var_4);
    var_22 = ((/* implicit */unsigned char) max(((+(var_12))), (((/* implicit */int) ((((/* implicit */int) ((var_12) == (-1809023569)))) != (((/* implicit */int) var_17)))))));
}
