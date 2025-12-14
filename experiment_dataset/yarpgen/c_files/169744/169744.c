/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_14;
        arr_4 [i_0 - 1] = 122;
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = (arr_8 [i_1 + 1]);

        for (int i_2 = 4; i_2 < 9;i_2 += 1) /* same iter space */
        {
            arr_14 [i_1] [i_2] = (((((-1176179288 > (arr_1 [i_1 + 2])))) * (((!(arr_1 [i_1 + 2]))))));

            for (int i_3 = 4; i_3 < 9;i_3 += 1)
            {
                arr_18 [0] [6] = ((((((var_8 ? (arr_1 [i_1]) : (arr_8 [i_2])))) ? (arr_7 [i_2] [i_1 + 2]) : (arr_17 [1] [i_2] [1]))));
                arr_19 [i_3] = (max(((((arr_5 [i_3]) ? var_7 : var_9))), (arr_0 [i_1])));
            }
        }
        /* vectorizable */
        for (int i_4 = 4; i_4 < 9;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                arr_27 [0] = ((((var_15 ? (arr_8 [i_4]) : -123)) != -41));
                arr_28 [i_1] [6] [i_5] &= (((arr_11 [i_4 - 2] [i_1 + 2] [i_1 + 2]) ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 + 2])));
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                arr_32 [i_4] [i_4] [i_1] [i_4] = ((!(((1 ? 70 : 59)))));
                arr_33 [i_4] [i_4] [i_4] = 3107439398;
            }

            for (int i_7 = 2; i_7 < 9;i_7 += 1) /* same iter space */
            {
                arr_36 [i_4] [2] [2] = (arr_17 [i_4] [4] [i_4]);
                arr_37 [i_7] = (arr_7 [i_1 + 2] [i_7 - 1]);
                arr_38 [i_4] [i_4] = (~var_9);
            }
            for (int i_8 = 2; i_8 < 9;i_8 += 1) /* same iter space */
            {
                arr_42 [i_1 - 1] [i_4] [i_1 - 1] = 2863605228;
                arr_43 [i_4] = (((((45 ? 14321917491656034820 : var_10))) ? var_8 : (arr_29 [i_8 + 1] [i_1 + 2] [i_4 - 1])));
                arr_44 [i_1] [i_4] = ((+((var_4 ? (arr_34 [i_4]) : (arr_8 [8])))));
                arr_45 [i_1] [i_4] [i_8] = (~100);
            }
            arr_46 [i_4] [i_4] = -36572;
            arr_47 [0] = (((arr_6 [i_1 + 2] [i_4 + 1]) ? var_15 : (arr_6 [i_1 - 1] [i_4 - 4])));
        }
        arr_48 [i_1] = ((~(126 % 173)));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 8;i_9 += 1) /* same iter space */
    {
        arr_51 [i_9] [i_9 + 1] = var_2;
        arr_52 [6] [i_9] = (!var_14);
        arr_53 [4] |= (arr_20 [i_9 + 2]);
        arr_54 [i_9] [i_9] = var_12;
        arr_55 [8] = (arr_0 [i_9]);
    }
    var_18 = ((!((((var_14 ? var_15 : var_2))))));
    var_19 = var_2;
    #pragma endscop
}
