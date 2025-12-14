/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [7] = var_2;
        var_18 = (min(var_18, (((-(((!(~var_3)))))))));

        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    var_19 ^= (((18212836228607806653 <= 50335) ? -246 : 1813825655));
                    var_20 = (!3902962049818821633);

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] &= ((!(((3902962049818821617 << (3902962049818821633 - 3902962049818821633))))));
                        arr_14 [i_2] = ((!(!3902962049818821640)));
                        var_21 = (3553740462062578904 ^ 3902962049818821640);
                        var_22 = (min(var_22, 1423704659));
                        var_23 = (max(var_23, var_15));
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_24 = (min(var_24, (((-(((!(!1)))))))));
                        var_25 = (max(var_25, (((94 ? 186756077 : -32749)))));
                    }
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_0] [i_2] [i_1] = -var_12;
                    arr_22 [0] = var_10;
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                {
                    var_26 += 3090377351298874245;

                    for (int i_8 = 1; i_8 < 7;i_8 += 1)
                    {
                        var_27 += ((((var_7 ? -var_10 : (((var_16 ? var_12 : var_9))))) / -15201));
                        arr_28 [i_8] [7] [7] [2] [2] [7] [i_8] = -11430;
                        arr_29 [6] [4] [6] [5] [i_8] [i_8] = ((var_15 ? ((~(var_9 ^ var_4))) : (!var_12)));
                        arr_30 [i_8 + 3] [i_7] [i_8] [i_2] [i_8] [i_0] [4] = 50335;
                    }
                    for (int i_9 = 3; i_9 < 8;i_9 += 1)
                    {
                        var_28 = (min(var_28, var_5));
                        var_29 = var_14;
                        var_30 = (((3902962049818821633 ? 112 : 0)));
                    }
                }
                arr_33 [i_0] [i_0] = (((((-(-3621 ^ 1)))) || 45344));
            }
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                var_31 ^= (((-(!var_5))));
                arr_37 [i_0] [i_10] [i_10] [i_10] = var_1;
            }
            /* LoopNest 2 */
            for (int i_11 = 4; i_11 < 7;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 6;i_12 += 1)
                {
                    {
                        var_32 += var_13;
                        var_33 ^= ((((!(!var_0)))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 11;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            {
                var_34 -= -0;

                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    var_35 = (max(var_35, (var_4 <= 9223372036854775807)));
                    var_36 = (max(var_36, var_1));
                }
            }
        }
    }
    var_37 = (max(var_37, 50335));
    #pragma endscop
}
