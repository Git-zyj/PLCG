/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_7;

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (((18446744073709551615 ^ var_6) ? (~0) : var_14));
            var_16 &= max(110, (min(16909852586344040164, 2277052859)));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_0] = ((var_6 ? var_4 : (min((var_11 ^ -7028452998334493900), (!-5)))));
                        arr_12 [10] [i_0] = ((-(max(10907, 18446744073709551615))));
                    }
                }
            }
            var_17 = (min(var_17, (((((((min(0, var_9)) << ((-25475 ? 1 : -16))))) ? (((~(var_11 || -25475)))) : (((~4294967295) | 11115468542345851349)))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                arr_19 [i_0] [i_4] [10] [7] = ((var_0 ? 5976 : -17032288681708757598));

                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_18 = (min(var_18, (((95 ? 10191530686002965068 : 44313004666422122)))));
                        arr_25 [i_0 + 1] [i_0] [i_0 + 1] [i_7] = (~-36);
                        arr_26 [i_0] [i_0] [i_0] [i_6] [i_0] [i_6] [i_4] = -6539361176847269650;
                    }
                    arr_27 [i_0] [i_5 - 1] [i_5] [i_5] = 3023;
                    var_19 -= 15581;

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_20 ^= (49355 % var_4);
                        arr_30 [i_0] [i_0] [i_5] [7] [7] = (var_5 - 9809);
                    }
                }
            }
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                arr_33 [i_0] [i_9] [i_0] [i_0] = -25475;

                for (int i_10 = 3; i_10 < 20;i_10 += 1)
                {

                    for (int i_11 = 1; i_11 < 17;i_11 += 1)
                    {
                        arr_41 [i_0] = ((18446744073709551609 ^ -1982) ? var_4 : var_11);
                        arr_42 [i_0] [i_0] [i_0] [3] [i_11 + 1] = ((var_0 ? ((3801133422 ? 16109926447355577940 : 18014398509481983)) : -12392702617852769829));
                    }
                    var_21 = (!18446744073709551615);
                }
            }
            arr_43 [i_0] [12] = ((!(var_10 >= 7168831772762753667)));
            var_22 = -18446744073709551605;
        }
        var_23 = (max(var_23, (((var_7 ? (1048576 * var_8) : ((min(var_3, var_9))))))));
    }
    #pragma endscop
}
