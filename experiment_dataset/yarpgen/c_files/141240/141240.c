/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (var_2 >= var_4);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((!(arr_0 [13])));
        var_14 = (max(var_14, -28877));
        arr_4 [i_0] = ((((max(187, 2)))) ? 2 : (min(21, 14)));
        var_15 ^= ((18446744073709551597 ? var_3 : ((7 ? ((~(arr_1 [i_0]))) : (42 == 10832)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_16 = (min(var_16, ((((arr_7 [i_1] [i_1]) != (((arr_7 [18] [i_1]) + (arr_8 [i_1]))))))));

        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_12 [i_2] = (!16704563);
            arr_13 [i_2] [i_1] [i_2] = ((arr_7 [i_1] [i_2]) ? var_10 : (arr_7 [i_1] [i_2]));

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_17 = ((arr_8 [i_1]) + var_3);
                arr_16 [i_2] = arr_11 [i_1] [i_2];
                var_18 = (arr_10 [5] [i_2] [i_2]);
                arr_17 [8] [i_2] [i_3] |= ((arr_5 [i_3]) ? (arr_5 [i_3]) : 24);
            }
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
        {
            arr_20 [i_1] [i_1] [i_4] = ((((((arr_7 [i_4] [i_4]) & (arr_19 [10] [i_4])))) ? var_12 : (arr_10 [i_1] [i_1] [i_4])));
            arr_21 [i_1] [i_4] = ((!(var_11 < 1844208451)));
            arr_22 [i_4] = var_6;
            arr_23 [i_4] = (((arr_14 [i_4] [i_4] [i_1] [i_1]) >= (arr_11 [i_1] [i_4])));
            var_19 ^= (arr_8 [i_1]);
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
        {
            var_20 *= var_7;
            arr_28 [i_1] [i_1] [i_5] = ((12664004522732187522 ? 32767 : 711782575));
        }
        arr_29 [i_1] [i_1] = ((!(((-1625570689 ? (arr_9 [i_1] [i_1] [11]) : 2)))));
    }
    #pragma endscop
}
