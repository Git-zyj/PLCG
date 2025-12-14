/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168974
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
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_18 -= ((/* implicit */unsigned long long int) max((((((/* implicit */int) ((1595965429134935546LL) != (((/* implicit */long long int) 1430699545U))))) >> (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [13])))))), ((~(((/* implicit */int) (signed char)8))))));
        var_19 = ((/* implicit */signed char) var_14);
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max(((-(((/* implicit */int) arr_1 [i_0 + 4])))), (((/* implicit */int) min((arr_1 [i_0 + 4]), (arr_1 [i_0 + 1])))))))));
        arr_2 [0LL] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    var_21 |= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 216172782113783808ULL)) ? (5786613866312123905LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_12)), (var_4))))) : (70334384439296LL))));
}
