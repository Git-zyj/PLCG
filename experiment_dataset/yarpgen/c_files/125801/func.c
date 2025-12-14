/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125801
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) var_1))));
    var_18 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned int) var_5))));
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_16))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_20 |= ((/* implicit */short) var_7);
                    var_21 = ((/* implicit */int) ((unsigned int) ((unsigned short) (unsigned short)4)));
                }
            } 
        } 
    } 
}
