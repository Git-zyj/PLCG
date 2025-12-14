/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103718
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1 - 1] = ((/* implicit */int) 5642242875252179731LL);
                arr_6 [i_1] = ((/* implicit */unsigned short) var_3);
                var_10 -= (+(((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-4), ((signed char)127))))) : (var_8))));
            }
        } 
    } 
    var_11 = ((/* implicit */int) var_3);
}
