/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] [i_0] [i_1] = -var_8;
                arr_6 [i_0] [i_1] [12] = (((arr_4 [i_0 - 1] [i_0 - 1]) ? (arr_1 [i_0 - 1] [i_0 + 1]) : (arr_4 [i_0 + 1] [i_0 - 1])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_13 [i_0 + 2] [i_1] = ((((((arr_7 [i_2] [i_3]) ? (((arr_7 [i_2] [i_1]) ? var_17 : var_7)) : (var_13 && var_11)))) & (((arr_9 [i_0] [i_1] [2] [i_1]) % (max(var_3, (arr_2 [i_0])))))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_2] [0] &= var_15;
                        }
                    }
                }
                arr_15 [i_0] [15] = (((10894403944531625548 >= 10894403944531625548) - (arr_1 [i_0 + 3] [i_0 + 1])));
            }
        }
    }
    var_18 ^= (max((((~(~var_7)))), (min((~var_12), (min(7552340129177926067, 0))))));
    #pragma endscop
}
