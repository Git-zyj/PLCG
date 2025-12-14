/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((var_3 || ((((var_6 && var_0) ^ var_1)))));
    var_14 |= var_3;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {
                        var_15 ^= ((7282132447168814029 ? (((578121184 * 249) / 3519)) : ((((arr_7 [i_1 - 1] [13] [i_1 + 2] [i_1 + 1] [13] [i_1 + 2]) ? (arr_7 [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1 + 2]) : (arr_7 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1]))))));
                        var_16 = -8983655356315336291;
                        var_17 = (min(var_17, (((1761945577010460102 && (~2769388990))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_18 = ((((((arr_13 [i_0] [i_4] [i_5]) == 0))) & (~var_4)));
                    arr_14 [12] [i_4] [i_4] = var_11;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_4] [i_4] [i_0] [i_6] [i_0] = arr_19 [i_7 + 1] [1] [i_7 - 4] [i_7 + 4] [i_7 - 1] [i_7] [i_7 + 4];
                                var_19 -= (arr_8 [8] [i_4] [i_6] [i_5] [i_4] [i_0]);
                            }
                        }
                    }
                }
            }
        }
        var_20 = (max(var_20, var_3));
        var_21 ^= (!-1677440757);
        var_22 = (-30771 ? 1 : -5881580910160784440);
    }
    #pragma endscop
}
