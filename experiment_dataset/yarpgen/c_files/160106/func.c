/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160106
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
    for (int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = var_12;
                    var_18 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) var_15)) > (((/* implicit */int) arr_5 [i_0] [i_0]))))), ((+(((long long int) (signed char)-1))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_6);
}
