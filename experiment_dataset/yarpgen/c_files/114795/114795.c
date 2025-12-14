/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 = ((min(((min(-1298287570, 1))), (arr_1 [i_0] [i_0]))));

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_11 = (max(var_11, ((((!(arr_4 [i_0] [i_1] [i_1 - 2])))))));
                arr_9 [i_1] [i_1] = (((!((((arr_4 [i_0] [i_2] [0]) ? var_0 : 1))))));
                var_12 += ((((((((1 | (arr_6 [i_0] [i_1 - 1] [12]))) + 9223372036854775807)) << ((((18446744073709551606 ? var_0 : var_2)) - 39)))) < (var_3 + var_5)));

                for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                {
                    var_13 = (max(18446744073709551606, -10));
                    var_14 = (max(var_14, (arr_4 [i_1 - 2] [i_1 + 1] [i_1 - 1])));
                    var_15 = (((((1 ? (arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (arr_4 [i_0] [i_1 + 1] [i_1 + 1])))) ? (min(878532180839479304, 40)) : 1));
                    var_16 = ((((((-(arr_5 [i_1] [i_2] [i_1]))) + 2147483647)) >> -7));
                }
                for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                {
                    var_17 = (((-27 == 50012) || var_5));
                    arr_15 [i_1] = ((~(((!(arr_4 [i_0] [i_1] [11]))))));

                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        var_18 = (0 / 9);
                        var_19 = (min(var_19, (arr_8 [i_4] [i_4])));
                    }

                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_1] [i_1] [i_1] = ((((max((arr_6 [i_0] [i_1 - 2] [i_4]), (arr_18 [i_1] [i_1 - 1] [i_2] [i_1 - 1] [i_1 - 1])))) ? (arr_18 [i_1] [i_1] [i_2] [i_1 + 1] [i_4]) : (12381946356002594906 < 0)));
                        var_20 = 1;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_21 = (max(var_21, (((!((var_9 != ((0 ? var_4 : var_2)))))))));
                        var_22 = ((((0 != 107) ? (arr_25 [i_1] [i_1]) : ((0 ? 1 : var_7)))));
                        var_23 = (~8002);
                    }
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    arr_29 [i_0] [4] [7] [i_1] [4] [i_8] = (max((((((13 ? 1245280915335463057 : 64))) ? ((40 ? 52529 : var_4)) : (arr_8 [i_1 + 1] [i_1]))), ((var_4 * (arr_18 [i_1] [i_1 + 1] [i_1] [1] [i_1 - 2])))));
                    var_24 = ((0 > 1865970817) * 0);
                }
                for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                {
                    var_25 = ((!(arr_19 [i_0] [i_1] [i_1 - 1] [i_2] [i_1])));
                    var_26 = ((((!0) << ((var_7 >> (var_6 - 61642))))));
                    arr_32 [i_0] [i_1] [0] [i_9] = (((min(1, 1245280915335463057)) != ((((!(arr_0 [i_1 - 1] [i_1 + 1])))))));
                }
            }
            for (int i_10 = 2; i_10 < 12;i_10 += 1)
            {
                arr_35 [i_1] [i_1] = ((min((-786028056 * 0), (7 && 1))));
                arr_36 [i_1] [i_0] [8] = var_0;
            }
            var_27 = -1;
        }
        arr_37 [i_0] [i_0] = 98;
    }
    var_28 -= ((var_1 != (((-var_1 != (!var_5))))));
    var_29 = (((((-var_3 >= (!var_9)))) << ((((~(var_7 + 0))) + 15))));
    #pragma endscop
}
