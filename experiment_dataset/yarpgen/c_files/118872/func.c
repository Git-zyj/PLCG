/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118872
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
    var_16 = ((/* implicit */unsigned short) ((((var_12) >> (((((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */int) var_15)))) + (220490444))))) - (((((((/* implicit */_Bool) -1490738209)) ? (1100398468) : (1100398462))) << ((((((+(-1100398494))) + (1100398522))) - (28)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) -1100398494);
        var_18 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        var_19 ^= ((/* implicit */short) (~(min((((/* implicit */int) ((short) arr_0 [i_0] [i_0]))), (min((((/* implicit */int) arr_0 [i_0] [i_0])), (var_10)))))));
    }
}
