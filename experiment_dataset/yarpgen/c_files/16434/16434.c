/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            var_18 -= var_12;
            var_19 = (((((arr_4 [12] [i_0] [i_0]) == var_16)) ? (((arr_2 [i_1 + 2]) ? var_4 : var_1)) : -4));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_20 = (arr_0 [i_2]);
            var_21 *= (~var_6);
        }
        var_22 += ((-var_1 > ((~(arr_2 [i_0 + 1])))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_23 = (max(var_23, 65535));
            var_24 = (max(var_24, var_16));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        var_25 = 108;
                        var_26 = var_15;
                        var_27 = (((arr_10 [i_3] [i_4] [i_5]) ? (!-2) : var_3));
                        arr_19 [i_3] = 156;
                        var_28 = (((arr_18 [i_3] [i_6]) ? var_14 : (arr_11 [i_6] [22] [i_6])));
                    }
                }
            }
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 4; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    {
                        var_29 = (max(var_29, (1 - var_11)));
                        var_30 = ((-var_5 / (arr_21 [i_3] [i_8 + 3] [i_3])));
                    }
                }
            }
            var_31 = var_11;
        }

        for (int i_10 = 2; i_10 < 22;i_10 += 1)
        {
            var_32 = (!-858687030);
            var_33 = ((((!(arr_14 [i_10 + 2] [i_10] [i_10 + 2] [4]))) ? (arr_22 [i_3] [i_10 - 1]) : var_9));
            arr_30 [i_3] [i_3] [i_10] = var_11;
        }
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 15;i_11 += 1)
    {
        var_34 = (((arr_31 [i_11 + 2]) ^ var_15));

        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            var_35 |= (-13480 ? 2684821338 : 13479);
            var_36 = var_14;
        }
    }
    var_37 *= ((((min(var_15, (((var_0 ? var_2 : var_14)))))) ? ((((((var_4 ? var_6 : var_16))) ? (7032368452487211693 > -27) : var_6))) : var_7));
    #pragma endscop
}
