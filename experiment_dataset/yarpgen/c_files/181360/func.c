/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181360
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
    var_18 = ((/* implicit */short) var_11);
    var_19 = ((/* implicit */long long int) 2193718186U);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_20 += ((/* implicit */short) 4294967295U);
                    arr_8 [i_0] [10ULL] [i_2] [(signed char)7] = ((/* implicit */int) (!(((/* implicit */_Bool) min((max((422377501U), (3069804441U))), (((/* implicit */unsigned int) arr_1 [i_0])))))));
                }
            } 
        } 
    } 
}
