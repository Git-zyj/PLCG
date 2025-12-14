/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137275
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
    var_19 = ((/* implicit */long long int) var_16);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_8))));
                    var_21 = ((/* implicit */int) (unsigned char)255);
                    var_22 = ((/* implicit */unsigned int) arr_6 [i_2 + 1] [i_2 + 4]);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
}
