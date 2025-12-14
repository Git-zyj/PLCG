/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121517
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
    var_16 = ((/* implicit */unsigned char) ((min((((int) (signed char)-32)), (((((/* implicit */int) var_12)) << (((((/* implicit */int) (signed char)-42)) + (54))))))) < (((/* implicit */int) var_8))));
    var_17 = ((/* implicit */short) max((var_17), ((short)15989)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) (signed char)44);
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 3]))))) & (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0 - 2])))))));
        var_19 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
}
