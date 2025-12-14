/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = var_7;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_19 = arr_4 [i_0];
                        arr_13 [i_2] [i_1] [i_2] [i_3] = (max(((((arr_11 [i_0] [i_0] [i_0] [i_0]) + (arr_7 [i_0] [i_0] [17])))), (max(2360074019, 226))));
                        var_20 = (max((arr_2 [i_3]), (arr_5 [i_0])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 9;i_4 += 1)
    {
        var_21 *= var_1;

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_22 = var_16;
            arr_19 [i_4] = ((~((((arr_2 [i_4]) || (arr_2 [i_4]))))));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_23 += ((var_17 % (((~(arr_15 [i_6]))))));
            arr_24 [i_4] [i_4] = arr_11 [i_6] [i_6] [i_6] [i_6];
            var_24 *= (arr_7 [i_4 - 1] [i_4 - 2] [i_4 + 1]);
            var_25 = (min(var_25, (255 && 223)));
            var_26 = 2046;
        }
        arr_25 [i_4] = var_3;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_27 += (arr_1 [i_7]);
        arr_28 [i_7] = (~var_13);
    }
    var_28 = ((var_13 != ((min(var_8, var_16)))));
    #pragma endscop
}
