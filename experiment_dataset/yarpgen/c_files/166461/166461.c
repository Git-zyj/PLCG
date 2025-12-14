/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_1] = (((((max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1])))) * var_11)));
                var_18 = ((((((arr_3 [i_0] [i_1]) / ((~(arr_0 [i_1])))))) ? ((((14459984394655468591 <= (arr_2 [i_0] [i_0]))))) : var_6));
                arr_6 [i_1] = (((((arr_4 [i_1] [i_1]) ? var_12 : var_6)) > (((((arr_3 [i_0] [i_0]) ? var_16 : 14459984394655468566)) / ((((arr_3 [1] [5]) ? var_0 : (arr_0 [4]))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 = (((((arr_7 [10] [i_1] [i_2 + 1] [1]) && 3986759679054083020)) ? (((((arr_10 [0] [i_1] [i_2 + 1] [1]) || (arr_10 [i_0] [i_2] [i_2 + 1] [i_2 + 1]))))) : ((var_6 ? var_14 : (arr_7 [i_0] [i_1] [i_2 + 1] [i_3])))));
                            arr_13 [i_0] [i_0] [i_2 + 1] [i_1] = arr_4 [i_1] [i_1];
                            var_20 = (min(var_20, (((var_2 ^ (arr_8 [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                {
                    var_21 = 110;
                    arr_21 [i_5] = ((((((arr_15 [i_5] [i_6 + 1]) + (arr_15 [2] [i_6 + 2])))) - ((142 / (arr_18 [i_4 - 2] [i_5 - 3] [i_5 + 1])))));
                    arr_22 [1] [i_5] [i_5] [i_6 + 2] = ((((((arr_14 [i_4 - 1] [i_5 - 3]) / var_1))) != ((var_9 + (((arr_18 [i_4] [i_4] [16]) ? var_17 : (arr_20 [i_4] [i_4])))))));
                    arr_23 [i_4 + 1] [i_5] [i_5] = (((32413 ^ (arr_18 [i_5] [i_5 - 1] [i_5 + 1]))));

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_22 &= (var_10 < var_15);
                        var_23 = ((((var_10 + (arr_14 [i_5] [i_6]))) < (((~var_14) << ((((arr_17 [i_6 - 1] [i_6 - 1]) && var_5)))))));
                    }
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        var_24 = (min(var_24, (((((((max(101, 20)) >= var_3))))))));
                        var_25 = (max(((((arr_27 [i_5] [i_5] [i_4 - 1] [i_5 - 3]) ? (arr_27 [i_5] [i_4] [i_4 - 1] [i_5 - 1]) : (arr_27 [i_5] [i_5] [i_4 - 1] [i_5 - 2])))), (((arr_24 [i_4] [i_5 - 1] [i_4] [i_8]) ^ (max(6669562461255046078, (arr_17 [i_4] [0])))))));
                        arr_29 [i_4 - 1] [i_5] [i_4 - 1] = max((max((~var_0), (~var_12))), (~var_7));
                    }
                }
            }
        }
    }
    #pragma endscop
}
