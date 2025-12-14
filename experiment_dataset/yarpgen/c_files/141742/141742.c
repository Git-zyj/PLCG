/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_10 = (((arr_8 [i_2] [1] [i_1 - 2] [i_2]) | 7));
                        var_11 |= arr_8 [i_1] [i_1] [1] [6];
                        arr_10 [i_0] [i_0] [i_1] [i_0] &= (((arr_4 [i_0] [1] [i_2]) ? -21618 : 14256757720704370203));
                        arr_11 [i_2] = 108;
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_12 = ((((~(arr_3 [i_0]))) < ((var_9 ^ (arr_13 [i_2] [i_1 - 1])))));
                        var_13 = ((((((((arr_0 [i_0]) * (arr_2 [i_0] [i_1] [i_4]))) != (~-21618)))) / (((~var_3) - ((((arr_9 [i_1] [i_2] [i_2] [i_0]) || 10218526734481736282)))))));
                        var_14 = -116;
                    }
                    arr_14 [i_2] [i_2] [i_0] = 109;
                }
            }
        }
    }
    var_15 = -109;
    #pragma endscop
}
