/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_13 = (min((min((arr_2 [i_0 - 2]), (arr_2 [i_0 - 2]))), (((arr_2 [i_0 - 4]) ? (arr_2 [i_0 + 1]) : 2047))));
            var_14 -= (!(((arr_4 [i_0 - 4] [i_0 - 4] [i_0 - 4]) == ((((arr_2 [i_0 + 3]) && 3603667710))))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 1; i_3 < 16;i_3 += 1)
            {
                var_15 = (4294967286 <= 3716667966);
                var_16 = ((-(arr_0 [i_2 + 1] [i_3 - 1])));
                var_17 = 114;
                arr_10 [i_0] [i_3] [i_0 + 1] = (arr_2 [i_0 + 2]);
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        {
                            var_18 = (min(var_18, (arr_3 [i_0 - 4] [i_2 + 1] [i_5 - 1])));
                            var_19 = (((((0 ? 125 : 8))) ? (((arr_0 [i_0] [i_0 - 4]) ? var_3 : (arr_9 [3] [i_0] [i_0] [i_0]))) : 22));
                            arr_19 [i_0] [i_0] [i_4] [i_0] [i_6 + 1] [i_6] [i_5] = (((arr_18 [i_0 + 3] [i_2 - 1] [i_4] [i_5 - 1] [i_6 + 1] [i_6 + 1]) ? (arr_18 [i_0 - 1] [i_2 + 2] [2] [i_5 + 1] [i_5] [i_6 + 1]) : (arr_18 [i_0 + 1] [i_2 - 1] [i_2 - 1] [i_5 + 1] [i_5] [i_6 + 1])));
                            var_20 = 58762;
                        }
                    }
                }
                var_21 = 8230;
                var_22 = (max(var_22, (((!((((((arr_9 [i_0] [i_0] [i_2] [i_4]) + 2147483647)) << (var_1 - 42752)))))))));
            }
            var_23 = ((-(arr_14 [i_0 - 4] [i_2 + 2])));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {

                        for (int i_9 = 3; i_9 < 15;i_9 += 1)
                        {
                            var_24 = (min(var_24, (((-(arr_9 [i_0 + 3] [i_7] [i_8] [i_7]))))));
                            var_25 = ((var_4 ? (arr_22 [i_0] [i_2 - 1] [i_8] [i_9 - 1]) : (arr_17 [i_0])));
                            var_26 = (((arr_4 [i_0 - 2] [i_8] [i_9]) + (arr_4 [15] [i_7] [i_8])));
                        }
                        var_27 = (arr_25 [i_0 - 2] [i_0] [i_0 - 4] [i_0] [i_0]);
                    }
                }
            }
            var_28 ^= (arr_16 [i_2 - 1] [i_2 - 1] [i_2 + 1] [1] [i_2 + 2] [i_2 + 2]);
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 15;i_10 += 1) /* same iter space */
        {
            arr_31 [i_10] [i_10 + 2] [i_10] = (~125);
            var_29 = ((((arr_16 [i_10] [i_10] [1] [i_10] [i_10] [i_10]) && var_2)) && var_3);
            var_30 = ((arr_18 [i_0] [i_0] [1] [i_0] [i_0] [i_10 + 2]) ? 12540619135214301175 : 3);
        }
        var_31 = (arr_18 [15] [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_32 = -235;
    }
    var_33 = 175;
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 11;i_12 += 1)
        {
            {
                var_34 = ((65535 ? (arr_28 [12] [12]) : ((~(~-67)))));
                var_35 = (-(arr_3 [i_11] [i_11] [i_12]));
            }
        }
    }
    var_36 = var_10;
    var_37 = (min(var_4, ((var_7 ? ((min(2, var_2))) : 1))));
    #pragma endscop
}
