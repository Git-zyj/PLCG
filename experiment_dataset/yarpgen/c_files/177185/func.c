/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177185
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) arr_1 [i_0 - 1]);
        var_14 = ((/* implicit */short) min((var_14), (arr_0 [i_0 - 1])));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) 4294967276U))));
    }
    for (int i_1 = 4; i_1 < 8; i_1 += 4) 
    {
        var_16 -= ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) arr_2 [i_1])))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((((/* implicit */long long int) arr_0 [i_1])), ((~(min((((/* implicit */long long int) (unsigned char)24)), (var_7))))))))));
    }
    var_18 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) var_3))))));
    var_19 = ((/* implicit */long long int) 4172901702U);
}
