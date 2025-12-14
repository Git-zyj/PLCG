/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = -27025;
                    var_19 = (min(var_19, (((1315 ? 27012 : (((((32767 ? 1 : 23)) <= -9))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            {
                arr_14 [i_3] [i_4 - 1] [i_4] = ((-(min(((27023 ? -1167016384392039105 : 2921977666)), (((1964079636 ? 23 : -27023)))))));
                var_20 -= (max(((354361081 ? (arr_11 [i_4] [i_4 + 1]) : 1)), (((-27024 <= (arr_11 [i_4] [i_4 - 1]))))));
                var_21 = (min(64882, -850819374329249657));
            }
        }
    }
    #pragma endscop
}
