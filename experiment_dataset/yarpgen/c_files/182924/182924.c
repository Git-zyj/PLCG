/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1 + 1] [i_0] = ((((((arr_4 [i_1 - 2] [i_1 + 1] [i_0]) ? (arr_4 [i_1 + 1] [i_1 - 1] [i_0]) : (arr_4 [i_1 - 1] [i_1 - 2] [i_0])))) != ((4522035815866895861 / (arr_7 [i_1] [i_1 - 1])))));
                var_18 ^= arr_7 [i_0] [12];
                var_19 = (arr_6 [i_0]);
            }
        }
    }
    #pragma endscop
}
