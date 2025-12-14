/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_12 = (((((arr_3 [i_0] [i_1]) + (arr_0 [i_0]))) <= (((max(1, (((arr_2 [i_0]) < 126))))))));
                            var_13 |= (arr_7 [i_0 + 3] [i_1] [i_2] [i_3 + 1] [i_3] [i_2]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_14 = (arr_10 [i_0] [i_0 - 1] [i_0 - 1] [i_0]);
                            var_15 = (max(-24127, (arr_6 [i_0] [i_0 - 1] [i_0] [i_0])));
                            arr_13 [i_0] [i_4] [i_1] [i_0] = (max((arr_12 [i_0] [i_1] [i_4] [i_0 + 4] [i_5]), (arr_12 [i_1] [i_0 + 1] [i_0] [i_0 + 2] [i_5])));
                        }
                    }
                }
            }
        }
    }
    var_16 = (1 || -1);
    #pragma endscop
}
