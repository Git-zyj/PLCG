/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137675
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
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) (((~((~(((/* implicit */int) (_Bool)0)))))) == (((/* implicit */int) arr_2 [i_1]))));
                arr_5 [i_0 - 1] [i_0] [i_1] &= ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) ((var_0) >= (((/* implicit */int) var_5))))))) == (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_2);
}
