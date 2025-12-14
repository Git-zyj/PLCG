/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161273
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
    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107))) != (var_11)))), (var_9)))), (var_2)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_1))));
        var_16 |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0])))) + (((/* implicit */int) ((((/* implicit */int) (signed char)24)) == (((/* implicit */int) (signed char)-55)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) -8760297110972712210LL)) > (var_5)));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) (signed char)-116))), ((~(((/* implicit */int) max((arr_1 [i_1] [i_1]), (arr_4 [i_1]))))))));
        arr_8 [i_1] = -6992520511746256851LL;
    }
    var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)31053)) : (((/* implicit */int) var_3))));
}
