/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110609
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
    for (long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        var_20 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (((_Bool)1) ? (1524415540791712378LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1])))))) ? ((+(18446744073709551615ULL))) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (2125232187U))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((18446744073709551615ULL) * (((((/* implicit */_Bool) (((_Bool)0) ? (var_8) : (arr_2 [i_0 - 1])))) ? (((((/* implicit */_Bool) 0ULL)) ? (11061002613332762149ULL) : (((/* implicit */unsigned long long int) 2147483647)))) : (((/* implicit */unsigned long long int) var_10))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 15532839167351119486ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))));
    }
    var_22 = ((/* implicit */long long int) var_19);
    var_23 = ((/* implicit */unsigned char) ((var_18) ? ((~(((/* implicit */int) ((var_19) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) : (((/* implicit */int) var_11))));
}
