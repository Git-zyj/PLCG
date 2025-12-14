/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(var_1, (~var_2)))) ? 1753407536 : 209401509));
    var_16 = (((~11969053090480158113) & (((~11969053090480158111) ^ (max(var_5, 1841146364244857224))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [8] [1] = ((~(~198)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [1] [8] [i_0] = ((255 || (!43989)));
                            arr_12 [12] [i_1] [i_3] [i_3] |= (6477690983229393499 - -7393639633191903036);
                        }
                    }
                }
                var_17 = (min((((((~(arr_2 [4])))) ? ((124 ? (arr_2 [i_0]) : -7393639633191903037)) : 255)), 121));
            }
        }
    }
    #pragma endscop
}
