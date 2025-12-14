/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_6;
    var_11 = -var_0;

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_12 = ((((min(var_8, var_4))) ? -var_1 : ((+(((arr_1 [i_0]) * (arr_1 [i_0])))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = var_4;
            arr_7 [i_0] [i_1] = (arr_3 [i_0]);
            var_13 *= (((arr_3 [16]) << (((arr_3 [16]) - 798452359))));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_14 |= (((((max(15, 0))) && ((min(var_8, var_1))))));
            arr_10 [i_0] [i_0] = var_6;
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
    {
        var_15 = ((36517 + (arr_4 [i_3 + 1] [i_3 + 1] [14])));
        var_16 = (min(var_16, (arr_1 [i_3 + 1])));
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 22;i_6 += 1)
            {
                {
                    arr_24 [4] [i_5] = ((min((arr_22 [i_4] [i_5] [i_6 - 1]), (arr_22 [1] [1] [i_6 - 1]))));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_17 = ((15 + ((~(arr_17 [i_4 + 1] [i_5])))));
                                arr_29 [i_4 + 1] [i_4 + 1] [i_6] [i_4 + 1] [i_5] [8] = (min((((((arr_11 [i_4]) ? 1 : 1)) << (((max(15, var_8)) - 2115355012)))), ((((51314 ? (arr_1 [14]) : (arr_23 [i_4] [0] [i_6 - 3]))) / 14205))));
                                var_18 = ((!((1 || ((min((arr_1 [1]), 7299862107323562286)))))));
                                var_19 = (arr_8 [6] [i_5] [1]);
                                var_20 = (max(var_20, (((!(((-(arr_23 [i_4] [i_8 + 3] [i_6 - 3])))))))));
                            }
                        }
                    }
                    arr_30 [i_5] [i_5] [i_6 + 1] = (((arr_16 [i_6]) + -0));
                }
            }
        }

        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            var_21 = ((var_6 || ((!(arr_1 [23])))));
            arr_35 [i_4 + 1] [i_9 + 1] = (max((((var_4 ? -1 : ((((-32767 - 1) <= (arr_16 [i_4]))))))), (arr_0 [i_4 + 1] [i_9 + 1])));
        }
        for (int i_10 = 1; i_10 < 22;i_10 += 1)
        {
            var_22 += ((((((arr_27 [i_4 + 1] [i_10 + 2] [i_10 + 2] [i_4]) ? var_2 : var_9))) || (((((min(var_5, 3303150413))) ? 1 : (((0 <= (arr_12 [i_4 + 1])))))))));
            arr_38 [i_4 + 1] [i_10] = ((0 ? ((var_1 | (arr_36 [i_10] [i_4 + 1]))) : (!4012644013)));
        }
        arr_39 [i_4] = -18288;
    }
    #pragma endscop
}
