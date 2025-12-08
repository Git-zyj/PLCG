/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/85
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
    var_15 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-11342)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)0))));
    var_16 = ((/* implicit */short) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) 22U)) ? (((/* implicit */int) (short)11587)) : (((/* implicit */int) (short)0))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [13U] [i_0] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-11587)))))))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) <= (var_0))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)11606))))) : (arr_2 [i_0 + 2] [i_0 - 1]))));
                    var_17 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)11459)))))));
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */unsigned int) ((short) (+(((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-11468)))))));
                }
            } 
        } 
    } 
}
