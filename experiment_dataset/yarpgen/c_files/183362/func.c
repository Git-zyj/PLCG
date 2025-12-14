/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183362
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_1 [i_0 - 2] [i_0 - 2])) <= ((~(17540831023625783839ULL)))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_1 [i_0] [i_0 - 2]))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 1]))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_0 + 2])) * (((/* implicit */int) var_4))));
    }
    var_22 = ((/* implicit */unsigned char) var_6);
    var_23 = ((/* implicit */int) var_2);
    var_24 = ((/* implicit */_Bool) var_2);
    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (max((17540831023625783839ULL), (((/* implicit */unsigned long long int) var_9))))))) && (((/* implicit */_Bool) ((unsigned short) var_4)))));
}
