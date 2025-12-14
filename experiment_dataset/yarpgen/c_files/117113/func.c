/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117113
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_14 = arr_4 [i_0] [i_1] [i_1];
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0]))) ? (((/* implicit */int) ((short) arr_1 [i_0]))) : (((/* implicit */int) arr_1 [i_0]))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_5)))) ? (arr_2 [14ULL] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) != (arr_4 [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
    var_16 ^= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (15650455168574423411ULL)))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15958354843204010428ULL)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (signed char)23))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    var_17 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (var_5)))))));
}
