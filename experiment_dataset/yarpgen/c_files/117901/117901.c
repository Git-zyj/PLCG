/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_5 >= var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((((arr_5 [i_0]) ? (arr_0 [i_0] [i_0]) : var_0))))));
                var_21 = (((min((min(-1643570657, (arr_1 [i_0] [i_1]))), (arr_2 [i_1] [i_1]))) - (((arr_0 [i_0] [i_0]) ? 0 : (min(105, var_18))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            {
                var_22 ^= (9548468557870337193 / 17113175423118205119);
                var_23 = (min(var_23, (((((min((arr_8 [i_2] [i_3]), 1333568650591346494))) ? var_13 : (!var_17))))));
                arr_12 [i_2] [i_2] [i_3] = (max(17113175423118205100, (((((max(var_3, 0))) / ((-31907 ? var_17 : var_6)))))));
                arr_13 [3] [i_3] |= (arr_2 [i_3 - 1] [i_3 + 2]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                var_24 = (max(var_24, (((var_7 && (~235))))));
                var_25 = 17113175423118205121;
                var_26 -= ((((52443 ? (arr_0 [i_4] [i_4]) : 14769523385266107500)) * (((min(var_16, 25485))))));
            }
        }
    }
    var_27 += max(var_7, (min(-var_12, 15472220166149605774)));
    #pragma endscop
}
