/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((max(1, ((1 ? (1 < 1) : var_14)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] = (1 != 1);
                    arr_11 [i_0 - 2] [i_0] = -1;
                    var_19 = ((var_17 ? 152 : (((arr_2 [i_0] [i_0 + 4] [i_0 + 4]) - 24272))));
                    arr_12 [i_0] [i_0] [i_2] [i_0] = ((133 + (1 + 1942691344)));
                }
            }
        }
    }
    var_20 = ((((var_15 ? (~var_15) : -246)) * 1));
    #pragma endscop
}
