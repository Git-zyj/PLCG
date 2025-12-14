/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145537
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_17) : (var_17)))) : (-6103810831947480503LL))) : (var_0))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) ((signed char) ((var_2) * (arr_2 [i_0] [i_0])))))));
        var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_21 &= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) -2187442687654027660LL)) && (((/* implicit */_Bool) 4602611249053319904LL)))))));
        var_22 = ((((/* implicit */_Bool) var_17)) ? (max((arr_2 [(unsigned char)10] [i_1]), (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [20LL] [i_1])) || (((/* implicit */_Bool) arr_2 [14LL] [14LL])))))));
    }
    var_23 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((var_4) + (((/* implicit */unsigned int) var_6)))) <= (((((/* implicit */_Bool) var_3)) ? (var_16) : (var_1)))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_1)) : (((((/* implicit */_Bool) var_15)) ? (var_7) : (var_0)))))));
}
