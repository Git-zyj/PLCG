/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 = (max((((max(1481692692, 0)) >> ((var_2 << (13648510004148430241 - 13648510004148430212))))), ((((-127 - 1) >= var_2)))));
                    arr_6 [i_2] [i_1] [i_0] = var_10;
                    var_14 = var_4;
                    arr_7 [i_1] [i_2] [i_2] [i_0] = var_2;
                }
            }
        }
    }
    var_15 = var_7;
    var_16 = (var_10 <= var_5);
    #pragma endscop
}
