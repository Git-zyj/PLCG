/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126504
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
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) 10714668459803676799ULL))))))));
                    arr_6 [i_0] [i_0] [i_0] = (+(var_4));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) var_13);
    var_19 = ((/* implicit */short) var_10);
}
