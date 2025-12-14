/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158712
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
    for (long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (((((/* implicit */_Bool) ((((-2069304131) + (2147483647))) >> (((1300224214U) - (1300224211U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16269))) : (17ULL)))));
        arr_3 [i_0] |= ((/* implicit */short) min((((((/* implicit */_Bool) (-(arr_1 [i_0])))) ? (arr_1 [i_0 + 1]) : (((unsigned long long int) arr_0 [i_0 + 1])))), ((+(18446744073709551604ULL)))));
        arr_4 [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_0 [(_Bool)1])) & (((/* implicit */int) arr_0 [i_0 - 1]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (1ULL) : (18446744073709551598ULL)))) ? (arr_1 [i_0 + 1]) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1]))) : (1ULL)))))));
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_17)), (var_1))))) % ((-(max((((/* implicit */unsigned long long int) var_3)), (0ULL)))))));
}
