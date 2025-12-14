/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (((((((((arr_2 [i_0]) | var_8)) >= (((((arr_1 [i_0] [0]) && var_2)))))))) <= (((((min((arr_1 [i_0] [i_0]), var_9)))) * ((var_10 ? 2455262371 : var_6))))));
        arr_3 [i_0] [i_0] = ((((arr_2 [i_0]) == (arr_2 [i_0]))));

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_6 [i_0] [i_0] = (((((-((min(var_12, (arr_1 [i_0] [i_1]))))))) | (min((arr_0 [i_1 + 1]), var_8))));
            arr_7 [i_0] = ((+((((arr_1 [i_1] [i_0]) <= (arr_1 [i_0] [i_0]))))));
            arr_8 [i_0] [i_0] [i_1] = (!((min((arr_5 [i_0]), (arr_0 [i_1 - 1])))));
            var_14 = (min(var_8, -5178752832845133455));
        }
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    {
                        arr_19 [i_5 - 1] [i_4] [i_3] [i_3] [i_2 - 2] |= var_8;
                        arr_20 [i_2] [i_2] [i_2] [i_2] [i_2] [i_5 + 2] = 2455262371;
                    }
                }
            }
        }
        arr_21 [i_2] [0] = ((arr_1 [i_2 + 1] [i_2 - 2]) && 1839704924);
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_15 = ((min((min(21660, var_6)), (~1839704924))));
                                var_16 = (min(var_16, ((((!(arr_24 [i_6] [i_9]))) && (((arr_24 [i_8] [i_6]) >= (arr_24 [i_6] [i_6])))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 14;i_12 += 1)
                    {
                        {
                            arr_40 [i_12] [i_11] = min((min(((33453 ? 262016 : (arr_22 [i_11] [i_11]))), 25103)), 3);
                            var_17 = ((var_3 ? 60672 : ((min(var_7, (arr_32 [i_12 - 1] [i_12] [i_12] [i_12] [i_12]))))));
                            var_18 += (arr_27 [i_12 - 4] [i_12 - 4] [i_12] [i_12 + 1]);
                        }
                    }
                }
                arr_41 [i_7] = (-(((var_12 == (arr_32 [i_6] [i_7] [i_7] [i_6] [i_6])))));
            }
        }
    }
    #pragma endscop
}
