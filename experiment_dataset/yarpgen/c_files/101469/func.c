/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101469
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
    var_16 &= ((/* implicit */signed char) (~(((/* implicit */int) (short)22942))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (arr_5 [i_0] [2LL] [i_0 + 3]) : (arr_5 [i_0] [i_0] [i_0 + 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_0)) : (arr_5 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) (!(var_15)))) : (((/* implicit */int) arr_3 [i_0]))))) : (((unsigned int) (short)-22955))));
                var_17 = ((/* implicit */short) (~(47321718U)));
            }
        } 
    } 
}
