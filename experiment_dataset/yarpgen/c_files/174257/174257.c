/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (arr_1 [10])));
                arr_6 [i_0] [i_0] = (((((!((((arr_1 [i_0]) * (arr_2 [i_0] [i_0]))))))) != (2046707418791587990 || 1672289568)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_13 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] = (((-(arr_5 [2] [2] [i_0]))));
                            var_20 = (arr_11 [1] [1] [i_1] [i_3]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 15;i_5 += 1)
        {
            {
                var_21 = (((((((arr_17 [i_4]) * (arr_15 [i_4])))) * (arr_14 [i_4]))));
                var_22 = ((-(arr_19 [i_4])));
                var_23 = (arr_14 [i_4]);
            }
        }
    }
    #pragma endscop
}
