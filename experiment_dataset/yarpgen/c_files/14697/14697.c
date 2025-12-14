/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(!-702796774949254936)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((((arr_3 [1] [i_0]) * (arr_3 [i_0] [i_1 + 4]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] = (arr_10 [i_0] [i_0] [i_2] [i_3] [i_4] [i_3]);
                                var_12 = arr_14 [i_0 + 1] [i_1] [i_0 + 1] [i_3] [i_4] [i_3];
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_13 |= ((((((arr_18 [i_5]) && 0))) < -3433493637464865371));
        var_14 -= ((!(1 <= var_5)));
        arr_19 [i_5] &= (!((!(arr_18 [21]))));
    }
    for (int i_6 = 4; i_6 < 12;i_6 += 1)
    {
        arr_22 [10] [i_6] = var_9;
        arr_23 [i_6] [2] = (min((min((!65528), (3584 - 1))), 65528));
        var_15 = (((~(arr_20 [i_6]))));
    }
    var_16 = ((-((((min(0, 0))) ? (0 * var_9) : ((0 ? var_8 : var_3))))));
    #pragma endscop
}
