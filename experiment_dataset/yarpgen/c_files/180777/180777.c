/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [1] [i_0] = ((arr_4 [i_0] [i_2] [i_3]) * ((((arr_1 [i_0]) / (arr_8 [3] [i_2] [i_2] [15] [i_1] [i_0])))));
                        var_10 = (~13436507207762963825);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_11 += ((!(((-(min(-1190867050, -1190867050)))))));
                    arr_14 [i_0] [i_4] [i_4] = ((((min((arr_0 [i_4]), (arr_1 [i_0])))) * (!31)));
                    var_12 -= ((~(((!1190867040) / var_0))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        var_13 = (((~9206) != (arr_3 [i_6] [i_6] [i_6])));
        var_14 = (~(!-1190867061));

        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
        {
            arr_21 [i_7] = (((((arr_16 [i_6]) + 2147483647)) << (((((arr_16 [i_6]) + 4269)) - 24))));

            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                arr_24 [i_6] [i_7] [i_7] [i_8] = (2106118676866265076 / 1);
                var_15 = var_0;
                var_16 |= (-(arr_10 [18] [i_6]));
            }
        }
        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
        {
            arr_27 [i_9] [i_9] = ((-27411 ? 255 : -1190867040));
            var_17 = (!1);
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
        {
            var_18 = (min(var_18, 100));
            var_19 = ((-2106118676866265077 ? (arr_2 [i_6] [14]) : (arr_19 [i_6] [i_6])));
        }
    }
    for (int i_11 = 2; i_11 < 9;i_11 += 1)
    {
        arr_32 [i_11] = (arr_2 [i_11] [i_11]);
        arr_33 [i_11] |= max((((!(arr_1 [i_11 - 2])))), (((arr_1 [i_11 + 1]) ? (arr_23 [i_11 - 1] [i_11] [i_11]) : (arr_1 [i_11 + 1]))));
    }
    var_20 = (max(var_9, var_6));
    #pragma endscop
}
