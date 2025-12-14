/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1063
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
    var_16 |= ((/* implicit */unsigned long long int) (_Bool)0);
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_7))));
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_7))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (short)-26447))));
                    var_20 += ((/* implicit */_Bool) min((arr_2 [2U]), (((((/* implicit */int) (signed char)-123)) + (((/* implicit */int) var_2))))));
                }
            } 
        } 
    } 
}
