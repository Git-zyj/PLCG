/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109953
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
    var_16 = ((/* implicit */unsigned int) var_7);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? ((~(min((7528156642486844228ULL), (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-14474)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) (~(min((((/* implicit */int) var_1)), (var_12)))));
        var_19 = ((/* implicit */short) var_15);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_20 = ((/* implicit */signed char) var_2);
        arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)229)) > (1858398063)));
    }
}
