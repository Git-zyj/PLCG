/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134126
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_20 = arr_6 [i_0] [i_1] [i_2];
                    var_21 += ((/* implicit */_Bool) (+(max((((((/* implicit */_Bool) (short)8176)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)-2484)))), (((/* implicit */int) (short)-2475))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (+(var_11)));
}
