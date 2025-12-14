/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118076
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))) : ((-9223372036854775807LL - 1LL))))) ? ((+(7723998645676286356LL))) : (var_10)));
            var_15 = ((/* implicit */unsigned char) (+(((long long int) var_3))));
        }
    }
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((short) (_Bool)1))) >> (((((/* implicit */int) ((signed char) var_2))) - (26))))))));
}
