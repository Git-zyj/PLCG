/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(9305931191098966601, (min((var_6 + 9305931191098966601), 1))));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (min(0, 897192875));
        arr_3 [11] = (((var_8 - ((min((arr_1 [i_0 + 2] [i_0 + 2]), (arr_1 [19] [19])))))));
    }
    var_11 = ((((min(15529, 0))) - ((((0 || ((min(0, 24)))))))));
    var_12 *= ((((var_2 != 7382) < ((14184473336615273058 >> (var_1 - 13985))))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            var_13 = (max(var_13, ((min(((((arr_7 [i_2] [i_3] [i_4]) < (min((arr_10 [i_1] [i_2] [i_1]), (arr_11 [i_1] [i_2] [i_3 + 1] [i_4])))))), (min(32767, (arr_10 [9] [1] [1]))))))));
                            arr_14 [i_4] [i_3 + 1] = (((15512 & 34) == (((min((arr_10 [i_3 + 2] [i_2] [i_1]), (arr_4 [i_1] [i_1])))))));
                        }
                    }
                }
                var_14 = (min(((max(((457800876 >> (2147483640 - 2147483611))), ((min((arr_9 [i_1] [12]), 0)))))), (((0 & 11218) - (min((arr_6 [i_1] [i_2]), var_1))))));
                var_15 = ((min((arr_8 [20] [i_2] [i_2]), (((3847988983610464162 && (arr_1 [i_1] [i_1])))))));
                var_16 = min(61094, 15511);
            }
        }
    }
    #pragma endscop
}
