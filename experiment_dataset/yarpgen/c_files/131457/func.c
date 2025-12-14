/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131457
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
    var_10 = (+(((/* implicit */int) (short)-23330)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_11 *= ((/* implicit */short) ((((/* implicit */int) arr_3 [i_2])) * (((/* implicit */int) (short)23330))));
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned int) ((arr_2 [i_2]) / (arr_2 [i_0]))))));
                }
            } 
        } 
    } 
}
