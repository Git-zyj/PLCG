/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108893
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
    var_12 = 1524477085U;
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-20978))))) : ((((!(var_5))) ? (((/* implicit */int) ((_Bool) var_11))) : ((~(((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((1100880106), (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (345071323U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-20978))))))))))))));
        arr_2 [i_0 - 1] = ((/* implicit */unsigned int) ((long long int) ((arr_1 [i_0]) == (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))))))));
        var_15 *= 2770490210U;
    }
    var_16 = ((/* implicit */int) (short)20960);
}
