/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_13 = ((min(4294967276, ((-7219293781851246810 ? var_10 : var_8)))) << ((21682 ? (arr_6 [i_0 - 1] [i_0 + 2] [i_0 + 3] [i_0 + 2]) : ((min((arr_4 [i_0 + 1] [i_0 + 1]), var_2))))));
                            arr_10 [i_0] [2] = ((-var_10 + (((-6973 ? var_2 : -1224475829)))));
                        }
                    }
                }
                var_14 = (min(var_14, ((((((arr_4 [i_0 + 2] [i_0 + 2]) && (arr_4 [i_0 - 1] [i_1]))) || (((-72 ? (arr_6 [i_0 + 1] [i_0] [20] [i_1]) : (arr_4 [i_1] [i_0])))))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_15 = arr_2 [i_0];
                                arr_17 [i_0] [i_6] [i_5] [i_0] [9] [i_0] [i_0] = (max(-var_1, (arr_4 [i_0 + 2] [i_0 + 3])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (max(var_16, var_0));
    #pragma endscop
}
