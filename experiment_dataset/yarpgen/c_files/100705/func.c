/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100705
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) var_6))));
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */short) ((((long long int) arr_7 [i_2] [i_2 - 1] [i_1] [i_0 + 1])) != (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    var_13 = ((/* implicit */signed char) var_4);
                }
            } 
        } 
    } 
}
