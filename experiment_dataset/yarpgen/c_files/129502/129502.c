/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 ^= (arr_3 [11] [11] [i_1]);
                arr_5 [i_1] = ((var_8 ? (var_8 + var_3) : (((-(arr_4 [i_0 - 3] [i_0 - 3] [i_0]))))));
                var_14 = ((-((-1221427982 ? -7202853644198833039 : 1221427982))));
                arr_6 [0] [11] = ((!(((525813155 ? 2920180452 : 7202853644198833026)))));
            }
        }
    }
    var_15 = -6;

    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_16 *= (((-2147483647 - 1) ? 525813134 : 3));
        arr_10 [i_2] = ((~((((((-588973045 + 2147483647) << (1270655041 - 1270655041)))) ? (arr_7 [i_2]) : (arr_9 [i_2])))));
        var_17 = (((((((max((arr_9 [i_2]), 23872))) ? var_12 : (arr_7 [i_2])))) ? ((var_9 ? (arr_7 [i_2]) : (arr_8 [3] [i_2]))) : (arr_7 [i_2])));
        var_18 ^= 83322289;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        var_19 = (((-2147483647 - 1) ^ 0));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        var_20 ^= var_1;
                        var_21 = var_7;
                        var_22 = ((1270655041 ? (arr_20 [1] [18] [8] [23]) : 18356));
                        var_23 &= (-(arr_15 [i_3] [i_4] [i_5]));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {
        var_24 = (arr_11 [i_7]);
        var_25 = (min(var_25, (((!(arr_21 [i_7]))))));
        var_26 ^= ((!(arr_17 [i_7] [19] [i_7])));
        arr_26 [i_7] = -3769154161;
    }
    var_27 = var_3;

    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            var_28 -= ((44485 ? 1374786855 : 2920180452));
            var_29 = ((4022831262426111092 ? ((((!var_12) ? (arr_28 [i_8]) : (max(-5959340435446245145, (arr_25 [8])))))) : ((30 ? (((21795 ? var_9 : var_9))) : (~var_10)))));
        }
        var_30 = (max(var_30, (((((min((arr_21 [i_8]), var_2))) ? (((!82) + (!117))) : (min((((var_6 + 2147483647) << (var_10 - 4955389960681152204))), (((arr_18 [20] [i_8] [i_8]) ^ 287072341)))))))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                {
                    var_31 -= -5959340435446245143;
                    var_32 = ((var_5 ? (!18446744073709551598) : (((!(arr_18 [19] [i_11 + 1] [i_12]))))));
                    var_33 &= (((arr_17 [i_11 + 3] [i_11 + 3] [i_11 + 2]) ? var_3 : 18267109008659633783));
                    arr_37 [i_10] [i_10] [i_12] = (!-var_5);
                }
            }
        }
        var_34 = -1621289187;
        var_35 = ((20 ? (arr_23 [i_10]) : ((var_7 ? 168 : (arr_15 [i_10] [6] [i_10])))));
    }
    #pragma endscop
}
