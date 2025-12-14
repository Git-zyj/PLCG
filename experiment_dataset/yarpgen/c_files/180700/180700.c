/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((min((var_8 ^ var_9), ((max(var_10, 7504))))));
    var_18 = var_6;
    var_19 = 4829024676403749169;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (arr_3 [22] [i_0] [i_0]);
                var_21 ^= ((min(-1696479651, (min(1, var_3)))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_6 [i_0] [i_1] [i_0] [12] = (min((arr_5 [1] [i_1] [i_2]), (arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 2])));
                    arr_7 [7] [i_0] [i_2] = ((-(((arr_3 [i_0 + 1] [i_2] [i_0]) ? (arr_3 [i_0 - 2] [5] [i_0]) : (arr_3 [i_0 - 2] [17] [i_0])))));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_22 = ((max(var_12, (var_8 >= 1696479651))));
                        var_23 = (min(var_23, (((((var_10 ? var_2 : var_1)))))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_24 = -1696479652;
                            arr_16 [21] [i_0] [1] [i_4] = var_8;
                            arr_17 [i_5] [0] [i_0] [i_4] [i_0] [i_1] [i_0 - 2] = (arr_3 [i_0 + 2] [i_0 + 2] [i_0]);
                        }
                        arr_18 [17] [1] [1] [i_0] = ((!(arr_11 [i_0])));
                        var_25 = 3621633451530021789;
                    }
                    var_26 = 224;
                    arr_19 [i_0] [i_0 + 2] [i_0 + 2] [i_0] = var_13;
                }
            }
        }
    }

    for (int i_6 = 1; i_6 < 23;i_6 += 1)
    {
        var_27 = ((((~(arr_21 [i_6 - 1] [i_6 + 1]))) ^ ((min((arr_21 [i_6 - 1] [i_6 + 2]), (arr_21 [i_6] [i_6 + 1]))))));
        arr_24 [1] = -1696479660;
    }
    for (int i_7 = 4; i_7 < 13;i_7 += 1)
    {
        var_28 ^= (((arr_5 [i_7] [i_7] [22]) >= ((~(arr_1 [i_7])))));
        var_29 = (((min((arr_10 [i_7 + 4] [i_7] [i_7 + 1] [i_7]), var_12))) ? (min((arr_10 [i_7 + 1] [i_7] [i_7 + 4] [i_7]), (arr_10 [i_7 - 3] [i_7] [i_7 - 1] [i_7]))) : (arr_10 [i_7 + 4] [i_7] [i_7 - 2] [i_7 + 2]));
        arr_28 [i_7] = ((-((((arr_11 [i_7]) >= var_8)))));
        var_30 = ((((min((arr_11 [i_7]), (arr_15 [i_7] [i_7 + 4] [i_7 + 4] [i_7 + 4] [20] [4] [i_7])))) ? (!1696479666) : ((((arr_15 [i_7] [i_7 - 1] [i_7 - 4] [i_7 - 1] [i_7] [3] [18]) == 1793593434)))));
    }
    #pragma endscop
}
