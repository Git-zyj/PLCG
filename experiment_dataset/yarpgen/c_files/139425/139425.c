/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 3970045080155025487;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_1] = (((arr_3 [i_0 - 3] [i_0 + 2]) ^ (((var_5 && (arr_5 [i_0] [i_0]))))));
            var_13 = (!var_3);
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_9 [i_2] = ((((min((arr_5 [i_0 + 1] [i_2]), (arr_5 [i_0 - 2] [i_0 + 2])))) ? ((((((arr_3 [i_0] [i_2]) ? (arr_4 [i_2] [i_0]) : (arr_1 [i_0 + 2])))) ? var_2 : ((var_5 % (arr_4 [i_2] [i_2]))))) : (arr_8 [i_0 + 2] [i_0 + 2])));
            arr_10 [i_0] [i_2] = (((arr_3 [i_0] [i_0 - 1]) ? (arr_3 [i_0] [i_2]) : (arr_3 [i_0 + 2] [i_2])));

            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                var_14 = var_4;
                var_15 &= (min(-30585, 7027));
            }
            var_16 = (2912341495 <= 1269238784);
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_17 ^= min(((max((-32767 - 1), (arr_4 [i_4] [i_4])))), (arr_14 [i_0 - 1] [i_4]));
            var_18 = (min(var_18, -30585));

            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                var_19 = (min(var_19, ((((((arr_11 [i_0 + 1] [i_4] [i_5] [i_5]) ? (arr_15 [i_0 + 2] [i_5]) : (max(2147483647, var_1)))) != ((((max((arr_13 [i_5] [i_4] [i_0]), (arr_17 [i_4])))) ? (((!(arr_2 [i_0])))) : var_8)))))));
                arr_18 [i_0] [i_4] [i_5] = (arr_7 [i_0] [i_0] [i_5]);
            }
            for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
            {
                var_20 = (((((!(arr_16 [i_6] [i_0 - 3]))))) + (((arr_16 [i_6] [i_4]) ? -var_7 : (min((arr_7 [i_0] [i_4] [i_6]), var_10)))));

                /* vectorizable */
                for (int i_7 = 2; i_7 < 18;i_7 += 1)
                {
                    arr_23 [i_6] [i_4] [i_6] [i_0 + 1] [i_7] [i_7] |= (((var_4 || var_7) ? var_1 : (arr_7 [i_0 - 1] [i_0 - 1] [i_7 + 1])));
                    var_21 = var_7;
                    var_22 ^= 62009;
                }
                arr_24 [i_0] [i_4] [i_6] [i_6] = ((((arr_19 [i_6] [i_0] [i_6] [i_0 - 2]) != (arr_19 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 2]))));
                var_23 = (max(var_23, (((arr_22 [i_0] [i_0 - 3] [i_6] [i_4] [i_4] [i_0]) <= ((~(arr_22 [1] [i_0 - 2] [i_6] [i_6] [1] [i_6])))))));
            }
            for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
            {
                var_24 += (((arr_4 [i_8] [i_0 - 3]) ? (((!(arr_14 [i_0 - 2] [i_0 - 2])))) : (arr_14 [i_0 - 3] [i_0 - 1])));
                var_25 = (arr_15 [i_0 + 2] [i_4]);
            }
            arr_28 [i_0] [i_0 - 2] [i_0 + 1] = var_3;
        }
        var_26 = (min(11, -1));

        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            arr_31 [i_9] = (arr_1 [1]);
            var_27 = (((arr_15 [i_9 - 1] [i_9 + 1]) ? (arr_2 [i_0]) : var_10));
            arr_32 [i_9] [i_9] = var_3;
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_28 = (min(var_28, (3 ^ var_3)));
            var_29 = (min(var_29, (((var_1 ? var_8 : (arr_4 [i_10] [i_10]))))));

            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                arr_41 [i_10] [i_10] &= (arr_27 [i_11] [i_11] [i_11]);
                var_30 = (arr_40 [i_0]);
            }
            for (int i_12 = 2; i_12 < 18;i_12 += 1)
            {
                var_31 &= var_2;
                var_32 = (55012 ^ 35662);
                var_33 = arr_35 [i_0 - 3] [i_10];
            }
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {

                for (int i_14 = 2; i_14 < 16;i_14 += 1)
                {
                    var_34 = (min(var_34, 2097151));
                    var_35 = 70;
                    arr_52 [i_0] [i_0] &= (arr_17 [i_10]);
                    arr_53 [i_0 - 2] [i_0 - 2] [i_0] = ((arr_27 [i_10] [i_10] [i_10]) ? (arr_34 [i_13] [i_0] [i_0]) : (((arr_40 [i_0]) ? (arr_8 [i_0] [i_10]) : (arr_20 [i_0 + 1] [i_0 - 2] [i_0]))));
                }
                for (int i_15 = 3; i_15 < 19;i_15 += 1)
                {
                    var_36 ^= arr_16 [i_10] [i_15 - 2];
                    var_37 = (((arr_5 [i_0 - 2] [i_0 + 1]) / var_6));
                }
                arr_56 [i_0 - 1] = ((((((arr_20 [i_0] [i_0] [i_13]) ? (arr_39 [i_0] [i_0] [i_0]) : (arr_15 [i_0 + 1] [i_10])))) ? (arr_54 [i_0 + 2]) : ((var_6 ? 1 : 272480578))));
                var_38 = (max(var_38, (arr_44 [i_0 - 3] [i_0 + 1] [i_0 + 2])));
                arr_57 [i_13] [i_10] [i_0 - 3] = (((arr_29 [i_10]) ? (arr_29 [i_10]) : (arr_29 [i_10])));
                arr_58 [i_0 - 3] [i_0 - 3] = var_3;
            }
            arr_59 [i_10] &= (63240 % 30380);
            var_39 = (((arr_35 [i_0 - 2] [i_0 + 1]) < (arr_29 [i_10])));
        }
    }

    for (int i_16 = 2; i_16 < 17;i_16 += 1)
    {
        var_40 = -var_2;
        arr_63 [i_16 - 2] = ((((min(65521, 0))) + (max((arr_44 [i_16 + 2] [i_16 + 2] [i_16 + 3]), 0))));
        arr_64 [i_16] = ((((min((arr_37 [i_16] [i_16 - 1] [i_16 + 1]), (arr_37 [i_16] [i_16 + 1] [i_16 - 2])))) ? var_1 : ((((arr_37 [i_16] [i_16] [i_16 - 1]) && 1)))));
    }
    #pragma endscop
}
