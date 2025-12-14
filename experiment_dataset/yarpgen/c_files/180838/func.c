/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180838
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
    var_17 -= var_8;
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 |= ((/* implicit */int) (unsigned char)144);
        var_19 = ((/* implicit */unsigned char) (_Bool)1);
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_20 *= ((/* implicit */unsigned long long int) (unsigned char)135);
        arr_5 [0] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)112);
    }
    var_21 |= ((/* implicit */short) var_11);
    var_22 = ((/* implicit */int) var_16);
}
