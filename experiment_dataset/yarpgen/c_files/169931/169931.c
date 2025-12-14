/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (min(var_17, var_14));
                var_18 = var_15;
                var_19 = (min(var_19, (((-7075803558291154333 >> ((((max(var_8, var_2))) - 4231)))))));
            }
        }
    }
    var_20 = (249 % 8215896500608098284);
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_13 [i_3] = ((((((3615 > 3250735913) % ((var_2 ? var_5 : var_3))))) ? (max(((((arr_10 [i_2] [i_2 - 1] [i_4] [i_2 - 1]) << (((arr_7 [i_2 + 2] [i_2 - 3]) - 3974356047))))), ((var_14 ? var_3 : var_2)))) : var_15));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_21 = ((-(min(((((arr_10 [i_2] [i_3] [i_2] [i_5]) == (arr_6 [i_2 - 3])))), (var_15 + var_6)))));
                                arr_19 [i_2] [i_3] [i_2] [i_5] [i_2] [i_3] [i_6] = (min(((((arr_16 [i_2] [i_2 - 2] [i_2] [i_2 - 1] [i_2 + 1] [i_2]) > (arr_16 [i_2] [i_2 - 2] [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1])))), ((-(arr_11 [i_2])))));
                            }
                        }
                    }
                    var_22 = ((~((-((max(var_12, (arr_9 [i_2]))))))));

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        arr_22 [i_2] [i_3] [i_4] [i_7] = ((((((var_8 ? var_11 : var_6)) ? (((max(var_12, var_0)))) : (((arr_7 [i_4] [i_4]) >> (var_15 - 18060597175762184376)))))));
                        var_23 = (((((((((arr_10 [i_2] [i_2] [i_4] [i_7]) ? var_0 : var_0))) / (var_13 ^ var_4)))) ? (((var_10 ^ (((var_15 >= (arr_20 [i_2] [i_3]))))))) : (1044231382 - -93)));
                        var_24 = (arr_15 [i_7] [i_2 + 1] [i_7]);
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_25 = (min(var_25, (((((arr_21 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_8]) + ((((arr_6 [i_2]) / (arr_10 [i_2 + 1] [i_3] [i_8] [i_8])))))) * (((14313780643383820356 ? -808372348448816840 : 242)))))));
                        var_26 = (((((var_15 ? (arr_9 [i_2 - 1]) : (arr_9 [i_2 - 3])))) && ((max((arr_9 [i_2 - 2]), (arr_9 [i_2 + 2]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
