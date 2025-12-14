/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135279
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / ((~(var_19)))));
    var_21 -= ((/* implicit */_Bool) var_17);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_22 |= ((/* implicit */unsigned char) var_2);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)247))) - (384ULL))) << ((((+(var_10))) + (5872178708836598046LL)))));
            var_23 = ((/* implicit */signed char) var_6);
            var_24 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)9858)) >> (((((/* implicit */int) (short)-17083)) + (17094)))));
        }
    }
    var_25 ^= var_9;
    var_26 = ((/* implicit */unsigned short) (+(max((((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) var_16))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_16))))))));
}
