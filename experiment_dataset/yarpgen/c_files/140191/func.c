/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140191
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(var_7)))))))));
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) min((((/* implicit */int) ((short) 8440526865012502888ULL))), (((((((/* implicit */int) ((signed char) var_6))) + (2147483647))) >> (((var_0) - (1956064029U))))))))));
    var_17 = ((/* implicit */unsigned int) ((_Bool) 0ULL));
    var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)66))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_19 -= ((/* implicit */short) var_1);
        var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */unsigned long long int) ((var_13) ? (var_8) : (var_8)))) != (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (15523070990886407970ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))));
        arr_2 [i_0 - 2] = ((/* implicit */unsigned int) var_8);
    }
}
