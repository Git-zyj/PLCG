/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117970
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
    var_19 = ((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) var_8))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])) / (((/* implicit */int) arr_1 [i_0 - 2] [i_0]))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)7)) << (((((/* implicit */int) (unsigned short)65529)) - (65512)))));
    }
}
