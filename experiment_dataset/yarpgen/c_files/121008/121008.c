/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = ((~((((1 ? var_10 : var_12))))));
    var_17 = (((((((var_4 ? 50189 : var_6))) ? var_6 : (~5125591001617685158))) >= (((630 ? 4016344935 : (var_1 ^ 1))))));
    var_18 = (~var_11);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = var_2;
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((~((((arr_3 [i_0 + 1]) >= (arr_3 [i_0 - 2]))))));
                    var_20 = (arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 2]);
                }
            }
        }
    }
    #pragma endscop
}
