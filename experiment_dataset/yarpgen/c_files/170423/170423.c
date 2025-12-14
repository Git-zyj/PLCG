/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-2 == 6);

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_13 = ((((!(((var_4 ? var_6 : (arr_0 [i_0])))))) ? ((((1 + 10877) >= (arr_0 [i_0])))) : var_3));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_14 = (i_0 % 2 == 0) ? ((((((((arr_6 [i_0 - 1] [i_0 + 1] [i_0 - 1]) + 2147483647)) >> (((arr_2 [i_0]) + 132)))) > (!var_6)))) : ((((((((arr_6 [i_0 - 1] [i_0 + 1] [i_0 - 1]) + 2147483647)) >> (((((arr_2 [i_0]) + 132)) - 54)))) > (!var_6))));
            arr_7 [i_0] [i_0] = (max(2370354625391950336, -27607));
            var_15 = (max(var_2, ((((arr_6 [i_0 - 1] [8] [13]) >= (arr_6 [i_0 - 1] [i_1] [i_1]))))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_11 [i_0] [i_2] = (min(1, 707692965));
            var_16 = max(4294967295, (((arr_1 [i_0] [i_0]) ? 10893 : 65517)));
            var_17 = ((var_0 >= ((~(arr_3 [i_0])))));
            var_18 = ((arr_8 [7] [i_0] [i_0 - 1]) >= -88);
            arr_12 [i_0] [i_0] = var_7;
        }
    }
    for (int i_3 = 4; i_3 < 14;i_3 += 1)
    {
        arr_16 [i_3] [1] = ((min(var_11, (arr_13 [i_3] [i_3 - 3]))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_21 [1] = ((~(arr_1 [i_3] [i_3])));
            var_19 = (arr_5 [i_3] [i_4] [i_4]);
        }
        var_20 = (((((((~(arr_9 [18] [i_3])))) ? ((15748040023721734645 >> (arr_15 [i_3]))) : var_3)) < (((min(0, var_11))))));
        arr_22 [11] = ((var_2 > (arr_1 [i_3 + 1] [i_3])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_25 [i_5] [i_5] = (~-3873640076309392508);
        var_21 = 1;
    }
    var_22 = var_7;
    var_23 = var_4;
    #pragma endscop
}
