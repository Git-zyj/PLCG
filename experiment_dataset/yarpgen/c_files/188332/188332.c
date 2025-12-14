/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = var_11;

                /* vectorizable */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    var_16 = (((arr_8 [i_0] [i_0] [i_0] [i_2 + 3]) ? (arr_8 [i_0] [i_0] [i_0] [i_2 + 4]) : var_0));
                    var_17 = (var_3 || 56178);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    arr_13 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3] = (arr_4 [i_0 + 3]);
                    var_18 = (min(var_18, 35947));
                }
                var_19 = (min(var_19, (((~(arr_4 [i_0 - 1]))))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_16 [4] [4] |= ((~(arr_2 [i_4])));
        var_20 = 18446744073709551611;

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_21 [i_4] [i_4] [i_4] = (arr_11 [i_4] [i_4] [i_4]);
            var_21 = (max(var_21, (((((arr_10 [i_5] [i_5] [i_4]) + (arr_19 [i_4])))))));
            arr_22 [i_4] [i_4] = ((((-13181 ? var_4 : (~249)))) ? ((max(((min((arr_11 [i_4] [i_4] [i_4]), 0))), ((var_15 ? (arr_18 [i_4] [i_4] [i_4]) : -11431))))) : var_10);
            var_22 = (min((((-162 || ((max(var_4, -1)))))), (arr_17 [i_4] [i_4])));
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    var_23 = (min((((!(arr_24 [i_7])))), ((~(arr_24 [i_8])))));
                    arr_30 [i_6] [i_7] [i_8] [i_7] = (min(-1, 24209));
                    var_24 += (~0);
                }
            }
        }
    }
    #pragma endscop
}
