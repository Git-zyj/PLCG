/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((((((7434393254522010221 && 70) ? (42201 || 154) : (!2385396373)))) ? (((((var_2 ? 16 : 246))) ? (!70) : ((67 ? 70 : 2016)))) : 75));
        var_10 = ((114 ? 75 : 9223371487098961920));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_14 [i_2 + 1] [i_2] [6] [i_1] = max(((-(min(9223372036854775807, var_7)))), (min(((var_5 ? var_2 : 180)), 4)));
                    arr_15 [i_1] [i_1] [i_2] [i_3] = 21970;
                    var_11 = ((24229 ? 127 : 200));
                }
            }
        }
        var_12 = (max(((((~-9223372036854775804) ? (34410 & 43565) : 21978))), (min(-var_6, ((min(2793326672, var_9)))))));
        arr_16 [i_1] [i_1] = ((!((!((min(1062572742, 9223371487098961912)))))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        var_13 = (min(var_13, 5914));
        var_14 = 1062572742;
        arr_19 [11] [i_4] = (var_5 >= var_4);
    }
    var_15 = ((((max((max(-7284189731137648202, var_5)), (3232394553 < var_5)))) || var_5));
    #pragma endscop
}
