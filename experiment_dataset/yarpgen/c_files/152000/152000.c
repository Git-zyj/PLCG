/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_2 ? (((((var_10 != var_9) > var_2)))) : (~var_12)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_17 = var_15;
        var_18 = var_10;
        var_19 = (min(var_19, (arr_1 [i_0])));
        var_20 = (arr_3 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((+(((((arr_1 [i_1]) + 583107780)) + ((max(var_14, 616874338))))))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    var_22 ^= ((min(((var_3 ? 1411434597 : 134217727), ((-29137 ? 1 : 1))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            {
                                var_23 = ((((-32763 ? (2047 - 1) : (max((arr_14 [i_1] [i_2] [i_3 + 2] [1] [i_5]), var_10))))) ? -2035 : (((arr_13 [i_1] [1] [i_2] [i_4]) ? var_1 : (arr_6 [i_1] [1]))));
                                var_24 -= 19557;
                                var_25 |= ((((((min(-83, (arr_6 [i_3] [i_2])))) - -1)) != ((min(1, -32755)))));
                                var_26 = (((((-(min(1, (arr_14 [i_5] [12] [i_1] [i_2] [i_1])))))) ? (min(((18385331228443752410 ? var_8 : (arr_11 [i_3] [7] [i_3] [i_1] [i_5] [i_1]))), var_7)) : -19550));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    {
                        var_27 = (min((((!(arr_9 [13] [i_6] [i_1] [i_1])))), (arr_11 [i_1] [i_6] [i_6] [i_6] [13] [i_8])));
                        var_28 = (min(var_0, (((!(arr_13 [i_1] [i_7 + 1] [i_7 - 2] [i_1]))))));
                    }
                }
            }
        }
        var_29 = ((-32746 ? -4974 : (min((min((arr_1 [i_1]), -32763)), (arr_7 [13])))));
    }

    /* vectorizable */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_30 = (-var_14 != var_7);
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        var_31 = ((var_6 ? (arr_25 [i_9]) : -1));
                        var_32 = arr_31 [i_12] [i_11] [i_10] [i_9];
                        var_33 = ((~(((arr_25 [i_10]) + var_9))));
                        var_34 = ((~1508218637) ? (arr_25 [i_11]) : var_9);
                    }
                }
            }
        }
        var_35 = (var_15 || 2031);

        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            var_36 = (((29037 && var_0) ? (1 - 3179441761) : (var_10 != var_9)));
            var_37 = var_12;
        }
    }
    var_38 = (((((-((-19557 ? (-32767 - 1) : 1))))) ? ((-(29037 + var_5))) : var_3));
    #pragma endscop
}
