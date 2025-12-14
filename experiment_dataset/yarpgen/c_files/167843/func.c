/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167843
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 0U))))));
                    var_20 = (-((-((+(((/* implicit */int) (signed char)93)))))));
                }
            } 
        } 
    } 
    var_21 = (!(((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)0))))))));
}
