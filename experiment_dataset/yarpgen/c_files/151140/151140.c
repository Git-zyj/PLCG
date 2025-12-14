/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_2] [6] = (((arr_0 [i_2]) >> (((arr_6 [i_1 + 1] [4] [i_0]) - 10623))));
                    arr_8 [10] [i_1] [i_2] = (((arr_3 [i_2]) + (arr_6 [i_1 - 1] [i_1] [i_1])));
                    arr_9 [i_0] [i_1] [i_2] = 48556;
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_13 [i_1] [7] [7] [i_3] = (((2566061975 ? (4514024227624584390 - -1) : ((min(4294967285, -67))))));

                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        var_11 = ((8 / (arr_10 [i_1 - 1] [i_1 - 2] [i_1] [i_4 + 2])));
                        var_12 -= 22073;
                    }
                }
                var_13 = (max(var_13, ((min(((1 ? 23 : -19164)), ((3765832248 ? (max(var_6, (arr_15 [6]))) : ((3022683781 ? var_8 : 13)))))))));
                var_14 = (arr_2 [i_0]);
                arr_16 [i_0] [i_0] [i_1] = (((((((1 ? var_3 : (arr_2 [i_1 - 2]))) / ((((arr_15 [i_1]) ? (arr_12 [i_0] [i_1]) : 1)))))) ? (((arr_10 [i_1 - 2] [i_1 - 2] [i_1] [i_1 - 1]) ? (arr_10 [i_1] [i_1] [i_1] [i_1 + 1]) : (arr_10 [4] [1] [i_1] [i_1 + 1]))) : (((-(var_6 - var_7))))));
                arr_17 [i_0] [i_1] = ((((min((arr_15 [i_1]), (arr_15 [i_1])))) - 416053116407663735));
            }
        }
    }
    var_15 = ((var_10 ? (((var_0 + (!var_3)))) : (0 > var_0)));
    #pragma endscop
}
