/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((max(36748, (min(36759, 36759)))));
    var_13 = var_3;
    var_14 = (var_11 || var_8);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 -= (!var_9);
                    arr_7 [i_0] [i_0] = ((!(28777 && 28776)));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = (-127 - 1);
                                var_17 = (max(var_17, ((max((((36726 ? 36748 : (-127 - 1)))), ((((((arr_5 [i_4] [i_2] [i_4]) ? var_9 : var_4))) ? (max(var_2, var_0)) : ((var_11 ? var_8 : var_2)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 ^= 0;
    #pragma endscop
}
