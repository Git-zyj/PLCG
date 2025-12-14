/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_5, (!var_6)));
    var_15 *= var_8;
    var_16 -= (((var_0 + 9223372036854775807) << (((-58 + 80) - 22))));
    var_17 = var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
        {
            var_18 -= (arr_3 [i_0] [i_0] [i_0]);

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [2] [i_0] [2] [1] = 215;
                            arr_16 [i_0] [i_0] [i_0] = (((arr_7 [i_4] [i_1] [i_1] [i_0]) && 3153695308594342882));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_22 [i_6] [i_6] [i_2] [7] [i_6] [i_0] = (((arr_14 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6 + 1]) & (arr_14 [i_6 - 1] [i_6] [i_6 - 1] [i_6] [i_6] [i_6])));
                            arr_23 [i_0] [i_0] [i_2] [i_6] [i_6 - 1] = ((113 < (((arr_13 [1] [i_1] [i_2] [i_5] [1] [i_2]) % -21))));
                            var_19 ^= (arr_8 [i_0] [i_0] [i_0]);
                            arr_24 [i_0] [i_6] [i_1] [i_1] [i_2] [i_2] [i_6 - 1] = (arr_9 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 - 1]);
                        }
                    }
                }
                var_20 *= (arr_14 [i_0] [0] [i_2] [i_0] [i_0] [i_0]);
                var_21 ^= (arr_19 [i_0] [1] [4] [i_0] [1]);
            }
            for (int i_7 = 1; i_7 < 14;i_7 += 1) /* same iter space */
            {
                arr_27 [4] = (arr_4 [i_7 - 1] [i_7 + 4]);
                var_22 *= arr_19 [i_0] [i_0] [i_0] [i_0] [4];
                arr_28 [i_0] [i_1] [i_7] &= (26 == 21);
            }
            for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
            {
                var_23 *= (arr_30 [i_8 + 2]);
                var_24 = (((arr_4 [i_8 + 4] [i_8 + 4]) ^ var_11));
                arr_31 [i_0] [i_1] [i_1] &= (((arr_7 [i_8 + 1] [i_1] [i_0] [i_0]) & var_7));
                var_25 &= (arr_11 [i_0] [i_0] [i_0] [i_0]);
            }
            arr_32 [8] &= (arr_5 [i_0] [1]);
            arr_33 [10] [3] [i_1] = ((-29 * (arr_9 [i_1] [i_1] [i_0] [8])));
            var_26 *= (arr_18 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]);
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
        {
            arr_37 [4] [8] [i_9] |= (arr_8 [i_0] [i_9] [i_0]);
            arr_38 [i_0] [i_9] = 185;
            arr_39 [i_0] = (((-29 ? -32 : 2109626007842065754)));
            var_27 |= (arr_11 [i_0] [i_0] [i_0] [i_9]);
        }
        var_28 -= -364152626;
        var_29 ^= ((-2109626007842065754 ? (arr_0 [i_0] [i_0]) : (((var_0 != (arr_8 [i_0] [i_0] [14]))))));
        var_30 *= ((((arr_4 [i_0] [17]) ? (arr_14 [i_0] [i_0] [i_0] [10] [10] [i_0]) : 65)));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_43 [i_10] = ((((min((((var_8 != (arr_42 [i_10])))), 28))) ? ((((min(11912404763011132543, 166)) == var_8))) : (((70 * (arr_42 [i_10]))))));
        arr_44 [i_10] = (min((((arr_42 [i_10]) - (arr_41 [i_10] [i_10]))), ((min((arr_41 [i_10] [i_10]), ((((arr_40 [i_10] [5]) || -3890764203138376957))))))));
    }
    #pragma endscop
}
