/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121988
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
    for (signed char i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_14 = var_7;
        var_15 = ((/* implicit */short) max((((long long int) -3226092922679087593LL)), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0])))))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [9LL]))))) : (var_10))))))));
    }
    var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)34))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_5))));
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) -3226092922679087593LL))));
}
