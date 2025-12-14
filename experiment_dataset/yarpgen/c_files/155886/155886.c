/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 |= (max((max((arr_2 [i_0] [i_0 - 1]), (-2147483647 - 1))), (((arr_2 [i_0 - 1] [i_0 - 1]) % (arr_2 [1] [i_0 - 1])))));
                var_14 = (min(var_14, ((((31457280 ? 1838617417 : -717330034))))));
                arr_5 [1] = arr_1 [i_0];
                arr_6 [i_0] [i_0] [8] = (arr_3 [i_1] [i_0]);
                var_15 = (max((arr_3 [1] [5]), var_12));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_16 = (var_1 ? (((((max((arr_2 [i_2] [i_2]), var_11)) < (((max((arr_2 [23] [i_3]), var_9)))))))) : ((-58230275 ? (arr_19 [i_2]) : (arr_19 [i_2]))));
                                arr_22 [i_2] [i_3] [i_3] [i_2] [11] = (((3863182901 + 717330021) << (4202274261 - 4202274234)));
                            }
                        }
                    }
                    arr_23 [i_2] [i_2] [i_3] [i_4] = -var_1;
                }
            }
        }
    }

    for (int i_7 = 3; i_7 < 19;i_7 += 1)
    {
        arr_27 [i_7] [6] = 0;
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_17 = (max((min((arr_4 [i_8 + 3] [i_8 - 1]), (arr_24 [i_7 + 1] [i_7 + 1]))), (((38503 ? -684636320 : 133693440)))));
                    var_18 = (min((((((arr_25 [i_7] [i_9]) ? (arr_3 [i_7 - 1] [i_8]) : var_2)) + (((133693440 << (-306341228 + 306341252)))))), (((227146157 <= (1 && 4161273855))))));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    arr_42 [i_10] [i_10] [i_12] = ((min(-341351945, (arr_29 [i_10] [i_12]))));
                    var_19 = (min(var_19, -145806974));
                }
            }
        }
        var_20 = var_9;
        var_21 = (max(var_21, 4161273855));
        var_22 = ((((~(arr_24 [i_10] [i_10]))) | (arr_24 [i_10] [i_10])));
        arr_43 [i_10] = ((max(var_8, (~var_6))));
    }
    for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
    {
        var_23 = (((-2147483647 - 1) - -1925106168));
        var_24 = var_10;
        var_25 = (max(var_7, (((arr_24 [i_13] [i_13]) ? var_6 : (arr_20 [i_13] [i_13] [1] [i_13] [1])))));
        var_26 |= var_4;
    }
    var_27 += -var_7;
    #pragma endscop
}
