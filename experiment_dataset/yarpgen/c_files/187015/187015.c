/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = arr_0 [i_1 + 2];
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_11 ^= (((-1 + 1149442426882954890) >> (((min((min((arr_0 [i_0]), 1149442426882954890)), (min(1149442426882954890, -1149442426882954891)))) + 1149442426882954923))));
                            var_12 ^= (arr_2 [i_0]);
                            arr_10 [i_0] [i_1] [i_2 + 2] = ((!((-1149442426882954894 <= (arr_9 [8] [12] [i_2] [8] [8] [8])))));
                        }
                    }
                }
            }
        }
    }
    var_13 ^= (((min(var_8, var_5))) ? (min(118661993, var_8)) : var_6);
    #pragma endscop
}
