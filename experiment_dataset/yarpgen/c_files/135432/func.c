/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135432
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
    var_18 = ((/* implicit */unsigned long long int) -4323575867732070080LL);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+((-2147483647 - 1))))) >= (((((/* implicit */_Bool) max((2147483647), (2147483647)))) ? (9223372036854775808ULL) : (max((((/* implicit */unsigned long long int) 2147483642)), (12ULL)))))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) ((((4753317626865317033ULL) * (arr_1 [i_0]))) * (4753317626865317017ULL)))) ? (min((arr_1 [i_0 + 1]), (arr_0 [i_0 + 2]))) : (max((((unsigned long long int) arr_0 [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (2147483639) : (-2147483634)))))))))));
    }
    var_21 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-32321))));
}
