/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((min(var_10, var_1)) + 2147483647)) << var_6)));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = 39;
        var_16 = (((((min(var_11, var_10)))) ? 38 : 18446744073709551608));
        var_17 = ((+(((((max((arr_0 [i_0]), 1)))) ^ (min(10, 1))))));
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] [i_1] = 1;
            var_18 = ((-39 ? (arr_7 [i_2 - 1] [i_2 - 1] [i_1 - 4]) : (arr_7 [i_2 - 1] [i_2 - 1] [i_1 - 2])));
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_19 = ((var_1 ? var_6 : 18446744073709551596));
            arr_14 [i_3] [i_3] [i_3] = (arr_8 [i_3]);
        }
        arr_15 [i_1] = (((~74) ? 18446744073709551596 : (arr_8 [i_1 + 1])));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_19 [i_4] = (~-384287329);
        arr_20 [i_4] [1] = 1;
    }

    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        arr_25 [i_5] = var_7;
        var_20 = ((((min((596467578 ^ 1), 38))) ? 1 : (((((1 ? 18446744073709551596 : 17))) ? 1 : (arr_22 [6])))));
        arr_26 [i_5] |= (max((arr_23 [i_5] [i_5]), (arr_21 [i_5])));
    }
    var_21 = var_1;
    #pragma endscop
}
