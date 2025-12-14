/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113642
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((unsigned long long int) arr_1 [i_0] [i_0]));
        var_16 += ((((((/* implicit */_Bool) var_7)) ? (-1LL) : (arr_1 [i_0] [i_0]))) & (((/* implicit */long long int) 331741257U)));
    }
    var_17 += ((/* implicit */unsigned char) ((short) 4044548075U));
    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) 144115188075855871LL)) ? (-1LL) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) < (((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) var_11))))))));
}
