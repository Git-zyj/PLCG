/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= min(var_0, var_12);
    var_15 = (var_9 <= -8821724435005277979);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (max(var_16, -1326353188));
        var_17 = (arr_3 [5]);

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                var_18 = (((arr_0 [i_1 - 1] [i_2 - 4]) ? (arr_0 [i_1 - 1] [i_2 - 4]) : (arr_0 [i_1 - 1] [i_2 - 3])));
                var_19 ^= arr_1 [i_1 - 1] [i_2 - 2];
                var_20 *= (((-1326353188 < 7255) && (((var_12 ? (arr_5 [i_0] [i_0] [i_0]) : var_6)))));
                var_21 -= (((arr_4 [12] [i_1] [i_1]) * -1326353189));
            }

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_22 = (min(var_22, (((var_9 && 1007885882) < var_3))));
                var_23 = (((arr_2 [i_1 - 1]) < (var_7 + -1326353182)));
                var_24 = (((arr_6 [i_0] [i_0] [10]) ? (arr_6 [i_0] [i_0] [i_0]) : (var_12 < var_6)));
                var_25 = var_3;
            }
            for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
            {
                var_26 = (arr_5 [i_0] [i_1 - 1] [i_4 + 4]);
                var_27 *= ((var_11 ^ ((1174898931116281452 ? var_10 : -1))));
            }
            for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
            {
                var_28 = (((arr_3 [i_0]) < var_10));
                var_29 |= ((var_11 ? ((45066 ? (arr_14 [i_0] [i_0] [i_1] [i_0]) : 71)) : (((arr_5 [21] [i_1] [i_5 - 1]) * (arr_8 [i_0] [i_1] [i_5])))));
                arr_16 [8] [i_5] [i_1] = ((-(arr_7 [i_0] [i_1] [i_5 + 3] [i_1 - 1])));
            }
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            arr_21 [i_0] [i_6] = ((((!(arr_10 [i_0] [i_6])))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        var_30 ^= (((arr_19 [i_0] [i_8]) ? (var_9 ^ 1) : ((((arr_24 [i_0] [i_6] [i_7] [16]) ? 6072787363942103083 : var_1)))));
                        arr_26 [i_0] [i_0] [i_0] [i_0] |= (((arr_3 [i_6]) ? var_5 : (arr_7 [21] [i_6] [i_6] [i_8])));
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            var_31 = ((~(arr_18 [i_0] [i_0] [i_0])));
            var_32 = (max(var_32, (((((var_5 ? -7255 : var_7))) > (arr_25 [i_9] [i_9] [6])))));
            var_33 = (min(var_33, var_1));
            arr_30 [i_9] [22] = ((arr_1 [i_0] [i_0]) ^ (arr_27 [i_9]));
            var_34 = ((!(((arr_13 [i_0] [i_0] [i_0] [i_0]) > 14))));
        }
        arr_31 [i_0] = (((((var_3 ? (arr_24 [i_0] [2] [i_0] [i_0]) : var_4))) ? (arr_22 [i_0] [i_0]) : (arr_10 [i_0] [i_0])));

        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            var_35 = (((arr_22 [i_0] [i_0]) ? var_1 : (arr_15 [i_0] [i_10] [i_10] [i_10])));
            arr_34 [i_10] [i_0] [i_10] = (((!var_7) || (arr_33 [i_0] [i_10] [i_0])));
        }
        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
        {
            var_36 = var_8;
            var_37 ^= ((var_8 ? (arr_33 [22] [i_0] [i_0]) : (arr_33 [i_0] [i_11] [i_11])));
            var_38 = (((((arr_25 [i_0] [i_11] [i_0]) ? var_7 : (arr_19 [i_0] [i_0]))) << (((!(arr_18 [i_0] [i_0] [19]))))));
            var_39 = 4294967288;
        }
        for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
        {
            var_40 = ((~(arr_5 [i_0] [i_12] [i_12])));
            var_41 = (((arr_0 [i_0] [i_0]) ? 1125932531 : var_10));
            var_42 = (var_10 ^ 31);
            var_43 = (arr_12 [i_0] [i_0]);
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
        {
            arr_42 [i_0] [i_0] [i_0] = (((arr_40 [7] [7] [i_13]) ? var_13 : ((-28906 | (arr_23 [i_0] [i_0] [i_0])))));
            arr_43 [i_0] = -var_10;
            arr_44 [21] [i_0] = (((arr_35 [i_0] [1] [i_13]) ? ((((arr_8 [i_0] [i_13] [i_0]) % 7255))) : -1174898931116281451));

            for (int i_14 = 3; i_14 < 23;i_14 += 1)
            {
                var_44 = -14876;
                arr_48 [i_0] [i_0] [i_0] [i_14] = var_4;
            }
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                arr_51 [i_15] [i_13] [i_0] [i_0] = -var_11;
                arr_52 [i_0] = ((arr_8 [i_0] [i_0] [i_0]) >> (var_3 - 22));
            }
        }
    }
    #pragma endscop
}
