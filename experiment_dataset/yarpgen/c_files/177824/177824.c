/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += 19664;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 &= (((((((max((arr_0 [i_0] [i_0]), (arr_1 [1])))) ? var_5 : (132 ^ 1)))) ? ((~(arr_1 [i_0]))) : ((((~132) > (!124))))));

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    {
                        var_21 += (!var_8);
                        var_22 = (!(((~(max(1, 11953067508240737544))))));
                        arr_8 [i_0] [i_1] [i_1 - 1] [i_2 + 1] [i_3] [9] = -1;
                    }
                }
            }
            arr_9 [i_0] [i_1] = (min(6493676565468814072, ((((arr_2 [i_0] [i_1]) && ((min((arr_5 [i_0] [i_1] [0] [i_1]), -41))))))));
            var_23 = (max(var_23, var_8));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    {
                        var_24 = ((+((((arr_2 [i_1 - 1] [i_5]) >= (((arr_2 [i_1] [i_5]) | (arr_13 [i_1]))))))));

                        for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_25 = (max(var_25, ((min(11953067508240737544, 55802)))));
                            var_26 &= (~62407);
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                        {
                            var_27 = (max((max((arr_21 [i_1 - 2]), (arr_21 [i_1 - 2]))), (max((arr_21 [i_1 - 1]), (arr_21 [i_1 - 1])))));
                            arr_22 [i_5] [i_4] [4] = (arr_18 [7] [3] [i_4] [i_5] [i_7]);
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                        {
                            arr_25 [i_0] [i_1] [i_5] [i_5] [i_8] = ((55805 ? 36028797018963967 : ((((-23 + 2147483647) >> (4258879337 - 4258879335))))));
                            arr_26 [9] [i_5] [i_1 + 1] [0] [i_5] [i_8] [i_8] = ((+((min((arr_1 [10]), (!16383))))));
                            var_28 -= var_0;
                            var_29 ^= (min(-8519900558211849132, 11953067508240737544));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_30 = ((~((((max((arr_20 [1] [i_9] [i_9]), (arr_23 [i_0] [i_0] [i_0] [i_9] [i_9])))) | var_0))));
            arr_30 [i_9] [i_9] = -3163770467642913018;
        }
        for (int i_10 = 2; i_10 < 12;i_10 += 1)
        {
            var_31 = (max(var_31, ((max((((((!(arr_4 [i_0] [i_10] [i_10])))))), (arr_32 [i_0] [i_0] [i_10 + 2]))))));
            arr_33 [i_0] = (max((min((arr_4 [i_10] [i_10 - 1] [i_10]), (arr_0 [i_10 + 2] [i_10 - 1]))), (((~((((arr_23 [7] [i_10] [i_10] [i_10] [i_10]) >= var_17))))))));
        }
        for (int i_11 = 2; i_11 < 13;i_11 += 1)
        {
            var_32 = (arr_15 [i_11] [i_11]);
            arr_36 [i_0] = (arr_10 [i_0] [i_0] [i_11] [i_11]);

            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                arr_40 [2] [i_11] [i_11] [i_12] = 3163770467642913018;
                var_33 = (-9001 >= 476219031);
                arr_41 [i_0] [i_0] [i_11] [1] = (!(((((((arr_17 [i_0] [i_12]) == 119))) * (((arr_34 [i_0] [i_11] [i_12]) / -8995))))));
            }
            var_34 += (((min(var_2, (arr_18 [i_0] [i_0] [7] [i_11] [i_11])))));
            var_35 = ((((max((arr_24 [i_0] [i_0] [i_11]), var_14))) ? (!9006) : var_10));
        }
        var_36 = ((!(((((min((arr_0 [i_0] [i_0]), (arr_16 [i_0] [i_0] [i_0] [i_0])))) - (var_7 >= 1594183373417596587))))));
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 16;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 12;i_14 += 1)
        {
            {
                var_37 = 124;
                arr_48 [i_13] [i_13] [i_13] = var_1;
                var_38 = 6751539640523148484;
            }
        }
    }
    #pragma endscop
}
