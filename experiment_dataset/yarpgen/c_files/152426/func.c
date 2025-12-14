/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152426
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
    var_14 = ((/* implicit */unsigned char) ((unsigned int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (var_2))), (((/* implicit */int) var_8)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) var_5);
                var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_0 [i_1])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))));
            }
        } 
    } 
}
