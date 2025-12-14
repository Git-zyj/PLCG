/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [21] = max((((arr_6 [4]) ? (arr_0 [i_0]) : -1545323556776549667)), (((var_13 ? ((min(27704, 43260))) : ((min(0, 22296)))))));
                arr_8 [i_0] = ((((((max((arr_1 [i_1] [12]), 43260))) / (arr_0 [i_0 - 1]))) >= (~43260)));
                var_17 += 15639451251538593551;
                var_18 = (~(arr_4 [i_1] [1] [1]));
            }
        }
    }
    var_19 = 0;
    var_20 = ((min(2807292822170958065, (max(30651, 13935163763586008094)))));
    #pragma endscop
}
