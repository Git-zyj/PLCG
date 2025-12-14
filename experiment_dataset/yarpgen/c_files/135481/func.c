/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135481
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
    for (signed char i_0 = 4; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((28) | (-28))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_1 [i_0 - 4])) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 4])))));
        var_21 = ((/* implicit */unsigned long long int) var_10);
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) arr_1 [i_0 + 1]))) & ((~(((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0 - 3]))))))));
    }
    for (signed char i_1 = 4; i_1 < 18; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) ((signed char) 1435766299880957021LL))))) >> (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)41)), (0ULL)))) ? (((/* implicit */int) arr_4 [i_1 - 2])) : (((((/* implicit */int) (signed char)90)) << (((((arr_1 [i_1]) + (479980546908608831LL))) - (9LL)))))))));
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_1 [i_1]), (((/* implicit */long long int) max((arr_0 [i_1]), (((/* implicit */short) var_18)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 3])) < (((/* implicit */int) arr_0 [i_1 + 1])))))) : (((((/* implicit */_Bool) (signed char)103)) ? (-1435766299880957021LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)103)))))));
    }
    var_24 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_16)) ? (min((var_2), (var_5))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) (signed char)44))))))));
}
