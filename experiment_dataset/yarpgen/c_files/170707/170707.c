/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((((arr_2 [i_0 + 2] [i_0] [i_0]) + (arr_3 [i_0])))) || (((~(arr_3 [i_0]))))));
                arr_6 [i_0 + 1] [i_0 + 1] = (min(63, 33482));
            }
        }
    }
    var_11 = ((max(((max(3986607427, 308359868))), 6)) != ((max((max(3986607426, -31)), var_6))));
    var_12 = ((18446744073709551609 && ((var_2 == (max(var_8, var_0))))));
    var_13 = (min(-52, (max((-97 & 33482), (max(var_2, var_10))))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_10 [i_2] = var_1;
        arr_11 [i_2] = (((var_5 * var_2) * -113));
        arr_12 [i_2] [i_2] = var_6;
        arr_13 [i_2] [14] = -var_8;
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        arr_16 [i_3] = (((45 ? ((var_3 ? var_4 : var_8)) : (min(175, 4895491911891539891)))));
        arr_17 [8] &= -6001;
        arr_18 [i_3 + 3] = 4;
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    arr_26 [i_6] = (-(min(var_5, -var_3)));
                    arr_27 [i_4] = ((var_10 ? var_3 : 0));
                    arr_28 [i_4] [i_5] = ((3986607427 | ((-(~6342605278716498643)))));
                    arr_29 [20] [20] [i_5] [20] = (min(var_2, (var_0 & -1116167684)));
                    arr_30 [i_5] [i_4] = (arr_14 [9] [14]);
                }
            }
        }
        arr_31 [i_4] = (min(((182 ? (arr_19 [15]) : var_8)), (18446744073709551603 | 1687397421)));
    }
    #pragma endscop
}
