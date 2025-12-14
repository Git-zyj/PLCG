/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= 112;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_18 -= 143;

                for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_1 - 1] [i_2] [i_2] = 0;
                    arr_8 [i_2] [1] [11] = 112;
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_1] [i_3] [1] = 4714097838780491631;
                    var_19 = 4294967295;
                }
                var_20 = (min(var_20, 144));
                arr_12 [i_0] [i_1 + 1] = 10487;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_20 [3] [i_4] [i_4] [3] = 4714097838780491631;
                                arr_21 [i_0] [i_0] [i_4] [i_4] = -2020244745;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
