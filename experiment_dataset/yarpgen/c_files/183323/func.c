/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183323
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_18 -= ((((/* implicit */_Bool) ((((arr_2 [i_0]) + (9223372036854775807LL))) >> (((min((var_5), (((/* implicit */int) var_6)))) + (345029673)))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : ((+(((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_10))))) ? (((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned char) arr_0 [i_0] [(_Bool)1]))))) : (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        var_20 = ((((((/* implicit */int) var_10)) != (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (_Bool)1)) : (((-321785656) + (((/* implicit */int) (signed char)32)))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))))))));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)45))) : (arr_2 [i_0])));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((arr_2 [14LL]) & (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -878194829)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1]))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18893)) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (var_5)));
        var_24 = ((/* implicit */_Bool) var_14);
    }
    var_25 = ((/* implicit */long long int) var_9);
    var_26 = ((/* implicit */unsigned short) var_8);
}
