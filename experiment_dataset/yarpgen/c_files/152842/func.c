/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152842
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
    var_10 = ((/* implicit */long long int) (unsigned char)205);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */short) var_0);
                var_11 = ((/* implicit */signed char) arr_6 [i_0]);
            }
        } 
    } 
}
