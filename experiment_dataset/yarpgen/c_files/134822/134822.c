/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (((arr_2 [i_0]) + ((~(arr_1 [i_0])))));
                arr_5 [i_0] [i_1] [16] = ((min(((min(var_11, (arr_3 [i_0])))), (max((arr_1 [i_1]), var_15)))));
                var_21 *= ((max((var_6 >= 255), (max(843480859, 3451486415)))));
                var_22 *= 3451486424;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_23 = (((arr_11 [i_2]) ? (arr_11 [i_5 + 1]) : (((arr_11 [i_2]) % (arr_12 [i_2] [i_3] [i_4 - 1])))));
                            arr_15 [1] [i_2] = var_5;
                        }
                    }
                }
                arr_16 [i_2] [i_3] = (var_6 < var_7);
            }
        }
    }
    #pragma endscop
}
