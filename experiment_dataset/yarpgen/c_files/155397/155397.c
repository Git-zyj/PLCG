/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max(var_14, ((((var_11 % var_3) != var_12))));
    var_20 ^= ((min(1, 18272)));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            var_21 = (min(var_21, (~0)));
            var_22 ^= (((arr_3 [i_1] [i_1 - 4]) || var_2));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_23 = var_1;
                            var_24 = (min(var_24, (((!(arr_7 [i_5] [i_4 - 1]))))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 15;i_7 += 1)
                {
                    {
                        var_25 = ((~(arr_5 [i_7 - 4] [i_7 - 1])));
                        arr_20 [i_0] [i_2] [i_2] [i_0] [i_0] = var_7;
                        arr_21 [1] [i_6] [1] &= var_16;
                    }
                }
            }
        }
        arr_22 [i_0] = (var_12 < (arr_12 [i_0] [i_0] [i_0] [i_0]));
        var_26 = ((var_5 == (arr_8 [i_0])));
    }
    #pragma endscop
}
