/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_15 ^= (arr_3 [i_0] [i_1]);
            var_16 = ((-(11975920649142679810 || 6470823424566871806)));

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_17 = (min(var_17, (((6470823424566871806 ? (var_4 || var_10) : (var_7 && 255))))));
                var_18 *= 18446744073709551615;

                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    arr_11 [i_0] [i_1] [i_1] [i_1] [i_0] = 6470823424566871800;
                    var_19 = ((((-9223372036854775807 - 1) / 2135085006)));
                    var_20 ^= -7258703192425218164;
                }
                var_21 ^= -var_3;
            }
            for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
            {
                var_22 += ((1 ? var_1 : (arr_6 [i_0 - 2] [i_1])));
                var_23 = 167;
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
            {
                arr_16 [i_1] [i_0] = var_9;
                arr_17 [i_0] [10] [i_5] [i_1] &= (((!47) && -9223372036854775783));
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_24 = (arr_8 [i_0] [i_0 + 1]);
                arr_22 [i_0] [i_1] [i_0] = (-9223372036854775807 - 1);
            }
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
        {
            arr_25 [i_0] [i_0] = 6470823424566871806;
            var_25 &= (-(arr_20 [i_7] [i_0 - 1] [2]));
        }
        var_26 = (min(var_26, (arr_13 [i_0] [8] [i_0 - 1] [i_0])));
        arr_26 [i_0] = (!var_4);
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {

        /* vectorizable */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            var_27 += 3569017325195966693;
            arr_33 [i_8] [i_9] [i_8] = (arr_28 [i_8]);
        }
        var_28 = ((-((min(183, 0)))));
        arr_34 [i_8] = (var_14 || 104);
    }
    for (int i_10 = 2; i_10 < 11;i_10 += 1)
    {
        arr_37 [i_10] = -11975920649142679810;
        arr_38 [i_10] [i_10] = 3120499049130901181;
        var_29 = (min(var_29, (((250 < (max(2682631299825766761, var_9)))))));
    }
    var_30 *= 47;
    #pragma endscop
}
