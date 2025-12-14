/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 195;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [3] [3] [6] = (min((((arr_4 [i_0]) << (((((arr_1 [i_0]) + 171907368)) - 6)))), (arr_2 [6])));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 7;i_3 += 1)
                    {
                        {
                            var_20 |= ((((((arr_9 [3] [i_1] [9] [i_1] [2]) ? (arr_10 [i_3 + 3] [i_2 - 4] [6] [i_2] [1] [i_0]) : (arr_9 [i_0] [1] [i_2] [i_3 - 4] [i_0])))) ? (arr_10 [i_0] [i_1] [i_1] [i_1] [i_2] [i_0]) : (((arr_10 [i_1] [i_2 + 2] [i_1] [i_2 + 2] [i_3] [i_0]) / (arr_10 [i_3] [6] [6] [6] [6] [6])))));
                            var_21 ^= (arr_6 [i_0] [0] [i_2] [i_2]);
                            arr_11 [3] [i_1] [i_0] [i_0] [i_0] = 6461;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            {
                var_22 = max(3923419139, 10);
                var_23 = var_12;
                var_24 ^= (arr_14 [10]);
            }
        }
    }
    var_25 = var_6;
    #pragma endscop
}
