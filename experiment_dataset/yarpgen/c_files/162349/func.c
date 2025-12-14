/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162349
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((int) (unsigned short)65527));
        arr_3 [0LL] [(unsigned char)7] |= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))));
        var_12 ^= ((_Bool) (_Bool)1);
        var_13 ^= ((/* implicit */unsigned short) (~(11179257856883198002ULL)));
    }
    var_14 ^= ((/* implicit */unsigned long long int) var_9);
    var_15 = ((/* implicit */_Bool) min((1123700883587072LL), (((/* implicit */long long int) (-(((unsigned int) var_3)))))));
    var_16 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */long long int) ((_Bool) (signed char)0)))));
}
