/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126562
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
    var_14 = ((/* implicit */signed char) (~((-(((((/* implicit */int) var_10)) & (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_15 -= (short)1;
                    arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2576479135U)) ? (((/* implicit */int) ((((/* implicit */_Bool) 1284328965U)) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)(-32767 - 1)))))), (2217146911U))))));
                }
            } 
        } 
    } 
}
