/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176459
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) ((arr_0 [i_0]) / (((/* implicit */int) arr_1 [i_0]))));
        arr_2 [0LL] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) 3212527084U)) & (2204878400013320512ULL)));
        var_13 ^= ((/* implicit */signed char) (~(((unsigned long long int) var_9))));
    }
    var_14 = ((/* implicit */unsigned short) ((unsigned int) ((int) ((unsigned int) var_8))));
    var_15 = ((/* implicit */_Bool) (-((-(((long long int) var_6))))));
    var_16 = ((/* implicit */unsigned short) var_3);
    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_1))))))));
}
