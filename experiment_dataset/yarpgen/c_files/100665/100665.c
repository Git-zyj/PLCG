/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_20 = (((((120 * (arr_0 [0])) ^ ((min((arr_0 [7]), (arr_0 [i_0 + 1]))))))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_21 = var_15;
                        var_22 |= (min(var_11, ((~(max((arr_5 [1] [0] [0]), 65415))))));
                        arr_8 [i_1] [i_1] [i_1] [i_1] [i_1] = (((arr_4 [i_0 - 2] [i_0 - 1] [i_0]) | (arr_1 [i_0 + 1])));
                        arr_9 [i_0 - 1] [i_0 - 1] [i_2] = (((65426 | 4091745051) | 146));
                    }
                }
            }
        }
        arr_10 [i_0] [8] = (arr_1 [i_0]);
    }
    var_23 = var_5;
    #pragma endscop
}
