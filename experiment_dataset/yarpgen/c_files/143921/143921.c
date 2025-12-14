/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_15 = (!var_7);
        var_16 = ((var_4 ? ((var_4 + (arr_2 [i_0] [i_0 - 2]))) : (arr_2 [7] [i_0])));
        arr_4 [i_0] = (arr_2 [i_0] [i_0]);
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_8 [6] = (!177);
        var_17 = (!(arr_5 [i_1] [i_1]));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 15;i_5 += 1)
                {
                    {
                        var_18 = (((arr_17 [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [5] [i_2 - 1]) ? (((~(arr_7 [i_4])))) : 472146170734678282));
                        arr_19 [2] [i_5] [i_5 - 1] [i_5] = (((arr_9 [i_2 + 1] [i_3]) || -1));
                        var_19 -= (var_7 && -var_12);
                    }
                }
            }
        }
        var_20 = (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_2]);
        var_21 = (-((var_11 ? 0 : 472146170734678282)));
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 15;i_7 += 1)
            {
                {
                    var_22 = 1;
                    arr_25 [i_2] [i_6 - 1] [i_6] = -2496513085062690366;
                    var_23 = 255;
                }
            }
        }
        var_24 = ((!(((-(arr_14 [i_2 - 1] [i_2 - 1]))))));
    }
    #pragma endscop
}
