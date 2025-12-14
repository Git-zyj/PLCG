/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 1963406887;
    var_11 ^= var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_3] [10] = ((var_4 ? (((!(arr_12 [i_4 - 1] [i_4] [i_4 - 1] [i_4] [i_2] [i_1 + 1])))) : (((var_7 <= (arr_8 [i_1] [i_1] [i_1 + 2] [i_1]))))));
                                var_12 = (min(var_12, (((((arr_0 [10]) / ((((arr_13 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3] [i_4 - 1]) >> (var_8 - 7429036150040940396)))))) / (min(((min(1, (arr_5 [0] [i_1])))), (~3984397038490609416)))))));
                                arr_16 [i_0] [i_1] [i_1 + 2] [1] [i_3] [i_0] = ((min(29503, (arr_14 [i_4 - 1] [i_4] [i_0] [2] [2] [i_4 - 1]))));
                                var_13 |= var_8;
                                var_14 = (~var_8);
                            }
                        }
                    }
                    arr_17 [i_0] = (arr_8 [i_0] [i_0] [i_1] [10]);
                    var_15 -= var_9;
                    arr_18 [i_0] [i_0] [i_2] = ((+(min((((arr_0 [i_0]) ? (arr_14 [i_0] [1] [i_0] [1] [i_2] [i_1]) : var_7)), ((~(arr_11 [i_0] [i_0] [8] [i_0] [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}
