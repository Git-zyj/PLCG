/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162468
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_12 = arr_1 [i_0] [3ULL];
        arr_2 [i_0] = ((/* implicit */_Bool) (~((-(min((((/* implicit */long long int) var_6)), (1152912708513824768LL)))))));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 2; i_1 < 19; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            {
                arr_9 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))));
                arr_10 [i_2] = ((/* implicit */signed char) var_9);
                arr_11 [i_1] [i_1] = ((/* implicit */signed char) arr_3 [i_1 - 2]);
            }
        } 
    } 
}
