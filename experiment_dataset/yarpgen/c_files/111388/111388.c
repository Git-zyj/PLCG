/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_10 = ((((-962477340 && ((!(arr_1 [i_0]))))) ? ((((var_0 || (arr_1 [i_0]))))) : 8310512335026360438));
                var_11 = (min(335240751, -1857013007));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_6 [i_2] [i_2] = (arr_5 [i_2] [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    arr_14 [i_4] [i_3] [5] = (((arr_12 [i_2] [i_2] [i_2]) ? (arr_12 [7] [i_3] [i_4]) : var_6));
                    arr_15 [i_2] [i_2] [i_2] = ((((-962477343 ? -1857013032 : -962477353)) - ((-(arr_13 [i_4] [i_3])))));
                }
            }
        }
    }
    #pragma endscop
}
