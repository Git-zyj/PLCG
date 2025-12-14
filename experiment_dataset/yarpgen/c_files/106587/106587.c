/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 &= ((max(-13539, 16365827448930157696)) == -19462);
        var_16 = var_3;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_17 = (arr_6 [i_1] [3]);
            arr_7 [i_2] = 6740632594309816719;
            arr_8 [i_1] = (arr_5 [i_1] [i_1] [i_2]);

            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                var_18 = var_12;
                arr_11 [i_1] [i_1] [i_3] &= var_11;
            }
        }
        arr_12 [i_1] [i_1] = (arr_10 [i_1]);
        arr_13 [i_1] [14] = (arr_10 [i_1]);
        var_19 = 16365827448930157696;
    }
    #pragma endscop
}
