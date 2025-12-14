/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128298
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
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_0))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!((_Bool)0)))))) <= (((/* implicit */int) min((((/* implicit */signed char) var_1)), (arr_6 [i_2 + 2] [i_2] [i_2 + 3]))))));
                    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (_Bool)1))));
                }
            } 
        } 
    } 
}
