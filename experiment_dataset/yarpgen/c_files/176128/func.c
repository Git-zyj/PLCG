/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176128
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_8))));
    var_13 = ((/* implicit */short) (((+(((/* implicit */int) var_9)))) * ((~((-(((/* implicit */int) var_4))))))));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        var_14 ^= ((/* implicit */unsigned long long int) var_6);
        var_15 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)64))));
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 11; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_1 [i_1 - 2] [i_1 - 1]))));
        var_17 = arr_0 [i_1] [i_1 + 1];
    }
    var_18 = ((/* implicit */int) var_3);
}
