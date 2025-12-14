/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (~10);
                var_13 = (min(var_13, (((~((var_10 % (arr_2 [i_0]))))))));
                arr_6 [i_1] = (240 % 9061890944885719540);
                arr_7 [i_1] [i_1] = (arr_1 [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_19 [i_2] = 322127300;
                            var_14 = (((arr_15 [8] [i_4] [i_3] [9]) ? ((min((arr_11 [i_2] [i_2]), -63))) : (((((arr_3 [1] [i_3 - 1] [i_4 - 1]) || (arr_12 [i_5 - 1] [i_2] [i_5 + 1])))))));
                            var_15 = (((((max(242, (arr_0 [i_2]))))) & ((253 ? var_6 : (arr_18 [i_2] [i_2] [i_3 - 1] [0] [i_4] [i_5 + 1])))));
                        }
                    }
                }
                var_16 |= (min(15649, 1));
                var_17 = (arr_18 [i_2] [i_2] [i_2] [i_3 - 2] [i_2] [i_3]);
            }
        }
    }
    var_18 = var_3;
    #pragma endscop
}
