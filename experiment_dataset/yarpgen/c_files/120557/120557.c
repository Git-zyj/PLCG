/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = (max(var_0, (!var_2)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 = (~30);
                    arr_6 [i_2] [1] [i_0] [i_2] = 1694385144;
                    var_14 = (max(var_14, var_2));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            {
                var_15 = (arr_7 [i_3]);
                var_16 &= (max(var_1, (var_8 + 30)));
                arr_13 [i_4] [i_4] [i_3] = var_4;
            }
        }
    }
    var_17 = var_2;
    #pragma endscop
}
