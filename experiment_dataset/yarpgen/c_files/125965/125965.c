/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_15;
        var_20 = (min(var_20, var_18));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, (arr_6 [i_0] [i_1] [i_2 + 1])));
                    var_22 = ((((arr_4 [i_2] [i_0] [i_0]) == (arr_0 [i_1] [i_1]))));
                }
            }
        }
        var_23 = (max(var_23, (((!(((var_6 ? var_12 : (arr_4 [i_0] [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        var_24 = (min(var_24, 25));
        var_25 = (max(var_25, (((~(arr_8 [i_3 + 1]))))));
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_26 = (max(var_26, ((((((0 / 6584836188897784839) * 1)) * ((((36171 * 155) / (var_15 / var_8)))))))));
                    var_27 = (min(var_27, ((((arr_10 [i_5]) == var_11)))));
                    var_28 = (max(var_28, (((!((max((arr_13 [i_4] [i_5] [i_4]), ((var_10 % (arr_13 [22] [i_5] [i_4])))))))))));
                    arr_16 [i_4] [i_5] [i_4] = (12 < 2147483647);
                    var_29 = (max(var_29, (((-(((var_2 || var_5) ? ((max((arr_11 [i_4]), var_1))) : var_12)))))));
                }
            }
        }
    }
    #pragma endscop
}
