/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 676213567;
    var_15 = var_1;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_1] = -824586019;
            arr_7 [i_0] = var_1;
        }
        var_16 = (max(var_16, (((((max((arr_5 [i_0] [i_0]), (max(19964, var_4)))))) / (min((max(1125899906842624, -6505761081574743037)), 951348645))))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_10 [i_2] = (((((2146050527 ? (((arr_9 [i_2] [i_2]) + -1537480595)) : (1 + var_6)))) == (arr_8 [i_2])));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_17 = (((((-(arr_9 [i_2] [i_3])))) && (((~(arr_12 [i_2] [i_3]))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_18 = (max(var_18, (~6505761081574743037)));
                        var_19 = (max(var_19, 9));
                        var_20 |= var_4;
                        arr_20 [i_2] [i_3] [i_4] [i_5] |= (((41374 == -2147483645) ? (arr_18 [i_2] [i_2] [i_2] [i_2] [i_2]) : (var_6 | 24156)));
                    }
                }
            }
            var_21 ^= ((6505761081574743037 != (var_0 <= -19991)));
            arr_21 [i_3] [i_2] = (((61490 >> (var_11 - 5452))));
        }
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_22 = (min(var_22, ((((((31 - (arr_22 [i_6])) * ((max(41380, (arr_22 [i_6])))))))))));
        var_23 -= 1391249783;

        for (int i_7 = 1; i_7 < 19;i_7 += 1)
        {
            var_24 = (!-1);
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_34 [9] [i_7 + 2] [i_7 + 2] [i_7 - 1] [19] = (!(arr_24 [i_7] [i_8]));
                            var_25 ^= (max(-6505761081574743037, (max(((~(arr_22 [i_8]))), 0))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_26 ^= (min(((-(arr_31 [i_7 + 1] [i_12 + 1]))), (((~(((1059311984 || (arr_25 [i_7] [i_13])))))))));
                            arr_44 [i_6] [i_11] [i_12] = (arr_41 [i_6]);
                            arr_45 [i_6] [7] [5] [7] [i_13] = ((var_5 >> ((((max(var_13, 627053745))) - 17))));
                        }
                    }
                }
            }
            var_27 = ((((((arr_36 [i_7] [i_7 + 2] [i_7 - 1]) + (arr_29 [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 2])))) ? ((41374 % (arr_36 [i_7 + 2] [i_7 + 2] [i_7 + 1]))) : (23196 == -1)));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            arr_48 [20] [i_14] [14] = 8183;
            var_28 = (!(-8997 - -937727650));
            arr_49 [i_14] = (arr_42 [i_6]);
        }
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            var_29 = (max(var_29, ((((((min(var_11, 1391249785)))) == ((~((var_1 ? (arr_22 [i_15]) : -23634)))))))));
            var_30 -= (((arr_47 [20] [i_15] [i_15]) ^ ((var_0 - (arr_47 [i_6] [i_15] [i_15])))));
        }
        var_31 = (max((((((105553116266496 / (arr_50 [i_6] [i_6] [i_6])))) ? -var_1 : var_2)), ((((~var_1) ? (!var_0) : var_10)))));
    }
    #pragma endscop
}
