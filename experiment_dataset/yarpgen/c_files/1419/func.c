/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1419
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)11825)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24309))) : (5598190201106269638LL))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
    var_14 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) ((_Bool) var_4)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) min((((((var_6) << (((71987225293750272ULL) - (71987225293750267ULL))))) * (((/* implicit */unsigned long long int) (-(arr_3 [i_0])))))), (((/* implicit */unsigned long long int) (unsigned char)249))));
                var_16 = ((/* implicit */unsigned char) ((long long int) (+(9150388848741498694ULL))));
                var_17 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0]))))) ? (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_0])))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_4 [i_1])))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((381689838) >> ((((~(((/* implicit */int) var_12)))) - (30285))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_0])) : (arr_3 [i_0])))));
            }
        } 
    } 
}
