/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130872
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) 2722779008U)) ? (31U) : (1056964608U));
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((((/* implicit */_Bool) 7U)) ? (4294967292U) : (1056964608U)))));
                    arr_7 [20U] [17U] [i_2] = 1444240519U;
                }
            } 
        } 
    } 
    var_21 = var_6;
}
