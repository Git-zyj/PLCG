/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_17 = ((-1 + ((((arr_1 [i_0 + 1]) ? 3045348050 : (arr_1 [i_0 - 1]))))));
        var_18 = (((arr_1 [i_0]) <= (max(9, 3678096029))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (((arr_1 [i_1]) && (min((arr_4 [i_0] [i_0 - 1]), (arr_4 [i_0] [i_0 - 1])))));
            var_19 = 3678096018;
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 = (((arr_9 [i_0] [i_0] [i_2] [i_3]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_0 - 1] [i_0 - 1])));
                        var_21 += ((-(((-259891382 == (arr_7 [6]))))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_22 = (((arr_8 [i_0 - 1] [i_4]) ? (arr_1 [i_0 + 1]) : var_3));
                var_23 = ((arr_7 [i_0]) ? (arr_10 [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1] [i_0 - 1] [i_5]) : (arr_7 [i_0]));
            }
            var_24 = (min(var_24, (((var_8 ^ (arr_12 [i_0 - 1] [i_4]))))));
        }
        var_25 = (i_0 % 2 == 0) ? (((((var_0 + ((((((arr_7 [i_0]) + 2147483647)) << (var_3 - 458524375)))))) > 1386134230))) : (((((var_0 + ((((((((arr_7 [i_0]) - 2147483647)) + 2147483647)) << (var_3 - 458524375)))))) > 1386134230)));
    }
    for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = (~1240624101);

        for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
        {
            arr_25 [i_6] [i_6] [i_6] = (arr_15 [i_6] [i_6]);
            var_26 = (arr_1 [i_7]);
        }
        for (int i_8 = 1; i_8 < 16;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 4; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    {
                        var_27 ^= 616871277;

                        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            arr_36 [i_6] [i_6] [i_8] [i_8] [i_9] [i_10] [i_9] = 65535;
                            var_28 = (max(var_6, ((((arr_29 [i_9] [i_10] [i_6]) ? -20 : var_15)))));
                        }
                        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                        {
                            var_29 = ((arr_24 [i_6] [i_6] [i_6 + 1]) ? (arr_13 [i_8]) : (min((((arr_34 [i_6] [i_6] [i_8 + 2] [i_9] [i_10] [i_6] [i_12]) ? (arr_11 [i_6]) : 2120562628)), (!1))));
                            var_30 = (((-var_2 + (max((arr_31 [i_9]), var_8)))));
                        }
                    }
                }
            }
            arr_39 [i_6] [i_6] [i_6] = ((!((616871259 != (arr_37 [i_6] [i_6] [i_6] [i_6])))));
        }
    }
    var_31 = ((!((min((var_11 <= var_6), ((var_5 ? var_0 : var_12)))))));
    var_32 = -879441875;
    var_33 = ((min(var_6, var_3)));
    #pragma endscop
}
