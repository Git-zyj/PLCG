/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_12 = (max(((((arr_0 [i_0] [i_0]) > (arr_1 [i_0])))), var_7));
        arr_2 [i_0] = (((((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))) < (arr_0 [i_0] [i_0])));
    }
    /* LoopNest 3 */
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_13 += 10886;

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_14 = var_8;
                        arr_14 [9] [i_2 - 2] [i_2 - 2] [i_2] [i_2] = (((arr_4 [i_4]) ? (arr_4 [i_4]) : (arr_4 [i_1 - 1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
