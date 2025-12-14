/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106233
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
    var_12 = var_0;
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_2)), (((long long int) var_1))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) min((min(((signed char)-85), (arr_2 [i_0]))), ((signed char)-112))))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_7)) + (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (var_5))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_16 -= ((/* implicit */unsigned long long int) ((((long long int) min((((/* implicit */long long int) (signed char)-85)), (var_0)))) <= (var_10)));
        var_17 *= ((((/* implicit */_Bool) ((min((var_1), (((/* implicit */unsigned long long int) var_10)))) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-85))) | ((-9223372036854775807LL - 1LL)))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [2LL]))) != (arr_1 [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [6U]))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))))))) : (((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) arr_6 [i_1]))))) ? (((unsigned long long int) arr_0 [i_1] [i_1])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [6LL])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
    }
}
