/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120748
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
    var_12 = var_0;
    var_13 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 6; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */int) ((((/* implicit */long long int) var_5)) != (var_4)))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))))) & ((~(((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (arr_2 [i_0] [0]))))))));
                var_14 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9920))) : (((unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_4 [i_1] [i_1]))))), (max((var_4), (((/* implicit */long long int) var_11)))))))));
                arr_6 [i_0] = ((/* implicit */short) (((~(((/* implicit */int) var_2)))) ^ ((-(((/* implicit */int) var_6))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_10);
}
