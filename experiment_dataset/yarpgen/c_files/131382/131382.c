/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = ((var_9 < (((var_12 == (var_2 <= var_12))))));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_18 &= (max((1 >= var_7), (max((-1520840728 != 4294967295), (max(var_2, var_6))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 |= (min((117440512 || 176598118), var_2));
                    var_20 = ((1579990870 ? 19030 : 3553035940192401630));
                    var_21 = ((53 == ((((!(arr_1 [i_0])))))));
                }
            }
        }
        arr_6 [i_0] = ((var_9 > (arr_1 [i_0])));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_22 = 0;
                        arr_15 [i_0] [3] [i_0] [i_5] = -53789;
                        var_23 ^= (((!-998092621) - 16287));
                    }
                }
            }
        }
        var_24 = var_9;
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 11;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_29 [i_6 + 1] [i_6] [i_6] [i_6 + 1] = (((arr_11 [i_6 + 1] [i_6 - 1] [i_6 + 1]) != (arr_23 [i_6 + 1])));
                        var_25 = ((-1869994509 <= (arr_12 [i_8] [i_6 - 1])));
                        var_26 = ((0 ? (arr_1 [i_8]) : (var_7 | 21)));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 9;i_11 += 1)
            {
                {
                    var_27 = (~var_3);
                    arr_36 [i_11] [i_10] [i_6 + 1] = -15039;
                }
            }
        }
        var_28 -= (arr_4 [i_6 + 1] [i_6] [i_6] [i_6]);
    }
    #pragma endscop
}
