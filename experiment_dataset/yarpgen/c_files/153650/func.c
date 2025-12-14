/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153650
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_12 = ((/* implicit */short) var_9);
        var_13 = ((/* implicit */unsigned int) ((arr_0 [i_0] [i_0]) >= (((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)14422)))))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)22288))))) <= (((/* implicit */int) ((short) arr_0 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) 274494128);
        arr_5 [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (var_6) : (arr_2 [i_1] [i_1])));
    }
    var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_11) : (max(((~(((/* implicit */int) (short)-22297)))), (-484976981)))));
    var_17 = ((/* implicit */unsigned int) var_1);
    var_18 = ((/* implicit */int) (~(((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : ((~(var_7))))) : ((+(((((/* implicit */unsigned long long int) var_11)) % (548858478284211776ULL)))))));
}
