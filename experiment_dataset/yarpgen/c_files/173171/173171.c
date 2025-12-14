/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 - 2] = (((min((arr_3 [i_0 - 2] [i_1] [i_1]), var_6))));
                var_17 = (max(((max(((min(var_7, -32641))), (arr_1 [i_0 + 1])))), (min((((-32767 - 1) ? (arr_3 [i_0] [i_1] [i_1]) : (arr_1 [i_0 - 2]))), 29525))));
                var_18 = var_14;
            }
        }
    }
    var_19 -= var_2;
    var_20 = (min(var_20, -4131215597031524916));
    var_21 = 0;
    #pragma endscop
}
