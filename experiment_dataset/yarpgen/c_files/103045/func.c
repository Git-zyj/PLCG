/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103045
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
    var_20 = ((/* implicit */int) var_16);
    var_21 = ((/* implicit */unsigned int) max((var_21), (((unsigned int) ((((var_7) + (((/* implicit */unsigned long long int) var_1)))) << (((((((/* implicit */_Bool) var_5)) ? (3615361458U) : (679605816U))) - (3615361421U))))))));
    var_22 = ((/* implicit */unsigned int) var_15);
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) (!(((_Bool) ((((/* implicit */_Bool) (unsigned short)51075)) ? (((/* implicit */long long int) 2492652281U)) : (-7496377003176911413LL))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_1 [i_0])), (min((((long long int) 3477678525736013772LL)), (((/* implicit */long long int) var_8))))));
                }
            } 
        } 
    } 
}
