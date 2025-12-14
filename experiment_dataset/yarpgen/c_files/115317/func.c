/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115317
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((_Bool) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((((long long int) (short)-32741)) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) - (148)))));
    }
    var_14 &= ((/* implicit */unsigned char) max((min(((~(var_0))), (((/* implicit */int) var_12)))), (((/* implicit */int) var_6))));
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned char)129), (var_10)))))))));
}
