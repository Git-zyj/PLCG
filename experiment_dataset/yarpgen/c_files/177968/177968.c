/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (~var_3);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_13 = (arr_3 [i_0] [i_0]);
                        arr_10 [12] [i_1 - 2] [i_2] [i_2] [i_2] [i_3] = 7709842268105537681;
                        arr_11 [i_1] [i_2] [i_2] = 1;
                        arr_12 [i_0] [i_2] [i_2] [i_3] = (!(arr_3 [1] [i_1 - 1]));
                    }
                }
            }
        }
        arr_13 [i_0] = (max(1, 60));
        arr_14 [20] [i_0] = ((~(max(7709842268105537699, (arr_6 [4])))));
        arr_15 [i_0] [i_0] = (max(90, (((arr_8 [i_0]) ? ((-7709842268105537681 ? 1 : 1)) : (arr_6 [10])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = 1;
                            arr_28 [i_4] [i_5] [i_6] [i_7] [i_8] [9] = (!var_6);
                        }
                    }
                }
            }
            var_14 = (((~2476384080) ? (arr_22 [i_4] [i_4] [2] [i_5]) : ((60 ? -43 : (arr_3 [21] [17])))));
        }
        var_15 = 32750;
    }
    var_16 = ((48652 ? -7709842268105537671 : 1));
    #pragma endscop
}
