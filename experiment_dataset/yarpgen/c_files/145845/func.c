/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145845
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
    var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))) : (-3700854993710005735LL)));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) 1559675240);
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8454634217826470800ULL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0 + 1]))));
    }
    var_18 = ((/* implicit */short) var_11);
    var_19 = ((/* implicit */_Bool) var_9);
    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */short) var_2)))))));
}
