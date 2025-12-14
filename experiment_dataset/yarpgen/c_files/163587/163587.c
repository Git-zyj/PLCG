/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((min(var_8, (!4194303))) < var_10));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_2] = ((((min((arr_2 [i_1 - 1] [i_1 + 1]), 51184))) ? (min((~var_11), var_11)) : ((min(4194303, (min(var_7, var_15)))))));
                    arr_8 [i_0] [i_0] [i_2] = 51195;
                    var_19 = (max(var_19, (((((((~1) ? var_13 : (arr_4 [i_1 - 1] [i_2])))) ? ((min(54169, var_10))) : (min(((-30725 ? 1 : 1)), var_0)))))));
                    var_20 = (!(((51811 ? (13725 - -1) : 0))));
                }
            }
        }
        arr_9 [3] = (!((((arr_4 [i_0] [i_0]) ? -96877341 : (arr_4 [i_0] [i_0])))));
    }
    #pragma endscop
}
