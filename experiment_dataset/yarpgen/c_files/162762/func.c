/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162762
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
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)0)), (18446744073709551600ULL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65535))));
        arr_2 [12ULL] &= ((/* implicit */unsigned long long int) arr_1 [4ULL]);
        var_18 += ((/* implicit */unsigned short) arr_0 [(unsigned short)22]);
    }
    var_19 += ((/* implicit */unsigned long long int) (unsigned short)3641);
}
