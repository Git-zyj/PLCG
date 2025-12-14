/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] |= var_1;
        var_19 = (max(var_10, ((-(arr_0 [i_0] [i_0])))));
        var_20 = var_6;
        var_21 ^= (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_22 = (arr_0 [i_1] [i_1]);

                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            var_23 = (max(var_23, (~1)));
                            arr_16 [i_1] [i_1] = ((-1435035318 ? -1435035321 : (((arr_13 [i_2] [i_3] [i_1] [i_5]) - var_18))));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_24 += (((arr_11 [i_4] [i_4] [i_3] [i_2 + 1] [i_4]) ? (var_6 / 24447) : -1435035336));
                            var_25 = (min(var_25, var_13));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_26 = (arr_9 [i_2 - 3] [i_1]);
                            var_27 *= var_6;
                            var_28 = ((54 || (!-1435035312)));
                            arr_23 [3] [i_1] [i_3] [i_1] [5] [i_4] [i_7] = (1 >= 3795265747040972408);
                        }
                        arr_24 [i_1] [i_3] [i_2 - 2] [i_1] = (arr_11 [i_1] [i_1] [i_2] [i_3] [i_4]);
                    }
                }
            }
        }
        var_29 = 1;
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 14;i_9 += 1)
            {
                {
                    var_30 = (((-1435035315 ? var_10 : (arr_20 [i_8]))));
                    arr_30 [i_1] [i_9 - 2] = (((((1208375586 ? -1208375568 : (arr_26 [i_1] [i_8] [i_1])))) ? -var_0 : 1));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
    {
        var_31 = (((((((17220653233037149036 ? 24 : 1))))) <= ((((arr_1 [i_10]) * var_13)))));

        for (int i_11 = 3; i_11 < 14;i_11 += 1) /* same iter space */
        {
            var_32 |= (~3717);
            var_33 = (((3739 ? var_1 : (arr_28 [i_11 - 1] [i_11] [i_11]))));
            var_34 = (((1 ^ -3795265747040972418) % ((((((arr_33 [i_11] [i_11 - 3] [i_10]) ? (arr_8 [8] [i_10]) : -3795265747040972421)))))));
            var_35 |= 28984;
        }
        /* vectorizable */
        for (int i_12 = 3; i_12 < 14;i_12 += 1) /* same iter space */
        {
            arr_38 [i_10] [i_12] [i_10] = (((arr_28 [i_10] [i_10] [i_12 - 3]) ? (arr_3 [i_12] [i_12]) : ((15632403418102423628 / (arr_19 [i_10] [i_12] [i_12] [i_12] [i_12] [i_12 + 1])))));
            var_36 *= (((arr_19 [i_10] [i_10] [i_10] [i_10] [2] [i_10]) + (arr_0 [i_12] [i_12 - 1])));
            arr_39 [i_12] = (arr_37 [i_10] [i_10]);
            var_37 = ((((arr_31 [i_10]) ? (arr_4 [i_10]) : 82)));
        }
        /* vectorizable */
        for (int i_13 = 3; i_13 < 14;i_13 += 1) /* same iter space */
        {
            arr_42 [i_13] [i_13] [13] &= 8946250642894640185;
            arr_43 [i_13 - 3] [i_10] = (!(arr_11 [12] [1] [i_13 - 1] [i_13 - 1] [12]));
        }
        var_38 -= (((3726851757 ? -35 : 13820)));
    }
    for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
    {
        var_39 = (min(var_39, (arr_7 [0])));
        arr_47 [i_14] = ((!((min(var_1, var_13)))));
        var_40 = (max(var_40, ((((((~(((arr_25 [0] [0]) ? (arr_20 [i_14]) : 27))))) ? (min(((-(arr_4 [i_14]))), ((var_13 ? (arr_8 [2] [i_14]) : 18263)))) : (((((132 ? (arr_35 [1] [i_14]) : 1221333855)) < (~2946)))))))));
    }
    var_41 ^= (((var_1 == (-9223372036854775807 - 1))));
    var_42 = -126;
    var_43 -= var_16;
    #pragma endscop
}
