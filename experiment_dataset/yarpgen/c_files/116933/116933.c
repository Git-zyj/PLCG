/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_19));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_1] = var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_3] [4] [i_3] [4] [i_1] [i_3] = (((arr_11 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1]) ? (~8944620120691182748) : ((min(var_13, ((((((-127 - 1) + 2147483647)) << (var_13 - 3693233727)))))))));
                                arr_16 [i_1] [i_2 + 1] [i_2] [i_3] [i_3] [i_3] [i_3] = (max((((~(arr_13 [i_1] [i_1] [13])))), ((3474619084968712822 / (((-9 ? var_16 : var_10)))))));
                            }
                        }
                    }
                    var_21 = 9;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_24 [i_1] [i_1] [8] = ((arr_6 [i_0 + 2] [0] [i_0]) || ((min(2433757428, 121))));
                                arr_25 [i_1] [i_5] [i_5] [i_5] [i_5] [i_5] [7] = (max((((max(854671761, 1657062663)))), (min((max(131, 33)), (7984257757731530731 && -30155)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
