/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [11] = (min(3388724367, -9189));
        var_18 &= (min(((min(var_14, 4784))), (min(((min(var_2, (arr_1 [i_0])))), var_3))));
    }

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_19 = (max((min((arr_4 [i_1]), (arr_3 [i_1] [i_1]))), ((max((min(var_16, 16384)), var_6)))));
        var_20 = ((((((min((arr_3 [i_1] [i_1]), var_1))) <= 100)) ? var_3 : -var_3));
        arr_5 [13] [13] = var_15;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_16 [i_4] [i_4] = (max(var_13, (var_1 | var_13)));

                        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_21 = ((9191 ? 31525197391593472 : (((((max(var_14, var_7))) ? 2147483647 : (6351543133578605307 >= 35279))))));
                            var_22 = 2147483647;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_4] [i_4] = var_7;
                            arr_24 [i_2] [2] [i_2] [11] [11] [i_4] [i_2] = (var_9 | -2147483647);
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                {
                    arr_30 [i_9] [i_8] = (max(((min(4294967272, 1041418968))), (((max(var_10, 17179868928))))));
                    var_23 ^= (arr_18 [12] [i_8] [i_8] [i_8]);
                    var_24 = 4294967265;
                }
            }
        }

        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            arr_35 [i_10] = var_14;
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 16;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    {
                        var_25 = ((((max(7526379591611463412, -16624))) ? ((((min(var_15, 1269611728803746666))))) : (7526379591611463412 & 18446744073709551596)));
                        var_26 = 25;
                    }
                }
            }
            var_27 = ((var_14 != ((((arr_15 [i_2] [i_10] [1] [i_10]) > var_3)))));
            arr_44 [i_2] [i_10] = (((10920364482098088189 >= 25129) | (((min(899285386, var_0)) << (((arr_9 [i_2] [i_2] [i_10]) - 90768859))))));
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    {
                        var_28 = 18005;
                        var_29 = var_14;
                        arr_51 [i_2] [i_13] [i_14] &= 68719476735;
                        arr_52 [i_2] [i_10] [i_13 - 1] = (((((17179868909 - var_2) - (arr_18 [i_13 + 2] [i_13 + 2] [6] [i_13]))) + ((min(var_17, (arr_37 [i_10] [i_13 - 1] [i_13]))))));
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            arr_55 [i_2] = ((!(((var_4 ? 291621489911093115 : (arr_25 [i_15]))))));
            var_30 = 65509;
        }
        var_31 = (max(var_31, 7526379591611463412));
    }
    #pragma endscop
}
