/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(28025, 4629856242650662733));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_19 = (((((arr_6 [i_1] [i_2 + 1] [i_4 + 1]) ? 52 : (arr_6 [i_0] [i_1] [i_3]))) ^ (!var_17)));
                                var_20 -= ((!(((17693160974399293658 ? -1918022179 : (-9223372036854775807 - 1))))));
                            }
                        }
                    }
                }
                arr_13 [i_1] = var_16;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {

                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_21 = (min((((-121 + (arr_21 [i_8] [i_7 - 1] [i_5 + 1])))), (arr_22 [i_6] [i_7 + 1] [i_5 + 1] [i_6])));
                        arr_25 [i_7] [i_7] [i_5] [i_5] [i_7] [i_5] = (arr_18 [i_7 - 1] [i_5]);
                        var_22 |= var_2;
                        var_23 -= -48;
                    }
                    arr_26 [i_5 - 3] [i_6] [i_7] = (!-2147483648);
                    var_24 = -6876769960767170709;
                }
                arr_27 [i_5] [i_5] = var_1;
                arr_28 [i_6] |= (min((arr_23 [14] [i_6] [i_6]), (max((((var_6 != (arr_24 [i_5] [i_5 - 4] [i_5 - 4] [i_5] [i_5 - 4])))), (~var_16)))));
                var_25 ^= (((var_5 ? var_9 : 48)));
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_26 = -11575;
                            arr_33 [19] [19] [9] [i_10] [i_10 - 1] = (((((arr_22 [16] [i_10 - 1] [i_10] [i_6]) + 9223372036854775807)) << (((-24737 + 24747) - 10))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 3; i_11 < 15;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        {
                            arr_45 [i_14] [14] [14] [i_11] [i_11] = ((-((((arr_22 [i_12] [i_12] [i_12] [i_12]) != ((-(arr_29 [i_12] [i_12] [i_13 + 1] [i_13 + 1]))))))));
                            arr_46 [i_11] [i_12] [i_13] [0] = ((!(((~(arr_34 [i_11 - 3]))))));
                        }
                    }
                }
                var_27 ^= -49;
                var_28 = (((((arr_4 [i_12] [i_11 + 1] [i_11 + 1]) > var_16)) ? (arr_4 [i_11] [i_11 + 1] [i_11 - 1]) : (((!(arr_4 [1] [i_11 + 1] [8]))))));
            }
        }
    }
    #pragma endscop
}
