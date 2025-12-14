/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (((~(((max(var_8, (arr_1 [1]))) & var_10)))))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_13 = (max(var_13, (arr_6 [i_0] [0] [i_2 + 1] [i_3 - 1])));
                            arr_10 [i_0] [i_0] [i_2 + 1] = ((min(var_9, var_9)));
                            arr_11 [i_0] = (((!((min(var_1, (arr_7 [i_0] [8])))))));
                            arr_12 [0] [i_0] [2] [i_3 - 1] = (arr_9 [6] [i_1 + 2] [1] [i_1] [6]);
                        }
                    }
                }
                var_14 = (max(var_14, ((min(var_7, (1 & var_8))))));
                var_15 -= 1225759191;
            }
        }
    }
    var_16 = var_10;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            {
                var_17 = (arr_17 [i_4]);
                var_18 = (min(var_18, (((min(var_10, (arr_16 [i_4] [i_4])))))));
            }
        }
    }
    #pragma endscop
}
