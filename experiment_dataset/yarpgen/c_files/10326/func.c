/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10326
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
    for (int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) (+((~(arr_0 [i_0])))));
        arr_2 [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 2147483647)) : (var_16)))))) ? (((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_0 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_14) < (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) 2731916312U)) : (72057591890444288LL))))) : (max((((/* implicit */long long int) var_0)), (var_10))));
    }
    var_21 += ((/* implicit */unsigned int) var_8);
}
