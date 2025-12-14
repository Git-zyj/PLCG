/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14323
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_16 = -1;
        var_17 = ((/* implicit */int) var_15);
        var_18 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) var_7);
        var_20 = ((/* implicit */unsigned long long int) -1672890423);
    }
    var_21 = ((/* implicit */unsigned char) max((max((var_12), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) var_6))));
    var_22 = ((/* implicit */unsigned char) max((var_3), (((/* implicit */int) (unsigned char)1))));
    var_23 = ((/* implicit */unsigned char) var_0);
}
