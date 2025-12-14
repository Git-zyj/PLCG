/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160032
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
    var_10 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) max(((short)31305), ((short)-31304)))), (max((2220185892U), (((/* implicit */unsigned int) (unsigned char)26)))))), (((/* implicit */unsigned int) (short)-31293))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] [i_1] = ((/* implicit */int) (short)-31306);
                var_11 = ((/* implicit */signed char) (unsigned char)229);
            }
        } 
    } 
}
