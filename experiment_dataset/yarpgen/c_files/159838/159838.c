/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 -= 1;
                var_21 = (((!(arr_2 [i_0]))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] [i_2] [i_0] [i_2] [i_2] [i_2] [1] = ((27 < (arr_8 [i_4 - 1] [i_1] [0] [i_1] [0])));
                                var_22 = ((!((min((arr_10 [i_0 - 1] [7] [i_0] [i_0] [7] [i_3] [i_3]), (arr_1 [i_2] [i_4 + 1]))))));
                            }
                        }
                    }
                }
                var_23 = -877932438;
            }
        }
    }
    #pragma endscop
}
