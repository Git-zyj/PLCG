/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 &= (var_10 < var_8);
        var_12 = var_2;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            {
                var_13 = (!var_0);
                arr_7 [i_2] &= (((~var_2) ? (var_3 || var_4) : (18446744073709551615 | -76)));
                var_14 = (12041445478875445518 <= 6405298594834106076);
            }
        }
    }
    #pragma endscop
}
