/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = arr_1 [i_0];
        arr_3 [i_0] = (arr_1 [i_0]);

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_0] [15] [i_0] = 0;
            arr_7 [i_0] [i_0] [i_0] = (arr_4 [i_1] [i_0]);
            arr_8 [i_0] [i_0] = (0 != 12);
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_12 [i_0] = -var_0;
            arr_13 [4] [4] &= (arr_5 [i_0] [i_2]);

            for (int i_3 = 3; i_3 < 24;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_13 = (arr_5 [i_3 - 3] [i_4]);
                    var_14 = (min(var_14, -250205073065598076));
                }
                arr_21 [i_0] [i_0] [i_0] = ((-(((!(arr_15 [i_0] [i_0] [i_2] [i_0]))))));
                arr_22 [i_0] [i_0] [i_0] = (arr_5 [i_2] [i_2]);
                var_15 = (((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) / var_7));
            }
            var_16 = ((var_6 ? (arr_11 [i_2] [i_0] [i_0]) : var_4));
        }
    }
    var_17 = var_1;
    var_18 = (~var_3);
    #pragma endscop
}
