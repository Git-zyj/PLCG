/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14353
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) var_3);
                var_15 = ((/* implicit */int) var_0);
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) arr_6 [i_3]);
                arr_11 [i_2] [i_3] [i_3] = ((/* implicit */signed char) var_1);
                var_17 = arr_2 [i_3] [i_3] [i_3];
            }
        } 
    } 
}
