/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132356
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
    var_11 = ((/* implicit */short) min((min((((/* implicit */int) (signed char)-70)), ((+(((/* implicit */int) (signed char)-70)))))), ((-(((/* implicit */int) (signed char)-87))))));
    var_12 = ((/* implicit */short) (signed char)69);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_13 &= ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_1 [i_0])) - (18)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (-9115278060010856981LL))));
        var_14 = ((/* implicit */short) ((signed char) var_0));
        var_15 -= ((/* implicit */signed char) (-(max((((/* implicit */long long int) ((short) arr_1 [i_0]))), ((-(var_3)))))));
    }
    var_16 = var_7;
    var_17 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((~(-9115278060010856981LL))))))));
}
