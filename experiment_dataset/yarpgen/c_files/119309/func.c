/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119309
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 2341226308U)) ^ (max((var_5), (((/* implicit */long long int) var_8))))))) ? (var_8) : (var_11)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned int) arr_2 [i_1 + 1]);
                var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) var_4))))) ? (min((6219066364292475601LL), (((/* implicit */long long int) arr_0 [(short)13])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0]))))) & (var_10)));
            }
        } 
    } 
    var_16 = var_4;
}
