/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((-7266422412981660047 > var_1) ? (((var_6 ? var_10 : 14102092215716226585))) : var_2));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = var_10;
        var_14 = (arr_0 [i_0 - 1]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_15 = ((max(14102092215716226585, 14102092215716226564)));
        var_16 = -8143310042253387560;

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                var_17 = ((((((arr_7 [i_1] [i_2 - 1]) ? (arr_8 [i_1] [i_1] [i_1]) : (arr_7 [i_1] [i_1])))) | 4344651857993325031));
                var_18 = (((((~(arr_13 [i_3] [i_3 + 3] [i_3 + 3] [i_3 + 3])))) ? (((arr_13 [i_3] [i_3 + 1] [i_3 - 2] [4]) / 4344651857993325019)) : (((((arr_13 [i_3] [i_3 + 1] [i_3 + 4] [i_3]) <= (arr_13 [i_3] [i_3 + 1] [i_3 - 2] [i_3])))))));
            }
            var_19 = var_6;
        }
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            var_20 = (max(var_20, var_7));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 10;i_6 += 1)
                {
                    {
                        arr_23 [i_1] [i_4] [i_4] = (!18446744073709551601);
                        arr_24 [i_1] [4] [1] [1] = 0;
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_21 = 943473390644076186;
            var_22 = (max(var_8, (-var_4 / -85)));
        }
        var_23 = ((-(arr_26 [i_7] [i_7])));
    }
    var_24 = (((!var_3) ? (max(((18446744073709551615 ? 2137529562 : 0)), 191)) : var_10));
    #pragma endscop
}
