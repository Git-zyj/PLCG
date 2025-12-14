/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = ((~(var_6 - var_11)));
                    arr_12 [i_2] [i_1] [i_1] [i_1] = var_5;
                    arr_13 [i_2] [i_1] [i_0] [i_2] = (var_1 + var_3);
                    arr_14 [i_0] [i_1] [i_2] = ((((~(max(var_3, var_10)))) * (9223372036854775792 <= 36033)));
                    arr_15 [i_0] [i_0] [i_2] [i_0] = (((1 + 29483) >= -var_5));
                }
            }
        }
    }
    #pragma endscop
}
