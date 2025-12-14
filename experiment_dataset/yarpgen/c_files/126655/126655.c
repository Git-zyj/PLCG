/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_10 = arr_0 [i_0];

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                arr_8 [i_2] [i_2] [i_2] |= var_0;
                var_11 = (max(var_11, var_3));
                var_12 = (max(var_12, (0 && -20007)));
            }
            for (int i_3 = 3; i_3 < 22;i_3 += 1)
            {
                var_13 = ((~(-2147483647 - 1)));
                var_14 = ((~(arr_9 [i_1] [i_1])));
                var_15 = 9223372036854775807;
            }
        }
        arr_11 [3] [3] = (arr_5 [i_0] [i_0] [i_0 - 3]);
        arr_12 [1] = 31209;
        arr_13 [i_0] = ((((arr_0 [i_0 - 1]) - (arr_4 [i_0] [i_0] [i_0 + 2] [i_0 + 2]))) - 31219);
        arr_14 [i_0 - 3] = (max((arr_5 [i_0] [i_0] [i_0]), (arr_9 [18] [i_0])));
    }
    var_16 = var_2;

    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        arr_18 [i_4 - 1] [i_4 + 2] |= (max((((((var_3 ? var_1 : (arr_15 [i_4])))) % (max((arr_2 [i_4] [i_4] [i_4]), (arr_17 [9] [i_4 - 2]))))), (((~((max(var_4, (arr_10 [i_4] [i_4] [i_4])))))))));
        arr_19 [i_4] [i_4] = (arr_9 [i_4] [i_4 - 2]);
        arr_20 [i_4] = (max((max(-1, 31210)), (arr_3 [i_4] [i_4 + 3])));
        var_17 = (min(var_17, ((((!((max(var_5, var_6))))) ? 1946 : (arr_10 [i_4] [i_4] [i_4])))));
        var_18 = max((~var_8), (((-2147483647 - 1) ? (arr_6 [i_4 + 1] [i_4 + 1] [i_4]) : var_0)));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_19 -= (((var_1 && ((!(arr_21 [i_5]))))) ? (((arr_5 [i_5] [i_5] [i_5]) >> (59 - 32))) : ((((min(-31211, -1))) | (arr_6 [i_5] [i_5] [i_5]))));
        arr_23 [i_5] = var_3;
    }
    #pragma endscop
}
