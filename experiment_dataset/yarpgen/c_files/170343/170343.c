/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_0] = (99944392279448585 && 1);
                var_11 ^= (min((((var_2 - var_7) ? (((min((arr_4 [i_0]), var_2)))) : (16777208 - 8128))), ((((arr_1 [i_1 + 1]) && var_4)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_12 ^= arr_6 [i_2] [i_1];
                                arr_16 [i_4] [i_3] [i_3] [i_3] [i_2] [i_1] [i_0] = 8150;
                                var_13 = -8151;
                                arr_17 [i_3] = ((arr_1 [i_1]) ? (((-20033 ? 8161 : 826093779))) : (arr_11 [i_3] [i_1] [i_0]));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = (max(var_14, ((((((var_9 / var_9) << (4294967287 && var_3))) & (((!(var_4 >> 1)))))))));
    #pragma endscop
}
