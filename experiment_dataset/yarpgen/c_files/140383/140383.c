/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_5 ? var_8 : var_11)) - var_1)) != (((-(var_16 >= var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_3] [i_2] [i_2] [i_1] [i_0] [i_0] = (arr_12 [i_0] [i_0] [i_0] [i_3] [i_4]);
                                var_18 = (min((((~((~(arr_2 [i_0])))))), ((-(max(21867, 0))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_19 = (max(((-9153762976439314994 ? 17083657854063697952 : 62)), (arr_14 [i_0] [i_5] [i_6 + 4])));
                            var_20 = (((((((arr_14 [i_0] [i_6 - 2] [i_0 - 1]) <= ((min((arr_12 [i_6 + 3] [i_5] [i_0] [i_0 - 1] [i_0]), (arr_11 [i_5] [i_5] [i_5] [i_1] [i_0])))))))) + ((~(min((arr_0 [i_0]), (arr_5 [i_6])))))));
                        }
                    }
                }
                arr_21 [i_0] [i_0] [i_0 - 1] = ((!((min(((min((arr_4 [i_0] [i_1] [i_1]), (arr_18 [i_1] [i_1] [i_1] [i_0] [i_0 - 1])))), (max(var_4, var_12)))))));
                arr_22 [i_0] = (max(((-(arr_17 [i_0 - 1]))), ((((max((arr_15 [i_0] [i_1] [i_1]), var_8)) != ((((arr_12 [i_1] [i_1] [i_0] [i_1] [i_1]) / (arr_20 [i_1] [i_1] [i_0] [i_0] [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
