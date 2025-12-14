/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188185
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
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        var_13 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (((/* implicit */int) arr_1 [i_0 - 2]))))) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 2]))))));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)16153)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)204)))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_9)) % (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_12))))))) - (((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((((/* implicit */long long int) ((/* implicit */int) var_4))) & (9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) (unsigned char)161)) : (((/* implicit */int) (unsigned char)255)))))))));
    }
    var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))));
    var_17 = ((/* implicit */unsigned char) ((max((((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_11))))), ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7)))))) & (((var_3) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) var_11))))))));
    var_18 = ((/* implicit */signed char) var_0);
}
