/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((((var_0 ? (var_5 != var_4) : (((arr_0 [i_1]) ? var_1 : var_2)))) & ((~((min(var_2, (arr_2 [i_0] [0]))))))));
                var_14 -= (max((((arr_3 [i_0 + 2] [i_0 + 2]) ? -9920 : var_3)), ((max((((var_11 ? var_11 : (arr_4 [i_1] [i_1])))), (max(var_4, var_11)))))));
                arr_6 [i_0] = (((~var_2) ^ -var_6));
            }
        }
    }
    var_15 = var_10;
    #pragma endscop
}
