/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((((-30017 ? var_9 : 249))) ? (18014397972611072 + var_9) : (((max(var_6, var_1)))))) + 77));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_11 = (max(var_11, (arr_3 [i_0 + 4])));
        arr_4 [i_0 + 1] = (((arr_3 [i_0 + 4]) && (1 % 2047)));
        var_12 = var_3;
        var_13 *= (min((arr_1 [i_0]), 2983168535));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_14 |= (((arr_6 [i_1] [0]) >= (arr_1 [14])));
        var_15 = (!-15735);
        var_16 -= ((var_6 ? 2983168535 : (arr_3 [5])));

        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_17 |= (1 % 1311798761);

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                var_18 = ((!(arr_10 [i_3] [i_1 - 1] [i_2] [i_1 - 1])));
                var_19 = (arr_2 [i_1 - 1] [i_2 + 1]);
            }

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_20 = (var_6 + 3648209553);
                arr_14 [i_1] [i_2] [i_1] [i_1] = ((!33461) ? (arr_11 [i_1] [i_2] [i_2 + 1] [i_1]) : 2983168535);
                var_21 = (arr_8 [7] [i_2] [i_1 + 1]);
            }
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                var_22 = ((1016 ? var_6 : 1));
                var_23 = ((var_1 ? (arr_7 [i_1] [i_2] [i_5]) : (var_4 || var_1)));
                var_24 &= var_1;
            }
        }
        var_25 = ((~(arr_7 [i_1 - 1] [0] [i_1])));
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        var_26 = (max((min((min(4256449592037829073, 2983168531)), var_3)), (arr_0 [13])));
        var_27 ^= 1;
    }
    #pragma endscop
}
