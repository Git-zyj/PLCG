/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135308
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
    var_12 *= ((/* implicit */signed char) -86580770);
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)52)) ? (var_11) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) != (var_1))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_0))))) : ((~(((/* implicit */int) var_7))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-1673883321), (arr_1 [9] [i_0])))) ? (((((/* implicit */_Bool) -1673883321)) ? (((/* implicit */int) var_7)) : (var_11))) : (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned int) max((arr_1 [i_0] [i_0]), (((1673883321) - (((/* implicit */int) var_8))))))) : (max((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) 1673883337)))), (arr_0 [i_0])))));
        var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (1723280130U)));
        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)88))) & (159545399787996286LL)))))));
        var_16 = var_11;
    }
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (((((-(1673883337))) + (2147483647))) >> (((((/* implicit */int) max((((/* implicit */short) var_2)), (var_8)))) - (20478)))))) ? (((/* implicit */int) min((max((var_8), (((/* implicit */short) (signed char)88)))), (var_8)))) : (((int) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))))));
}
