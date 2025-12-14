/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_11, (var_9 < 118)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (~8191);
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [3] [i_0] = ((~(arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            arr_10 [i_1] [i_2] &= (arr_1 [i_1]);
            var_14 = var_7;
        }
        arr_11 [i_1] [2] = ((~(arr_7 [i_1])));
        var_15 = (min(((min(-46, 110))), (arr_8 [i_1] [1])));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_16 = -46;
            var_17 += ((((((arr_14 [i_4]) <= (((max((arr_17 [i_3] [i_4]), (arr_12 [i_4])))))))) > var_1));
        }
        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            var_18 = (min(var_18, ((((((46 ? (arr_17 [i_3] [1]) : (arr_13 [i_5 - 1] [i_5 - 3])))) % (min(((min(var_6, var_5))), var_12)))))));
            var_19 = (max((max((arr_19 [i_5 - 2]), (~1))), (max(-var_10, 42))));
            var_20 = var_7;
            arr_20 [i_3] [i_3] [i_3] = (((~-69) == (max((max(29, -4559482104661246037)), ((min(var_4, 43)))))));
        }
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            var_21 = (max((!1), 8281552576536428551));

            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                var_22 = ((!(((arr_24 [i_6 + 1] [i_6 + 1]) < (arr_24 [i_6 + 1] [i_6 + 1])))));
                arr_28 [i_3] = (var_1 * 29);
            }
            arr_29 [i_3] [4] = (min(30, 2882282760957696902));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_23 *= ((-43 ? (!171) : (arr_23 [i_3] [12] [i_3])));
            var_24 = (((arr_26 [i_3] [i_3] [i_3] [i_3]) ? (arr_26 [i_3] [i_3] [i_8] [i_8]) : (arr_26 [i_3] [i_3] [i_8] [i_3])));
        }
        arr_32 [i_3] [i_3] = ((var_2 - (max((min((arr_14 [i_3]), var_0)), (~var_4)))));
        var_25 |= (arr_26 [i_3] [1] [i_3] [i_3]);
    }
    #pragma endscop
}
