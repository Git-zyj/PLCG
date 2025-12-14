/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_15 = (~-1186995208065761813);
        var_16 = (((((((var_0 << (var_11 + 36)))) <= 2633605304871224541)) ? (min((((119 ? (arr_2 [i_0] [i_0 + 3]) : var_10))), (((-1 + 9223372036854775807) << (3272 - 3272))))) : (-62278 >= var_8)));

        for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_17 = ((-(arr_3 [i_1 - 1] [i_0 + 3])));
            var_18 = var_8;
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_19 = ((var_6 ? 4503599625273344 : (arr_7 [i_0 + 1] [i_0 + 4] [i_0 + 2])));
            var_20 = arr_8 [i_0 + 4];
            var_21 = (arr_1 [6] [i_2 - 1]);
            var_22 = -6416;
        }
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_23 = ((((min((max((arr_3 [i_3] [i_3]), (arr_11 [i_3 + 1]))), 62247))) & (~2633605304871224532)));
        var_24 = (min(var_4, (((arr_2 [i_3 + 4] [i_3]) - (((arr_1 [i_3 + 4] [i_3 + 4]) | var_9))))));
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
    {
        var_25 = -var_3;

        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            var_26 = (((((max((((arr_0 [i_4] [i_4]) || var_11)), var_3)))) & (~-var_2)));
            var_27 = (max(((((arr_11 [i_4 + 1]) <= (arr_3 [i_4 + 3] [i_4 + 3])))), ((var_13 - (arr_11 [i_4 + 3])))));
            var_28 = 4589143488691345041;
            var_29 = (max((((var_5 % 62217) ? (arr_10 [9]) : -118)), (((~((var_12 << (113 - 99))))))));
        }
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {
                        var_30 = ((2633605304871224552 ? (1 & 3635765907) : 448));
                        var_31 = (max(-33, (arr_5 [i_6])));
                        var_32 = (max(((min(-11458, 15))), (arr_3 [i_7] [i_6 - 1])));
                        arr_25 [3] [10] [i_6] = ((~(min(-18866, -3345926606753585895))));
                        var_33 = (max(var_9, (arr_2 [1] [1])));
                    }
                }
            }
        }
    }
    var_34 = ((var_7 ? (((1006921803 ? 11321246695764419158 : -4503599625273344))) : (((var_0 | -100) ? (max(var_12, var_13)) : var_8))));
    #pragma endscop
}
