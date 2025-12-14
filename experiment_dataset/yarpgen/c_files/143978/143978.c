/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [23] [i_0] = (((((arr_2 [i_0 + 1] [7]) && ((max((arr_1 [i_0]), 124))))) ? var_11 : (max(7, 136))));
        var_13 = (((arr_1 [i_0 + 3]) ? 3151256500 : 31));
        arr_4 [19] |= ((-(((var_12 <= (arr_2 [5] [i_0 - 3]))))));
        var_14 |= (arr_0 [i_0 - 3]);
        var_15 = (max(var_15, (((!((min((((-(arr_0 [i_0])))), (arr_2 [i_0] [i_0 + 1])))))))));
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = 27;

        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            var_16 = (max(var_16, var_0));
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_17 += (((min(2518232119, var_8))));
                            var_18 = (arr_11 [i_2] [i_4] [i_1]);
                        }
                    }
                }
            }
            arr_18 [20] [4] |= ((-((max(var_8, (arr_2 [23] [0]))))));
            var_19 = ((!((max(219, var_8)))));
        }
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_20 ^= ((5 ? var_6 : (arr_9 [18] [12])));
        var_21 -= ((!(arr_14 [i_6] [20] [1] [14] [22])));
        var_22 = (((arr_15 [i_6] [i_6] [1] [1] [7]) / (arr_15 [i_6 - 3] [20] [2] [i_6] [16])));
    }
    for (int i_7 = 4; i_7 < 21;i_7 += 1) /* same iter space */
    {
        arr_23 [15] &= ((18 / (min((arr_9 [4] [1]), (arr_11 [4] [18] [0])))));
        arr_24 [10] [1] = 8323072;
    }
    var_23 = var_11;
    var_24 = (((var_10 ? var_1 : (!78))) * (min(var_4, ((min(0, 8))))));
    #pragma endscop
}
