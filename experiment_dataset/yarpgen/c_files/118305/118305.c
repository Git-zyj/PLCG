/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_6;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = 32;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            var_21 = (min(var_21, (((((-(arr_9 [i_4 + 3] [i_4] [i_4 - 1] [i_4 - 3] [5])))) ? (min((((arr_10 [i_2] [i_2]) ? (arr_8 [i_0] [i_1] [6] [7] [i_4]) : 8271434109929331496)), (!12086652372010901962))) : (((max((var_14 && var_4), 13537))))))));
                            var_22 += (arr_11 [i_0] [i_0] [i_0] [1] [3]);
                            arr_13 [1] [1] [i_1] [i_2] [i_3] [i_4] [i_4] = (((((arr_9 [i_0] [i_1] [1] [i_4 + 1] [10]) > 1164186213)) ? (((((arr_0 [i_3]) > -1395315622858505261)) ? 9 : ((var_3 ? var_4 : -5)))) : (((((arr_1 [i_4 + 3] [i_4 - 1]) || ((min(var_14, 5937)))))))));
                        }
                        for (int i_5 = 3; i_5 < 14;i_5 += 1)
                        {
                            arr_17 [i_0] = (((((var_8 ? var_16 : (arr_3 [10])))) >> (((min(var_18, 8271434109929331470)) - 8271434109929331463))));
                            var_23 += (min(-5, 712351335));
                            arr_18 [i_0] [i_0] [i_0] [1] [14] = (((arr_8 [i_5] [i_5] [i_5] [i_5 - 1] [i_5 + 1]) / var_16));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_24 += var_3;
                            arr_21 [i_6] = ((-(min((arr_5 [0] [i_1] [i_1]), ((min(var_10, var_7)))))));
                        }
                        var_25 = (min(var_25, ((min(((min(19887, 259))), (((min((arr_12 [i_0] [i_2] [i_2]), var_1)) ? (min(var_3, 7963252478794529527)) : (arr_16 [i_0] [i_1]))))))));
                        var_26 = (arr_4 [i_1] [i_1]);
                        arr_22 [i_2] [i_1] [0] [i_3] = (min(var_13, 6360091701698649648));
                    }
                }
            }
            var_27 = ((((((max(1562497549, 2417748136664200554))) || (1 && 0))) || (arr_2 [i_0] [12] [i_1])));
            var_28 = (((((min((arr_9 [i_0] [i_0] [i_0] [i_1] [i_1]), (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1]))))) | (~var_11)));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            var_29 += (arr_11 [i_7] [i_0] [i_7] [i_0] [i_0]);
            var_30 = 15040;
            arr_25 [i_0] = ((arr_20 [i_0] [i_0] [i_0]) >> (var_0 - 30324));
        }
        var_31 += var_0;
    }
    #pragma endscop
}
