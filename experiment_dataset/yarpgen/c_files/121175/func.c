/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121175
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
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_15))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_19 = (unsigned char)63;
                    var_20 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_1 [i_0 - 1] [i_0 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_14);
}
