/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_19 = (min(var_19, (min(-1813629544, 27773))));
        var_20 = (~-1813629544);
        var_21 = ((max((((var_0 && (arr_1 [i_0])))), ((var_3 & (arr_1 [i_0 - 2]))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_22 ^= ((-(arr_3 [i_1])));

        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            arr_6 [i_1] [i_1] [6] = (arr_5 [i_1] [i_2 + 1]);

            for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    var_23 = (arr_10 [i_4] [i_3] [i_2 + 2] [i_1]);
                    arr_11 [i_1] [i_1] [i_1] [i_4] = (~(((!(arr_5 [i_1] [i_4])))));
                    var_24 = (~((-1813629544 ? -1813629563 : 18446744073709551615)));
                    arr_12 [6] [i_1] &= 0;
                    var_25 = (arr_2 [6] [6]);
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    var_26 = (+((((arr_9 [i_1] [i_1] [i_1] [i_1]) != 14003))));
                    var_27 = 124;
                    var_28 = (4396438719891216366 / -233664830);
                }
                var_29 ^= -17124799187653776402;
                var_30 = arr_9 [i_1] [i_1] [8] [7];
                arr_16 [i_1] [i_2] [i_3] [i_2] = (((65535 ? (arr_5 [i_1] [i_1]) : var_0)));
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
            {
                arr_19 [7] [7] = 18446744073709551609;
                var_31 = 249456355;
                var_32 = arr_13 [i_6] [i_2] [5] [i_6];
                var_33 = (arr_7 [i_1] [i_2] [i_1]);
            }
        }

        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            arr_24 [i_1] [i_7] = ((!(((~(arr_10 [i_1] [i_7] [i_7] [i_7]))))));
            var_34 *= (!var_17);
            arr_25 [i_1] [i_1] [i_1] = (arr_3 [i_1]);
            var_35 = -1969307382;
        }
        var_36 = (arr_9 [1] [i_1] [2] [8]);
    }
    /* LoopNest 2 */
    for (int i_8 = 3; i_8 < 24;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 22;i_9 += 1)
        {
            {
                var_37 = (min((arr_26 [i_8] [i_9]), var_15));
                var_38 = ((!(arr_27 [i_8] [i_9])));
            }
        }
    }
    var_39 = (max(30, 2050139211));
    #pragma endscop
}
