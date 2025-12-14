/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= -var_8;
    var_21 = (min(var_21, var_13));
    var_22 = (~var_9);
    var_23 = (min(var_23, ((min(1138365426, ((-((var_19 ? 1138365426 : 3156601850)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_24 = ((var_8 | (arr_0 [i_0 + 1])));
        arr_2 [i_0] [i_0 + 1] |= ((((-(arr_1 [4]))) * ((((var_4 || (arr_1 [i_0 + 1])))))));

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_25 = (((((1138365426 ? -23298 : 3156601872))) ? 189 : 21269));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] = (((((1138365433 >> (((arr_1 [i_2]) - 1123992882))))) ? 3156601891 : (!3156601860)));
                arr_8 [i_1] [11] [i_1] = ((!(arr_0 [i_0])));
            }
            var_26 = ((((((arr_1 [i_0]) ? (arr_3 [i_0 + 1] [i_1 - 1] [i_1 + 3]) : (arr_0 [i_0])))) ? ((-927952448 ? 0 : -23272)) : ((-23272 ? 2 : 184))));

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                arr_13 [7] = ((!3156601862) ? (3156601862 > var_2) : ((var_13 ? (arr_3 [i_0] [i_0] [i_3]) : 3156601862)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_27 = (arr_11 [i_0 + 1] [i_1 - 1] [i_5]);
                            var_28 = (((arr_9 [i_0 + 1]) ? (arr_9 [i_0 + 1]) : (arr_9 [i_0 + 1])));
                        }
                    }
                }
            }
        }
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            arr_22 [i_0 + 1] = ((1138365405 ? 1 : 60675));
            arr_23 [i_6] = ((var_16 ? ((4860 ? var_12 : var_12)) : (arr_5 [i_6 + 1] [i_6 + 1] [i_6 - 2] [i_0 + 1])));
            arr_24 [i_0] [i_0] [i_0] = (~1);
            arr_25 [i_0] [i_0] [i_6] = ((23272 >> ((((~(arr_21 [i_0 + 1] [i_0 + 1]))) - 31174))));
        }
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            arr_30 [i_7] = ((54165 ? (arr_21 [i_7 + 2] [i_0]) : -3877394270254891926));
            arr_31 [i_7] = ((-(arr_28 [i_7] [i_7] [i_7])));
        }
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            var_29 ^= (3156601863 >> 0);
            arr_34 [8] |= (((var_8 | 402886044) - 1138365435));
            arr_35 [8] [i_0] [8] |= (((((var_7 * (arr_17 [12] [12] [12] [i_8 + 1] [i_8 + 1])))) || (~var_2)));
        }
    }
    for (int i_9 = 3; i_9 < 10;i_9 += 1)
    {
        arr_39 [i_9] = (min((arr_28 [8] [i_9] [8]), (max((arr_16 [14] [7] [14] [i_9 - 2] [i_9 - 1] [i_9]), (((arr_9 [i_9 + 1]) ? (arr_18 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) : (arr_12 [i_9 - 3] [i_9] [i_9])))))));
        var_30 += 10798;
    }
    #pragma endscop
}
