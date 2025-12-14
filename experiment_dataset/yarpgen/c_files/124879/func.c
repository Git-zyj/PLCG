/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124879
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
    var_20 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (0LL)))), (var_11))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    var_21 *= ((/* implicit */short) max((min((max((((/* implicit */unsigned long long int) var_17)), (1885328876831340995ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_22 += ((/* implicit */unsigned char) ((int) ((unsigned long long int) min((((/* implicit */long long int) arr_3 [i_0 + 1] [i_0])), (0LL)))));
                arr_4 [i_0] = ((/* implicit */unsigned long long int) var_12);
                arr_5 [i_0] [(short)12] &= ((/* implicit */long long int) ((short) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) * (1125899906838528ULL)))));
            }
        } 
    } 
}
