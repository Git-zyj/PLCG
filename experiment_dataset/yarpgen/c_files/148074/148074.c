/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_6);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_2] [i_2] = (i_2 % 2 == zero) ? ((((((((arr_4 [i_0] [i_0] [i_2]) + 2147483647)) >> (((arr_2 [i_2] [i_1] [i_0]) + 5443)))) % var_4))) : ((((((((((arr_4 [i_0] [i_0] [i_2]) - 2147483647)) + 2147483647)) >> (((arr_2 [i_2] [i_1] [i_0]) + 5443)))) % var_4)));
                    arr_8 [i_0] [i_1] [i_2] [i_1] = ((+(((((((arr_1 [i_0]) ? 116 : (arr_6 [14] [1] [i_0])))) < (var_3 % 5390819345275270065))))));
                }
            }
        }
    }
    var_21 *= ((+(((11247 & 116) ? var_5 : var_10))));
    var_22 *= (var_2 < 1);
    #pragma endscop
}
