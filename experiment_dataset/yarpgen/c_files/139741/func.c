/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139741
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
    var_18 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [0LL] = ((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_0 + 1])) & (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1])))) << (((((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (arr_1 [i_0 + 1]) : (arr_3 [i_0 + 1]))) - (15752451105816142967ULL)))));
                var_19 |= ((/* implicit */unsigned char) var_3);
            }
        } 
    } 
}
