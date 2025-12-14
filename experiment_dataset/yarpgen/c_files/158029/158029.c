/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, ((max(1920, (arr_2 [i_2 + 2] [i_1]))))));
                    var_14 = (max(32676, -1));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                arr_12 [i_3] [i_4] &= ((((0 - (((arr_8 [i_3]) ? (arr_9 [i_4]) : -74)))) * (((arr_7 [i_3 - 1]) ? (((arr_6 [8] [i_4]) ? var_9 : (arr_6 [i_3] [i_3]))) : (~3)))));
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_15 = (max((arr_19 [i_3] [i_3] [i_3] [i_3 + 1] [i_3] [i_6] [10]), (((16383 != ((1768729899 ? -1 : (arr_7 [i_7 + 3]))))))));
                                var_16 += (((~0) ? (arr_10 [i_5] [i_4]) : (((arr_16 [i_5 + 3] [i_4] [i_4] [i_7 + 3]) | 0))));
                                var_17 -= (((arr_15 [i_3] [i_4] [i_5] [i_6] [11]) ? ((((((~(arr_16 [i_3] [i_5] [i_4] [i_7])))) ? var_1 : ((max(var_12, var_0)))))) : (max((max(0, 32767)), 4294967295))));
                                var_18 = arr_16 [i_7] [i_6] [i_6] [i_3 + 1];
                                arr_20 [i_4] [i_4] [i_4] [i_4] [i_6] = 53650;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
