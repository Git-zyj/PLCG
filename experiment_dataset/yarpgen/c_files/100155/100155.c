/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_17 *= (((((var_0 ? (var_6 * var_12) : 96))) ? ((((var_13 ? 3036654379 : 7171)))) : var_10));
        var_18 = (!((max((min((arr_0 [i_0]), var_1)), 0))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_19 = (min(var_19, var_6));
                        var_20 += (((((var_10 / (arr_1 [i_3] [1]))) >= 0)));
                    }
                }
            }
        }
        var_21 |= ((12372 ? (max(7839639095269452525, (arr_2 [i_0 - 1]))) : 3139314837));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        arr_13 [i_4] [6] = (min((max(-241, -264550890)), (((!(!88))))));
        var_22 = 225;
        arr_14 [i_4 - 1] [i_4] = ((((min(6, 0))) ? (((9007199254740992 ? 1 : ((1412775051709008332 ? 1 : 1))))) : (max(240, 1233548422773140181))));
    }

    for (int i_5 = 4; i_5 < 13;i_5 += 1)
    {
        var_23 += (((1 - ((0 ? -1 : 16668)))) <= (((((var_6 ? (arr_6 [i_5] [i_5 - 2] [i_5 - 3] [i_5]) : (arr_5 [i_5] [i_5] [i_5])))) & 2092182742825886675)));
        arr_19 [i_5] = 1;
    }
    #pragma endscop
}
