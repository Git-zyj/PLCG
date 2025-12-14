/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115592
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
    var_17 += ((/* implicit */_Bool) (unsigned short)5171);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = min(((-(4294967295U))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) 2133679091U)))))))));
                arr_6 [i_1] [i_1] = min((var_11), (((unsigned int) arr_1 [i_0])));
            }
        } 
    } 
}
