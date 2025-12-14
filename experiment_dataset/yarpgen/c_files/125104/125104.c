/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (~3865647028385013713);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = (1 == 0);
                    arr_10 [i_2] [i_1] = var_10;
                }
            }
        }
    }
    var_22 = (((-var_0 / var_2) | (max(var_7, (((17 << (var_6 + 19767))))))));
    #pragma endscop
}
