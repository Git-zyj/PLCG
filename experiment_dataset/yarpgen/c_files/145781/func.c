/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145781
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
    var_11 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) 18254540791839459943ULL);
                var_12 = (!(((/* implicit */_Bool) var_8)));
            }
        } 
    } 
}
