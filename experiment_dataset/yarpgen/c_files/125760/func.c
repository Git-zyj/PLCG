/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125760
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)75)))))));
                var_19 *= ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) min((var_8), ((signed char)70)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) 3486278089U);
}
