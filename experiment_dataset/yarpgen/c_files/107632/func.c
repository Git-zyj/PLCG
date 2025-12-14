/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107632
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
    var_15 = ((/* implicit */short) -408188724);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */int) arr_0 [i_1]);
                arr_6 [i_0] = ((/* implicit */int) ((long long int) ((int) arr_4 [0ULL] [i_1 - 1] [i_0])));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)123);
            }
        } 
    } 
}
