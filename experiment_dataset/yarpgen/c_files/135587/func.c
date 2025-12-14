/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135587
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
    var_20 = ((/* implicit */short) (unsigned char)145);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((-111326187) != (((/* implicit */int) var_17))));
                    var_22 = ((/* implicit */int) ((unsigned int) (~(((long long int) (short)-11973)))));
                    var_23 = ((/* implicit */short) 111326186);
                }
            } 
        } 
    } 
}
