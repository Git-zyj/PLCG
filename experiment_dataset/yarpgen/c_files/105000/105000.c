/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((((max(var_9, (((36532 ? 0 : 7)))))) ? (39016 / 1) : -105)))));
    var_15 |= var_9;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((((((arr_0 [i_1]) == (arr_0 [i_0 - 1])))) - (!var_8))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = ((74 ? (((25873 ? 1 : 0))) : (((arr_9 [i_2] [i_2] [i_4 - 2] [i_4 - 1] [i_2]) + (0 - -4696178790435741336)))));
                                arr_12 [i_0] [i_0 - 1] [i_0] [i_2] [i_0 + 1] = (min((max((arr_8 [i_0 + 1] [i_4 - 2] [i_4 + 1] [i_4 - 1]), (arr_5 [i_0 + 1] [1] [i_4]))), -8355471678090549612));
                            }
                        }
                    }
                    arr_13 [i_2] = (((max((!var_9), ((var_5 ? (arr_11 [i_0] [i_0] [i_0 + 1] [i_1] [i_2] [i_2]) : var_4)))) != ((((!(arr_1 [i_0] [i_0 - 1])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_18 = (min(((max((max(114, var_11)), (!0)))), (((((2571 ? var_9 : 1))) ? var_0 : (((min(1, 1))))))));
                                arr_18 [i_2] [i_1] [i_1] [i_5] [i_1] [i_1] [i_2] = (max((arr_6 [i_5] [i_5] [i_0 - 1]), (max((arr_1 [i_0] [i_1]), (arr_1 [i_1] [i_5])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
