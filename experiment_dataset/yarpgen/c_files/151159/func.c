/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151159
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] [5] [i_0] = ((unsigned short) (~(((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 2] [i_1 + 2]))));
                var_19 = ((/* implicit */unsigned short) ((long long int) ((var_11) / (arr_3 [i_1 - 1] [i_1]))));
                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(7685904351621560604LL)))) ? (var_13) : (((/* implicit */long long int) var_1)))) + (((/* implicit */long long int) arr_3 [i_0] [i_0]))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 17179869176LL)) ? ((-(-7685904351621560604LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 7685904351621560611LL)))))) >= (var_13)));
    var_22 = var_6;
    var_23 = ((/* implicit */unsigned short) var_9);
    var_24 -= ((/* implicit */int) ((max((((/* implicit */long long int) (-(var_4)))), (max((var_0), (((/* implicit */long long int) var_5)))))) & (((var_0) ^ (var_7)))));
}
