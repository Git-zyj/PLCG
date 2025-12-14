/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141606
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
    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) > (var_6))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)196))) - (var_0)))))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_5)))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) || (((/* implicit */_Bool) (-(arr_0 [i_0 + 2] [i_0]))))));
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */long long int) arr_3 [i_0 + 1])) : (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((long long int) (-2147483647 - 1))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_0 - 1]))))))));
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [i_0 - 1]), (2161727821137838080LL)))) && (((/* implicit */_Bool) (-(arr_1 [i_0 + 1])))))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(274875809792LL)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)10)), (arr_3 [i_0]))))))) ? (arr_2 [i_0 + 2]) : (((((/* implicit */_Bool) (((_Bool)1) ? (var_8) : (arr_2 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) (_Bool)1))))));
    }
}
