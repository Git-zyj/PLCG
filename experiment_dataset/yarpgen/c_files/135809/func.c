/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135809
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
    var_18 -= var_8;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) (signed char)74)) != (arr_3 [i_0]))));
    }
}
