/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(1, ((~(~1)))));
    var_12 = (max(var_12, (max(((var_9 ? (min(-9223372036854775783, var_8)) : 9223372036854775778)), var_10))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((max((1 / 5018037056950166816), -46)))));
                    arr_8 [i_0] [6] = (((~var_2) ? -9223372036854775783 : (+-0)));
                    var_14 += ((max(((var_10 ? var_3 : var_4)), -var_2)));
                    var_15 = var_4;
                }
            }
        }
    }
    #pragma endscop
}
