/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185975
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
    var_19 = ((/* implicit */unsigned short) var_17);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((int) arr_1 [i_0]))), (min((((/* implicit */long long int) (unsigned char)48)), (9223372036854775807LL)))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)(-127 - 1))) : ((+((-2147483647 - 1))))));
            }
        } 
    } 
}
