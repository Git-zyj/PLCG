/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= -var_6;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0 - 4] [i_0 - 4] [i_2] = min(((((min((arr_5 [1] [i_1] [9]), (arr_5 [i_1] [2] [i_1]))) >= (1 >= var_6)))), (((((2199023255040 | (arr_1 [i_1 + 3])))) ? ((~(arr_5 [i_0] [i_1] [i_2]))) : (((arr_5 [i_0 - 4] [2] [i_2]) - (arr_0 [3]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 6;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_3] = -87;
                                arr_14 [i_0 - 2] [i_1] [i_2] [i_3] [i_3] [i_4] = (!-18870);
                            }
                        }
                    }
                    arr_15 [i_2] [i_1] = ((-(min((arr_5 [i_0] [i_0 - 3] [i_0 - 2]), var_10))));
                    var_14 = (max(70, -70));
                }
            }
        }
    }
    #pragma endscop
}
