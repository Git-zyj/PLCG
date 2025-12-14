/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (max(((((((-2147483647 - 1) || var_6))) >> (-9334 + 9356))), var_4));
    var_12 = 7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0]) << (((-25944 + 25987) - 43))));
        arr_4 [i_0] [i_0] = arr_2 [i_0];
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        var_13 = (((arr_1 [2]) >> ((9353 & (arr_6 [i_1])))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_12 [i_1] [2] [14] = ((!(arr_8 [i_1])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_18 [9] [7] = 1750458537678715562;
                        var_14 = (min(var_14, (arr_6 [i_1])));
                        var_15 = (((arr_9 [i_1]) > (127 * 0)));
                    }
                }
            }
        }
        arr_19 [5] = ((-((((arr_6 [5]) >= (max(0, (arr_15 [i_1] [i_1] [i_1 + 2] [i_1]))))))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 23;i_5 += 1)
    {
        var_16 = ((!(arr_21 [i_5 - 1])));
        var_17 -= (arr_21 [i_5]);
        arr_22 [i_5] = ((0 * (arr_20 [i_5] [i_5 - 1])));
    }
    var_18 = 4294967295;
    var_19 += -9334;
    #pragma endscop
}
