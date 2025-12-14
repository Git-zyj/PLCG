/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = -1;
        var_19 = (-109 < -563130048);
        arr_2 [i_0] = (0 <= 4);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_20 = (arr_8 [i_0] [i_0] [i_2 - 1] [i_2 - 3]);
                        var_21 = ((4 | (arr_4 [i_2 - 3])));
                        var_22 ^= -30;
                        var_23 -= 10;
                    }
                }
            }
        }
        var_24 = ((65519 && (17 && 65535)));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    {
                        arr_24 [i_4 - 1] [1] [i_4] = (arr_14 [i_4 - 1] [i_5] [i_6]);
                        arr_25 [i_4] [i_5] [i_6] [i_7 + 1] = (min((max((arr_6 [i_4] [i_7 + 1] [i_4 - 1] [i_4]), (arr_3 [17]))), ((((arr_10 [i_4]) && var_0)))));
                    }
                }
            }

            /* vectorizable */
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    var_25 = 14;
                    arr_31 [i_4] [4] = var_8;
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    var_26 = (min(var_26, var_9));
                    var_27 = (arr_13 [i_4] [i_4]);
                }
                var_28 = (arr_13 [i_4] [i_4]);
                var_29 = (min(var_29, (((7216 >= (arr_12 [i_8 - 1] [i_8 - 1]))))));
                var_30 += (((arr_19 [i_5] [i_5]) ? 63 : var_13));
            }
        }
        arr_35 [i_4] [i_4 - 1] = (((((1 / 1) ? 18446744073709551608 : (((min(-1, -9)))))) * (arr_14 [i_4] [11] [i_4 - 1])));
    }
    var_31 += ((((-(var_5 / var_9))) << 0));
    var_32 &= var_12;
    var_33 += ((((((min(var_2, 0))))) + 14));
    #pragma endscop
}
