/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_13 *= var_12;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [2] &= -0;
                    arr_9 [i_0] [i_1] [i_1] = 32751;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_14 *= (max(-1, (((((arr_10 [i_0]) <= (arr_11 [i_4]))) ? (((((arr_13 [18] [18] [6] [i_4] [12]) <= 5151)))) : (var_12 ^ 11)))));
                                arr_15 [i_1] [i_1] [i_1] = (2608677141774905501 ? (max((((2 ? (arr_2 [i_1]) : (arr_7 [i_1] [i_0] [i_1])))), (((arr_4 [i_0] [i_1] [i_2]) * (arr_14 [i_1] [i_0] [i_1] [i_3 - 1] [i_4] [i_1] [i_1]))))) : ((((6905 ? var_1 : (arr_3 [i_0]))))));
                                arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] = max((min((!4294967295), (arr_6 [i_1] [i_2] [i_4 - 1]))), (arr_6 [i_3 - 1] [i_4 - 2] [i_4]));
                            }
                        }
                    }
                }
            }
        }
        var_15 -= (max((((var_3 <= (arr_10 [i_0])))), (arr_4 [i_0] [0] [i_0])));
        arr_17 [i_0] [i_0] = (((((6755399441055744 - (((6755399441055751 ? 4 : -6906)))))) ? var_11 : (arr_13 [i_0] [i_0] [i_0] [16] [i_0])));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            arr_23 [i_5] = (arr_21 [i_6]);
            var_16 = ((511 == (arr_21 [i_5])));
            arr_24 [i_5] = (min((((-(((!(arr_21 [i_5]))))))), ((((max(2194971910, (arr_22 [i_5] [i_5])))) ? (((4294967295 ? (arr_18 [i_5]) : (arr_21 [i_6])))) : (min(14, 8825))))));
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 22;i_10 += 1)
                    {
                        {
                            var_17 = (min(var_17, var_7));
                            arr_36 [i_5] [i_7] [13] [i_9 + 1] [i_8] [i_9 + 1] = ((!(arr_19 [i_10 + 1])));
                        }
                    }
                }
            }
            var_18 &= ((-((max((arr_30 [i_7] [12] [16] [12]), (arr_19 [i_5]))))));
        }
        arr_37 [i_5] = 11;
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        var_19 = (max(var_19, (arr_22 [i_11] [i_11])));
        arr_41 [i_11] = (min(((min(233668911865560023, 1))), (((!(arr_18 [16]))))));
        var_20 = (max(var_20, var_4));
    }
    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        var_21 = (arr_6 [i_12] [i_12] [i_12]);
        var_22 = (max(var_22, 5769));
        var_23 = (min((max(-9770, -1747268266)), -119));
    }
    var_24 = (max(var_24, var_11));
    #pragma endscop
}
