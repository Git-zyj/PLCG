/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183782
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)15))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        arr_6 [i_1] = ((((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1])) * (((/* implicit */int) (signed char)19))))) + (((((/* implicit */_Bool) arr_5 [i_1])) ? (-2097911008712613985LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))))))) / ((+(((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)153))))))));
        arr_7 [i_1] = ((/* implicit */long long int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))))));
        var_14 |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_1])) <= (((/* implicit */int) arr_4 [i_1])))) ? ((~(arr_5 [i_1]))) : ((~(((/* implicit */int) arr_4 [i_1]))))));
    }
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned long long int) var_5))))) ? (var_9) : (((((/* implicit */_Bool) var_13)) ? (-1355271069081183945LL) : (2195527362402148510LL)))))))))));
    var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (((((/* implicit */_Bool) 56762870)) ? ((-9223372036854775807LL - 1LL)) : (-4611686018427387904LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    var_17 = ((/* implicit */long long int) var_11);
}
