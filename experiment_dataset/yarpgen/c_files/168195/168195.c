/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((((((min(var_10, (arr_1 [i_0] [i_0])))) ? var_6 : 9899))) ? ((((arr_3 [i_1 - 2] [i_1 - 1] [i_1]) ? 19324 : var_9))) : (max((arr_4 [i_0]), (min(5347, (arr_3 [i_1 + 1] [i_0] [i_0])))))));
                arr_6 [i_1] = (((((-((805306368 ? (arr_0 [i_0]) : 511))))) % (max(-var_5, (min((arr_1 [i_0] [i_1]), 18446744073709551615))))));
                var_12 ^= ((max(63, (arr_2 [10] [i_1]))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_13 = (min(var_13, (max(((-(max(14266718497863157499, (arr_8 [0]))))), ((min(var_11, (((arr_0 [i_2]) ? -511 : 4064220085742865038)))))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    {
                        var_14 = ((((min((var_7 * var_5), 9271390792265168695))) || (arr_14 [i_2] [i_2] [i_2])));
                        var_15 = (((arr_13 [i_3] [i_4] [i_4]) || 144));
                    }
                }
            }
        }
    }
    var_16 = -1592319073;
    #pragma endscop
}
