/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100293
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
    var_15 = ((/* implicit */unsigned int) var_14);
    var_16 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) min((var_17), ((+(3756079560U)))));
                    var_18 &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((arr_4 [i_2] [i_1 - 3] [i_0 + 1]) >= (arr_4 [i_0 + 1] [i_0 + 1] [i_2])))), (min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))));
                    arr_7 [i_0] [(short)16] [i_2] [(short)16] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned short)5358)), (9853642375207182753ULL)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) var_3);
}
