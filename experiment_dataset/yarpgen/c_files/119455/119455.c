/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((~30076), 31179));
    var_20 = 9;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_21 = -10;

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            var_22 = (max(var_22, (((~(arr_4 [i_0 + 2] [i_0 - 1]))))));
            var_23 = (min(var_23, 13));
            var_24 = (min(var_24, (((var_18 ? (((arr_0 [i_0 - 1]) ? (arr_5 [i_0]) : var_18)) : ((-(arr_4 [8] [i_1]))))))));
            arr_6 [i_1] = var_4;
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_0] = (((arr_7 [i_2 - 1] [i_1 + 1] [i_0 - 2]) ? var_15 : (arr_7 [i_2 + 1] [i_1 - 1] [i_0 + 2])));
                        var_25 = ((arr_0 [i_0]) ? var_8 : var_2);
                        var_26 = (min(var_26, ((((((arr_1 [i_0 - 2]) + 2147483647)) << (((!(-2147483647 - 1)))))))));
                    }
                }
            }
        }
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            arr_16 [i_0 + 2] [13] [i_0 + 2] = 47;
            var_27 = (var_17 ? (-1 / var_17) : 13);

            for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
            {
                arr_19 [i_5] = var_2;
                arr_20 [i_5 - 1] [i_5] [i_5] [i_0] = var_8;
                var_28 = (((var_14 * 13485402381339485076) ? (arr_12 [i_0 + 3] [i_0 - 2]) : ((12656616074170918464 ? 13 : 304601889))));
            }
            for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
            {
                var_29 = ((!(arr_15 [i_0 - 2])));
                var_30 += ((arr_4 [i_0 + 1] [i_0 + 3]) ? var_3 : (0 >= var_1));
            }
            for (int i_7 = 1; i_7 < 14;i_7 += 1) /* same iter space */
            {
                var_31 = (-1405257311 * 0);
                var_32 = (((-2147483647 - 1) * (arr_18 [i_7 - 1] [i_4] [i_7 + 1] [i_7 - 1])));
            }
            var_33 = (max(var_33, ((((arr_22 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2]) ? (((((arr_7 [i_0 + 3] [i_4] [i_4]) == var_12)))) : (3 - 6133036824125859541))))));
            arr_26 [i_4] [i_4] = (((arr_2 [i_0]) ? 2147483647 : ((9 ? 1030528568085234261 : 18295))));
        }
        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            var_34 = (arr_12 [i_8 + 1] [i_8 - 2]);
            var_35 = var_15;
            var_36 += var_5;
        }
        var_37 = (((((!(arr_29 [i_0] [i_0])))) << (var_1 < 2147483645)));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        var_38 = ((arr_32 [i_9]) ? (~235) : ((-(arr_31 [i_9] [i_9]))));
        arr_33 [i_9] = var_5;
    }
    /* LoopNest 3 */
    for (int i_10 = 1; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 1; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                {
                    var_39 = (max(var_39, (arr_40 [i_10 + 2])));
                    var_40 = ((((max(var_11, (arr_38 [i_10] [4])))) ? -48662 : ((961155536 ? 0 : ((208 ? -388794511 : -6360))))));
                }
            }
        }
    }
    #pragma endscop
}
