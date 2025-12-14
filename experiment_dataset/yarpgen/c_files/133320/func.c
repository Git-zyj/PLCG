/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133320
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)21522)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (var_1)))))) ? (((/* implicit */long long int) var_17)) : (var_1)));
    var_21 = max((((/* implicit */unsigned long long int) (unsigned char)5)), (4611686018427387904ULL));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25272)) ? (((/* implicit */int) arr_1 [1ULL] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((_Bool) arr_3 [12LL] [i_0]))) : (((/* implicit */int) arr_0 [i_0]))));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)31))))) * (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) arr_1 [i_1] [i_1]);
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) arr_1 [i_1] [i_1])), ((short)-13354)))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (signed char)105))))))))));
        var_24 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)108)))))))));
    }
}
