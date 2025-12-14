/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, -var_6));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            var_17 ^= (~var_15);
            arr_4 [7] [i_0] [i_0] = (arr_2 [5] [i_0]);
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 10;i_4 += 1)
                {
                    {
                        var_18 = (((max(8632295926500127736, 362934492))) ? (~-var_10) : var_13);
                        arr_14 [i_0] [i_0] [i_4 - 4] = ((((min((arr_13 [i_0 - 2] [i_4] [i_4 + 3] [i_4] [i_4] [i_0]), (arr_13 [i_0 + 1] [i_2] [i_4 + 1] [i_0 + 1] [i_4] [i_0])))) ? 119 : (arr_13 [i_0 - 2] [i_0 - 2] [i_4 - 1] [i_4] [i_4] [i_0])));
                    }
                }
            }
            arr_15 [i_0] = ((min(891550891, 891550901)));
        }
        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            arr_20 [i_5] [i_5] &= (((((min(var_11, -7751371753903464745)) + 9223372036854775807)) >> ((((min((arr_18 [i_0] [i_0]), (arr_3 [i_0] [i_5] [i_0])))) ? ((((arr_9 [i_5]) < 1))) : ((~(arr_6 [i_5])))))));
            var_19 = (arr_6 [i_0]);
        }
        var_20 = (min(var_20, ((min(((((arr_6 [4]) == ((var_10 ? (arr_0 [i_0]) : (arr_7 [i_0] [8] [6])))))), (arr_3 [i_0] [8] [0]))))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {

                        for (int i_9 = 2; i_9 < 12;i_9 += 1)
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_15;
                            arr_33 [i_9 - 1] [i_0] [i_8] [i_7] [i_6] [i_0] [i_0] = ((((min(12842098156363011452, var_14))) <= (arr_30 [i_0 - 2] [i_0] [i_0] [i_6] [i_9 + 1])));
                            var_21 = (min(var_21, 1));
                            var_22 = (arr_10 [i_0] [i_0 - 2] [i_7 - 1] [i_0]);
                        }
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            arr_37 [i_0] [i_0] [i_0] [i_0 + 1] [5] = ((191 / (arr_29 [i_0] [i_6] [i_6])));
                            arr_38 [i_0] [i_0] [i_0] [4] [i_10] [i_6] = var_13;
                            var_23 -= ((65 & ((var_8 ? (arr_26 [i_8] [1] [i_7 - 1] [i_0 - 2] [i_0 - 2] [i_0 - 1]) : var_3))));
                            var_24 = (max(var_24, (3956572114002529615 / 16383)));
                            arr_39 [i_0] [12] [i_0] [i_7] [7] [i_10] = (arr_18 [i_6] [i_6]);
                        }
                        var_25 = (arr_27 [i_7 - 2] [i_0 + 1] [i_0 + 1] [i_0]);
                        var_26 = (arr_17 [i_0 - 2]);
                    }
                }
            }
        }
        var_27 = var_15;

        for (int i_11 = 2; i_11 < 11;i_11 += 1)
        {
            var_28 += 5;
            var_29 = (((((!((min(59, 8))))))) % (((arr_35 [i_0]) % (arr_0 [i_11]))));
            var_30 = var_6;
            var_31 |= ((~(((arr_7 [i_0] [i_11] [12]) / -var_15))));
        }
    }
    var_32 += var_3;
    var_33 = var_7;
    var_34 *= (min(var_5, var_11));
    #pragma endscop
}
