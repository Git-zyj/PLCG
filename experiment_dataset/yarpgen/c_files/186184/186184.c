/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_12 += (((8040744260296566416 ? 0 : var_6)));
                                var_13 = (max(((2910287601939608797 ? (arr_8 [i_0 - 2] [i_0 + 4] [i_0 + 2] [i_0 + 3]) : (arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 3] [i_0 - 1]))), ((2528 - (arr_8 [i_0 + 2] [i_0 + 3] [i_0 + 2] [i_0 + 3])))));
                            }
                        }
                    }
                }
                var_14 = (max(((((((-1418732682 - (arr_2 [i_1])))) != (min(0, 1254008333))))), (max((var_5 ^ 1), (arr_0 [i_0])))));
            }
        }
    }
    #pragma endscop
}
