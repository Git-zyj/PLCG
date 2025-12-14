/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_11 [i_3] [i_3] |= (((min(var_7, (~4559762991922274782))) + ((max((arr_7 [18] [18]), (((4545437178653149627 >= (arr_3 [6] [i_1] [6])))))))));
                                var_15 = (max(var_15, ((((((-(min(1, var_10))))) / (max((arr_6 [5] [i_0] [i_0] [i_0 - 1]), (arr_6 [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 1]))))))));
                            }
                        }
                    }
                }
                arr_12 [6] [1] = ((-(((arr_9 [i_0 - 1] [i_0 - 1] [16] [i_0] [i_0]) / (((arr_8 [19] [i_0] [i_1] [20] [i_1]) ? (arr_7 [i_0] [i_1]) : (arr_4 [5] [11] [i_1])))))));
            }
        }
    }
    var_16 = -var_7;
    #pragma endscop
}
