/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_2] [1] [3] = 0;
                                var_15 = (arr_6 [i_0] [i_1] [i_2]);
                                var_16 = var_1;
                            }
                        }
                    }
                }
                var_17 = (max(var_17, var_3));
                arr_14 [i_0] [i_0] = 8605837672203464414;
                var_18 = (arr_5 [i_0 - 1] [i_1] [i_1] [i_0]);
            }
        }
    }
    var_19 += var_0;
    #pragma endscop
}
