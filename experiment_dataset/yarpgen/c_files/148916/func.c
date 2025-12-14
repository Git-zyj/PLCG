/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148916
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
    var_11 = ((/* implicit */int) (_Bool)1);
    var_12 *= ((/* implicit */short) var_7);
    var_13 = ((/* implicit */signed char) ((short) var_1));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) arr_7 [4U]))));
                    var_15 ^= ((/* implicit */short) var_3);
                    arr_9 [i_2] [i_2] = ((/* implicit */long long int) var_3);
                }
            } 
        } 
    } 
}
