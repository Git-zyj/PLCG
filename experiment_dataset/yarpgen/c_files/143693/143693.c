/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 63));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_13 = arr_3 [5];
            var_14 = (((141 != 2175434549) < (arr_0 [i_1])));
            var_15 = -1857506456;
            arr_4 [i_0] [i_0] = (arr_0 [i_0]);
        }
        arr_5 [i_0] = ((-(min(((min((arr_0 [i_0]), var_1))), (min((arr_1 [10]), var_7))))));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_16 = -var_8;

            /* vectorizable */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                var_17 = var_10;
                var_18 = ((~((var_7 ? -10 : var_3))));
                var_19 = (max(var_19, -250));
                arr_10 [i_0] [i_2] [i_2] [i_3] = ((~((~(arr_3 [i_0])))));
            }
            for (int i_4 = 3; i_4 < 11;i_4 += 1)
            {
                var_20 = (max(var_20, ((((((~(((((arr_13 [9] [9] [i_4] [7]) + 2147483647)) >> (var_11 + 4460)))))) || ((((((536870912 ? 116 : var_7))) ? (arr_2 [9] [i_2] [i_4 + 3]) : (max((arr_12 [i_0] [i_0] [i_0] [i_0]), var_3))))))))));

                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    var_21 *= 4075090879;
                    var_22 = (arr_2 [i_2] [i_2] [i_5]);
                }
                for (int i_6 = 4; i_6 < 12;i_6 += 1)
                {
                    var_23 = 126976;
                    arr_20 [i_0] [i_2] [i_4 + 1] [i_6] [6] = (min(((((min((arr_8 [i_0] [i_2] [i_0]), 3183115448))) ? (min(var_5, var_3)) : (94 && var_10))), ((min(var_11, (max((arr_6 [i_2]), 198)))))));
                    var_24 = (max(var_24, ((max((arr_11 [i_4] [i_4 - 2] [i_4 - 2]), (min((((var_9 << (var_3 - 674075480)))), var_2)))))));
                    var_25 = ((~(min(var_9, (-2147483647 - 1)))));
                }
                var_26 = (min(var_26, 325674677));
            }
        }
        var_27 = ((((((arr_0 [11]) / (arr_11 [13] [13] [i_0])))) ? ((max(var_8, (arr_8 [i_0] [i_0] [i_0])))) : var_9));
        var_28 += (max(23935, var_7));
    }
    var_29 -= (min(var_4, -30365));
    #pragma endscop
}
