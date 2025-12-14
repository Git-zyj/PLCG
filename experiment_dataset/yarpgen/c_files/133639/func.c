/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133639
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
    var_17 = ((/* implicit */long long int) (unsigned char)158);
    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)255))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_19 += (short)-31516;
                    arr_6 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)7017))))) - (var_7))))));
                }
            } 
        } 
    } 
}
