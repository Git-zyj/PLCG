/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13524
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)0)) < (((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13440)))))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [(short)4])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((_Bool) 11697468198569176915ULL))))))));
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)13440)) ? (max((2147483636), (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) (short)-18461)) : (((/* implicit */int) (unsigned char)0)))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14; i_1 += 2) 
    {
        var_14 -= ((/* implicit */_Bool) (unsigned short)13440);
        arr_5 [i_1 - 2] [i_1 - 1] = ((/* implicit */int) (unsigned char)209);
    }
    var_15 = ((/* implicit */_Bool) max((max((((/* implicit */short) min((((/* implicit */unsigned char) var_6)), ((unsigned char)248)))), (var_4))), (((/* implicit */short) var_7))));
}
