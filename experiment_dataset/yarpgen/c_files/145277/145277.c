/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) > (max((var_1 < 22), (~var_15)))));
        var_17 = -27832;
        arr_3 [i_0] = (+(min((arr_1 [i_0] [i_0]), (~var_5))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = -1934939991;
        arr_7 [i_1] = (!-7);
        arr_8 [i_1] = (1 >> (var_16 + 2095762872));

        for (int i_2 = 4; i_2 < 18;i_2 += 1)
        {
            var_19 = (min(var_19, var_1));
            var_20 = 1732049494;
            var_21 -= (((arr_10 [i_2 + 2] [i_2 - 3]) ? (arr_12 [18] [i_1]) : (arr_10 [i_2 - 2] [i_2 + 2])));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_15 [i_3] = (arr_9 [i_1] [i_1]);
            var_22 = var_7;
        }
    }

    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = 15240407171090006738;
        var_23 += (((~(((arr_0 [i_4] [i_4]) ? var_5 : (arr_16 [i_4]))))));
    }
    var_24 = 5239;
    var_25 = (var_2 == var_2);

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_26 = 1;

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_27 = (((~1) ? ((var_5 ? (arr_17 [i_6]) : var_1)) : (min(((((arr_21 [i_5]) == -325116122))), (((arr_17 [i_5]) ? (arr_13 [i_5] [i_5] [i_6]) : var_8))))));
            arr_25 [i_5] [i_6] = -419981872;

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_28 = (arr_16 [i_6]);
                arr_29 [i_7] [i_7] = (arr_1 [i_5] [i_5]);
                arr_30 [i_6] [i_7] [i_5] [i_6] = (var_10 & var_15);
                arr_31 [i_5] [i_6] [i_7] = ((-(max((1 & 10), 14429689703949161929))));
                arr_32 [i_7] [i_7] = (max(127, 1));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                var_29 = ((+(((arr_24 [i_5] [i_6]) ? var_11 : (arr_11 [i_8])))));
                arr_35 [i_5] [i_6] [i_5] [i_5] |= (((~46) == ((var_4 ? (arr_6 [i_5]) : 15619))));
                arr_36 [i_5] [i_6] [i_5] = (~var_0);
            }
            for (int i_9 = 1; i_9 < 17;i_9 += 1)
            {
                var_30 = var_16;
                var_31 = (((!1997631912) ? var_13 : 1));
            }
            var_32 = (3206336902619544874 || 1030620035);
        }
    }
    #pragma endscop
}
