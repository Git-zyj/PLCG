/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128325
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
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (short)26410))));
    var_18 ^= ((/* implicit */long long int) ((((2364257995970075364ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6944))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_7))))))) : (((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6951)) ? (((/* implicit */int) (short)6943)) : (((/* implicit */int) (short)4))))) ? (((/* implicit */int) (short)6967)) : (((/* implicit */int) arr_0 [i_2]))))));
                    arr_7 [i_0] [i_2 + 1] [i_2] = ((((/* implicit */_Bool) -8787398818753103354LL)) ? (((/* implicit */int) (short)6967)) : (((/* implicit */int) (short)6953)));
                }
            } 
        } 
    } 
}
