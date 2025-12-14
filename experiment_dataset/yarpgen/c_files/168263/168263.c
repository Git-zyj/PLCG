/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [20] [i_0] = ((((((var_4 & var_5) <= 424969774))) <= (((!(var_2 >= var_5))))));
        arr_3 [i_0] = (max(3594541940, ((((7128443623518163684 << (var_11 - 1471461430))) & (~var_6)))));

        /* vectorizable */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] [12] [12] = (arr_1 [i_1 + 2]);
            arr_7 [i_1] [i_0] = ((var_11 ? 0 : (!32)));
            arr_8 [i_0] = 1;
            arr_9 [i_0] = var_6;
        }

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_12 [i_0] = 258064748;

            /* vectorizable */
            for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
            {
                arr_15 [i_0] [i_0] [i_0] [i_0] = 3142352452;
                arr_16 [i_0] [i_2] [i_0] = var_0;
            }
            for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
            {
                arr_20 [i_0] [i_0] = (((((((var_9 ? 12660493885109079237 : var_0)) != (arr_19 [0] [i_4] [11] [2])))) <= ((((max(7898, var_9)) != var_8)))));
                arr_21 [i_2] [i_2] [i_2] [i_2] = (254 / -258064748);
            }
            for (int i_5 = 4; i_5 < 22;i_5 += 1)
            {
                arr_24 [i_5] = ((63 | (var_10 && var_10)));
                arr_25 [i_0] [i_2] [1] [8] = (((arr_10 [9]) ? (((((var_10 * var_12) >= var_0)))) : (~var_9)));
            }
            arr_26 [i_0] [i_0] [i_0] = var_3;
            arr_27 [i_0] [i_0] = var_9;
            arr_28 [16] = 3408619398116548154;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            arr_31 [i_6] [i_6] = -var_12;
            arr_32 [9] [i_6] = (424969774 == (!var_2));
            arr_33 [i_6] [i_6] = 151;
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 21;i_7 += 1)
        {
            arr_36 [i_0] = (((var_11 - var_2) > 23109));
            arr_37 [1] [1] [i_7 + 1] = ((~((var_6 ? var_5 : 2502674902))));
        }
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 21;i_8 += 1)
    {
        arr_40 [i_8 + 3] [i_8] = -var_5;
        arr_41 [i_8] = var_2;
        arr_42 [i_8 - 2] = (((7128443623518163684 > 3869997521) ? (((~(arr_38 [i_8])))) : ((var_7 / (arr_39 [i_8])))));
    }
    var_13 = (min(var_0, var_6));
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            {
                arr_48 [i_10] [i_10] [12] = (((((781626928 != var_0) ? var_12 : ((-(arr_44 [i_9]))))) | ((((((((var_3 != (arr_46 [i_9] [i_9]))))) > (min(var_0, var_6))))))));
                arr_49 [24] [i_10] = (max(var_4, (min((~var_10), (arr_43 [i_9])))));
                arr_50 [i_9] = ((~((-32109 + (arr_43 [i_9])))));
            }
        }
    }
    #pragma endscop
}
