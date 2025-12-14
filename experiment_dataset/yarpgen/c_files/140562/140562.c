/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_1] = max((((33550336 < (((arr_6 [i_0] [i_0]) ? (arr_8 [i_0]) : var_2))))), ((-(((arr_8 [i_2]) ? 4261416978 : var_5)))));
                    var_10 = (((4070418338 * 1122241156) >= (((-(arr_8 [i_2 - 1]))))));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_13 [i_3] [i_0] [i_3] [i_1] [i_0] = ((((arr_0 [i_0] [i_0]) >> (((arr_6 [i_3] [i_0]) - 633903448)))) | (arr_0 [i_0] [i_1 + 1]));
                        var_11 = (((var_0 + (arr_3 [i_2 - 1] [i_1 - 3]))) - var_4);
                        var_12 = ((((-(((arr_1 [i_2 - 1]) ? var_7 : (arr_8 [i_0])))))) ? 1 : (arr_3 [7] [i_1]));
                        arr_14 [i_0] [i_0] [i_2] [i_3] = (arr_10 [i_0] [i_0] [i_1] [i_2] [6] [i_3]);
                    }
                }
            }
        }
    }
    var_13 = var_4;
    var_14 = var_2;
    #pragma endscop
}
