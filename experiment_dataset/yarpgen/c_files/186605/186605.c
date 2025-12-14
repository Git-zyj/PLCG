/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_9;
    var_13 = (min(var_13, (((((((var_6 ? var_11 : var_4)))) || (((var_1 | var_0) >= 200)))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_1 [i_0]) ? (((max(var_3, var_6)))) : -var_0)) * (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_14 = (max(var_14, -6885));
            var_15 &= var_10;
            var_16 = (min(var_16, ((((var_5 % -8861570185348426639) ? 23762 : ((var_4 ? var_2 : (~195))))))));
            var_17 += (min(((max((arr_4 [i_0]), (arr_4 [i_0])))), (min((var_11 | 2206888034), (var_8 < var_3)))));
            var_18 &= (((((arr_3 [i_0] [i_1]) / (arr_0 [i_1])))) ? 1 : 218039727400308386);
        }

        for (int i_2 = 4; i_2 < 6;i_2 += 1)
        {
            arr_8 [i_0] [3] [i_2] = ((2090862528 && ((((arr_3 [i_2 + 2] [i_2 + 2]) ? (arr_3 [i_2 + 2] [i_2 + 2]) : (arr_3 [i_2 + 2] [i_2 + 2]))))));

            for (int i_3 = 4; i_3 < 6;i_3 += 1)
            {
                var_19 += ((((4281330951 ? (arr_9 [3] [i_2 + 3] [3]) : (arr_9 [i_0] [i_0] [i_0]))) != ((-(arr_9 [i_2 + 1] [i_2 + 1] [i_0])))));

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_17 [1] [i_2] [i_2] = (arr_14 [7] [i_2] [i_3 + 4] [7]);
                        arr_18 [i_2] [i_3 - 2] &= (arr_9 [i_0] [i_3] [i_0]);
                    }
                    var_20 |= ((((((arr_11 [i_2 + 1] [i_3 - 4] [i_4]) ? 6506186100147190556 : 4294406691))) ? ((max((arr_11 [i_2 + 3] [i_3 - 4] [i_3 - 4]), (arr_11 [i_2 - 3] [i_3 - 1] [i_4])))) : ((((arr_11 [i_2 - 3] [i_3 - 1] [i_3]) < var_9)))));
                    var_21 = (min(var_21, ((max(((109 - (max(var_0, var_3)))), (arr_12 [i_3 - 2] [i_3] [i_2 + 4]))))));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_22 -= (((0 ? (arr_12 [i_6] [i_0] [i_0]) : (var_1 >= var_3))));
                    arr_23 [i_0] [1] [i_3] [i_6] = var_10;
                }
                var_23 = ((1741281695815766093 + ((((((var_3 ? -4376923688250939040 : (arr_22 [i_3] [i_0])))) ? var_5 : (!var_0))))));
                var_24 |= ((((((((-(arr_16 [i_0] [i_2] [i_3] [i_3] [i_2])))) & ((var_6 ^ (arr_19 [i_0] [i_2 + 4] [i_3 - 1] [i_3 + 3])))))) ? ((~(arr_22 [i_0] [i_0]))) : (4124 & -1)));
            }
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            var_25 += ((((((arr_15 [i_0] [i_0] [i_0]) >> (var_2 - 6700040587273222222)))) ? (35572 / var_1) : (((arr_16 [i_0] [i_0] [i_0] [i_7] [i_7]) - (arr_15 [i_0] [i_0] [i_7])))));
            var_26 = (arr_21 [i_0] [i_0] [i_7] [i_7]);
            var_27 += (max(((((arr_14 [i_0] [i_7] [i_0] [i_7]) && var_8))), ((min((var_6 && var_6), var_2)))));
        }
        var_28 = (max((arr_10 [5] [i_0] [1]), var_1));
    }
    #pragma endscop
}
