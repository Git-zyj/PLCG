/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((6069188287561106629 || (4031777274 ^ 0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [2] [2] [11] = var_11;
                arr_6 [i_1] = ((var_10 ? var_4 : 47));
            }
        }
    }
    var_14 *= (((((((var_5 ? var_10 : var_9)) <= 0))) != var_8));
    var_15 = var_8;

    for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_20 [i_4] [i_3] [6] = (max(76, (((!(var_5 / var_12))))));
                        arr_21 [i_4] [4] = (var_10 >= (1118233926 != 5506));
                        arr_22 [i_5] [i_3] [i_4] &= var_0;
                        var_16 = ((var_1 ? (47 < -64) : ((10084 ? (!var_12) : var_2))));
                    }
                }
            }
        }
        arr_23 [i_2] = var_5;
        arr_24 [i_2] [i_2 - 1] &= (min(11097655908984936681, (((((min(96, var_5))) || (((var_2 ? 25208 : var_10))))))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
    {
        var_17 ^= ((!(((var_7 ? var_12 : 7349088164724614942)))));
        var_18 ^= ((var_12 ? (var_10 > 0) : 5));
        arr_27 [i_6] = ((var_7 << (((40328 / var_8) - 5))));

        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_19 = (min(var_19, (var_4 + var_1)));
            var_20 = (var_1 <= var_1);
            arr_31 [i_6] [i_7] = ((var_12 ? ((140 ? var_10 : var_7)) : 65488));
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_21 = (((var_2 != 13624) ? var_0 : var_7));
                            arr_38 [i_6] [i_7] [i_7] [i_7] [i_9] = var_8;
                        }
                    }
                }
            }
            var_22 = (11652079805863335441 ? 18446744073709551615 : var_9);
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 3; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 17;i_13 += 1)
                {
                    {
                        arr_49 [i_11] [i_13] = (var_9 < var_0);

                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            var_23 = ((!(!0)));
                            arr_53 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [18] [i_6 - 1] = (9223372036854775807 <= var_9);
                        }
                        arr_54 [18] [i_11] [14] [17] = (!0);
                        arr_55 [i_6] [i_6 + 1] [8] [i_6 - 1] [i_6 - 1] [18] = 0;
                    }
                }
            }
            var_24 += var_9;
            var_25 = 29418;
        }
    }
    for (int i_15 = 1; i_15 < 19;i_15 += 1) /* same iter space */
    {
        var_26 ^= (var_7 + var_8);
        var_27 -= ((((!var_5) * (var_2 <= var_8))));
    }
    #pragma endscop
}
