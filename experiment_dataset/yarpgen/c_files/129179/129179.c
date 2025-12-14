/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (((var_4 || 0) >> (16392399415722158036 - 16392399415722158010)));
    var_19 = 16392399415722158058;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] [10] = ((min(((var_9 ? 0 : 2054344657987393568)), (arr_4 [i_0 - 3] [14]))));
                var_20 -= ((((((arr_1 [i_0 - 3]) ? (arr_1 [i_0 - 2]) : (arr_4 [i_0 - 3] [i_0 + 1])))) ? (((((var_17 ? 111 : (arr_1 [i_0]))) / 135))) : -3570967914023726150));
            }
        }
    }
    var_21 *= var_6;
    var_22 = 8698;
    #pragma endscop
}
