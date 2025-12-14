/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = ((((max(var_7, ((3221225472 ? 3221225468 : (arr_3 [i_1 - 2] [i_1 - 1])))))) ? (arr_1 [i_0]) : ((var_3 ? (var_9 || 42047) : (arr_3 [i_1 - 1] [i_0 + 2])))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [i_3] [i_2] [i_1 - 3] [i_0] = 42073;
                            arr_15 [i_0] [i_3] [i_2] [i_1 + 1] [i_1] [i_0] [i_0] = ((16172 ? (var_12 == 549667700) : (((((min(var_13, (arr_9 [i_4 + 2] [3] [i_0 + 1] [i_0 + 1] [i_0 + 1])))) != (arr_10 [i_4 - 1] [i_0] [i_0 - 1]))))));
                        }
                    }
                }
            }
            arr_16 [i_0] = var_0;
        }
        arr_17 [4] = ((var_2 ? (((((((arr_7 [12] [i_0] [i_0 + 2] [12]) - 1073741822))) ? 1 : (arr_0 [i_0 + 1])))) : ((var_3 - (((-5911583380240954271 ? var_13 : var_5)))))));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            arr_23 [13] [i_6] [i_6] = (16684249883714528883 / 17);
            arr_24 [i_6] [i_6] = (min((max((var_12 | -35), ((min(var_4, (arr_20 [i_5] [i_5])))))), ((((arr_19 [i_5]) ? 110 : (arr_19 [i_5]))))));
        }
        /* vectorizable */
        for (int i_7 = 4; i_7 < 23;i_7 += 1)
        {
            arr_27 [21] = ((var_5 & (arr_20 [i_7] [i_7 - 3])));
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {
                        arr_34 [i_9] [i_8 - 1] [i_5] [i_5] [i_5] [i_5] = (((!-16) ? 125 : (arr_33 [i_9])));
                        arr_35 [i_5] [i_5] [i_5] = (((arr_21 [i_5] [i_5] [i_5]) ^ ((((var_3 <= (arr_32 [i_8 + 2] [i_7])))))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    {
                        arr_40 [10] [i_10 - 2] [i_5] [i_5] [i_5] = (arr_30 [i_10 + 1] [11] [i_7 - 4]);
                        arr_41 [i_5] [i_7 - 4] [i_7 - 4] [i_7 - 4] [i_5] = (var_1 / 2363859285);
                    }
                }
            }
            arr_42 [i_5] = var_10;
        }
        arr_43 [i_5] = arr_26 [i_5];
    }
    var_15 = (((((1 ? 112 : 14936234126612954018)) >> ((((6485829795606248649 ? var_11 : var_7)) - 433330382)))) <= (10174912259989476989 < 11501));
    var_16 = (var_8 >= 1021297097498602687);
    var_17 = (var_1 ? (((23463 ? var_7 : 18446744073709551615))) : var_12);
    #pragma endscop
}
