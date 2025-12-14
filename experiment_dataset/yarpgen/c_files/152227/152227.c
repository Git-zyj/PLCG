/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 16750055243042811115;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = (min((arr_0 [i_0]), (((arr_2 [i_1 + 1] [i_1 - 1]) ? ((((arr_0 [i_0]) ? 84381362 : 135))) : (min(var_2, var_7))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [21] [i_4] [i_4] = (arr_4 [i_0]);
                                var_12 = (min(var_12, (((~(((arr_10 [18] [i_1] [i_2] [i_3] [9] [18]) | (((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ var_7)))))))));
                            }
                        }
                    }
                }
                arr_14 [4] [i_0] [i_0] = ((((max((arr_12 [i_1 + 1] [i_1] [i_1 - 2] [i_1] [i_1]), (arr_3 [i_1])))) ? (252 & var_2) : (arr_10 [i_1] [i_1] [14] [i_1] [i_0] [14])));
            }
        }
    }
    var_13 = var_7;
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 23;i_7 += 1)
            {
                {
                    arr_23 [i_5] [i_7 - 4] = ((+(min((~-1721602242), (max(1721602248, (arr_16 [1])))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                arr_31 [i_9] [i_7] [i_7] [i_7] [i_5 - 2] [i_5 - 2] [i_5 - 2] = ((((((arr_19 [i_5 - 2]) && (arr_18 [i_6 - 3])))) % 81));
                                var_14 = (max((max((((arr_19 [i_5]) == (arr_30 [i_7] [i_7]))), 1)), (var_4 && 1721602242)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = var_2;
    #pragma endscop
}
