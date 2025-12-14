/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((var_0 ? (var_8 - var_9) : ((-1714719267 ? 1442072314353863684 : 1714719274))));
    var_11 = ((!(((var_2 % var_3) > var_8))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = ((-(arr_1 [i_0])));
        arr_2 [i_0] [i_0] |= var_2;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = (((((min(27133433, -1180197215)) > (!1714719274))) ? (arr_5 [i_1]) : (arr_5 [i_1 - 1])));
        arr_7 [i_1] = (min(var_3, (max(-1714719267, 27133433))));

        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            var_13 = (max((-127 - 1), 4658));
            arr_12 [i_1] [i_2] = (((((~(((arr_10 [i_1] [i_2] [i_2]) & -27133433))))) ? (max((((var_2 ? var_7 : var_1))), (((arr_9 [i_1] [i_1] [i_2]) ? (arr_5 [i_1 - 1]) : var_8)))) : (~var_4)));
            arr_13 [13] = (~(arr_3 [i_2]));
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_23 [i_5] [i_5] [i_4] [i_4] [i_2] [i_1 - 1] = (!60);
                            var_14 = arr_4 [1];
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
