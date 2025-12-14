/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11300
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_2] = ((/* implicit */int) (-(((long long int) max((((/* implicit */unsigned long long int) var_2)), (18446744073709551615ULL))))));
                    arr_8 [i_0 + 1] [i_1 - 2] [i_1 - 4] [i_2] = var_3;
                }
            } 
        } 
    } 
    var_11 *= ((/* implicit */unsigned short) (-(1559658055U)));
}
