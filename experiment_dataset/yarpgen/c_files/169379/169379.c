/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (max((arr_0 [3]), (arr_6 [i_0] [i_1 + 1] [i_0])));
                    arr_7 [2] [i_0] [3] = (min(-23663, ((6516 ? 3323328389103260393 : 61007))));
                    var_18 = ((15201741997235053896 + (max(-10289340942057685760, var_11))));
                    arr_8 [3] [3] [i_0] = ((+((((~var_14) == var_5)))));
                    var_19 = ((!(max(var_12, (arr_4 [i_0] [i_1 + 1] [i_1 + 1])))));
                }
            }
        }
    }
    var_20 ^= (~var_10);
    #pragma endscop
}
