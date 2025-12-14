/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, 926850961));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (min(var_4, (max((max(var_11, -7125140249787378232)), ((861315911 ? var_8 : (arr_3 [i_1])))))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_15 ^= (arr_5 [i_0]);
                            var_16 += (min(var_7, (((-22652 == ((max(-22652, 22670))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
