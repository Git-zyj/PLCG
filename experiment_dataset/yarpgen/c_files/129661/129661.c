/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_21 = (arr_0 [i_0 - 2]);
        arr_2 [4] &= (-(1 + 2251799813685247));
    }
    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        var_22 = ((((1 ? 1 : -967816210)) > 1));
        arr_7 [i_1] = min((!-191), (arr_4 [i_1]));
        var_23 = (arr_6 [i_1 + 3]);
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                {
                    var_24 = (min((((arr_13 [i_2] [i_2] [i_4]) < (arr_10 [i_3 - 1]))), var_1));

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        var_25 = (min(var_25, (arr_16 [i_5] [i_4 + 2] [9] [i_3] [i_2] [14])));
                        arr_18 [i_2] [i_3] [i_4 + 2] = (((arr_12 [i_5 - 1] [i_3 - 1] [i_4 - 2]) % (var_18 * var_18)));
                        var_26 = (max(var_26, (arr_9 [i_2] [i_2])));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_2] [16] [5] [6] = var_7;
                        var_27 = ((0 || (((24 ? 1 : 2475370934)))));
                        arr_23 [i_2] [i_6] [i_2] [i_6 + 1] = (!(arr_20 [i_4 + 1] [i_6] [i_6 + 2] [i_6] [i_4]));
                    }
                    for (int i_7 = 1; i_7 < 17;i_7 += 1) /* same iter space */
                    {
                        var_28 ^= (((-64 ? 9241 : 127)));
                        arr_27 [i_2] [6] [i_4] [i_2] [i_2] [i_7] = (min((max((max((arr_15 [i_2] [i_2] [i_3 - 1] [i_4] [i_2]), (arr_10 [i_4]))), (arr_20 [i_7 - 1] [i_7] [12] [i_7 + 1] [i_7]))), (((!(arr_13 [i_4] [i_4] [13]))))));
                    }
                }
            }
        }
        var_29 = (arr_8 [i_2]);
    }
    var_30 = ((var_4 ? var_19 : (max((max(var_17, var_14)), (var_15 == var_12)))));
    #pragma endscop
}
