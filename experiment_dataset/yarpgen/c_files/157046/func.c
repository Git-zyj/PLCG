/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157046
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
    var_17 = ((2449116669U) < (((/* implicit */unsigned int) (-2147483647 - 1))));
    var_18 = ((/* implicit */short) ((((3199817693370520990ULL) << (((/* implicit */int) var_1)))) >> (((((/* implicit */int) var_12)) + (73)))));
    var_19 *= var_6;
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) 1845850630U))));
        arr_2 [(unsigned short)4] |= ((/* implicit */long long int) ((((8192U) ^ (((/* implicit */unsigned int) arr_0 [i_0 - 1])))) & (((2449116694U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-115)))))));
    }
}
