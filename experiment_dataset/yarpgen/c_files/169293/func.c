/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169293
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */long long int) 2U)) > (-9223372036854775791LL))))) || (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) && (((/* implicit */_Bool) arr_5 [i_1]))))));
                arr_7 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_5 [i_0]) != (arr_5 [i_1]))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((var_5) ^ (((/* implicit */unsigned int) 0))))) > (((var_7) + (((/* implicit */long long int) 6U)))))) ? (((/* implicit */long long int) ((int) 18446744073709551615ULL))) : (var_0)));
}
