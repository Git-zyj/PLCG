/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179440
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
    var_11 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) -979959425)) ? (-12LL) : (var_4)))) ? ((+(var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */signed char) max((2LL), (36LL)));
                    var_13 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_7 [i_1] [i_0])))) ? (1584039133) : (((/* implicit */int) arr_7 [(short)10] [(short)1]))));
                }
            } 
        } 
    } 
}
