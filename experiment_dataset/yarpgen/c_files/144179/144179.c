/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_14 += (arr_3 [i_0] [i_0]);
            var_15 = (arr_3 [i_0 - 1] [i_1]);
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                arr_9 [i_0 - 1] [i_2] [i_3] = var_6;
                var_16 |= ((!(arr_5 [i_3 + 1] [i_3 - 1] [i_3 + 1])));
                arr_10 [i_0 - 1] [15] [i_3] [i_3] = (((var_0 || var_12) != ((var_0 ? -558767376841803417 : var_5))));
                var_17 -= (arr_8 [i_3 + 1] [6] [i_3 + 1]);
            }
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                arr_13 [2] [i_2 + 2] [2] [4] = (arr_8 [i_2 + 3] [i_2 + 3] [i_2 - 1]);
                var_18 = (min(var_18, ((((arr_6 [6] [6] [i_0]) & -4294967295)))));
                var_19 = (((arr_2 [i_0 - 1]) >= (arr_2 [i_0 - 1])));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_20 = (min(var_20, var_8));
                var_21 = (!4);
            }
            var_22 = (max(var_22, 55));
        }
        var_23 = (arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1]);
        var_24 = arr_2 [i_0];
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_25 = (((((var_6 ? ((-2 ? 3377699720527872 : 1578716522)) : (arr_6 [i_6 - 1] [i_6 - 1] [9])))) ? ((((-18621 + 2147483647) >> (53 - 38)))) : (~var_9)));
        var_26 = (((arr_3 [i_6] [i_6]) && -48));
        var_27 = (max(var_27, (arr_1 [i_6])));
    }
    var_28 = var_3;
    var_29 = (max(var_29, var_3));
    #pragma endscop
}
