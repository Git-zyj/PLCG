/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_11 & (-8044262129624778921 <= 1)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = ((864796603902247484 ? 2106456881 : -20079));
                    arr_10 [16] [i_0] [16] [i_0] = (!5823319361522241565);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    arr_20 [i_3] [i_3] = (2106456861 / -1064254987);
                    arr_21 [i_3] [i_4] [i_5] = (max((min(((max(20079, 211))), 521545209)), ((((arr_15 [i_4]) / ((10296 ? 1407152654 : -1438370160)))))));
                    var_19 = 3291733938364244;
                }
            }
        }
    }
    #pragma endscop
}
