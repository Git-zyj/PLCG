/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135182
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
    for (unsigned int i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) ((_Bool) (~(12922741679881248615ULL))));
        var_16 = ((/* implicit */long long int) var_10);
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
    {
        var_17 = arr_3 [i_1];
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_0 [i_1 + 2] [i_1 + 2]))));
            var_19 = ((/* implicit */signed char) 3533543276U);
        }
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((long long int) max((var_2), (0U)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (2389912126U)))) <= ((~(12922741679881248615ULL)))))))));
}
