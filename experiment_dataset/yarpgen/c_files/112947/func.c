/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112947
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
    for (unsigned int i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) (-(max((arr_0 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0]))))));
        arr_2 [i_0] = (~(((unsigned int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_1 [i_0 + 4]))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((signed char) var_5));
        var_17 = ((/* implicit */signed char) (_Bool)0);
        var_18 = ((/* implicit */unsigned short) 330981216U);
    }
    for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        var_19 &= ((/* implicit */signed char) ((3963986084U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_20 = ((/* implicit */unsigned char) var_6);
    }
    var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))) - (var_14)));
    var_22 ^= ((/* implicit */unsigned int) 58720256);
    var_23 = ((/* implicit */signed char) var_3);
}
