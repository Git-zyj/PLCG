/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107262
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
    var_11 = ((/* implicit */short) min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)21)))) : (var_0)))));
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_3 [i_0] [(unsigned short)1] = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_13 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [10]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) var_7))));
    }
}
