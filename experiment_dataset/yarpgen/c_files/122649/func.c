/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122649
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
    for (int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(-4987667123213384864LL)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_0 - 2]))));
                var_14 = ((/* implicit */unsigned int) max((((/* implicit */long long int) 871782811U)), (-4987667123213384855LL)));
                arr_7 [i_0] [(signed char)2] [i_0] = arr_2 [i_0 - 1];
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_8);
    var_16 = ((/* implicit */long long int) var_10);
}
