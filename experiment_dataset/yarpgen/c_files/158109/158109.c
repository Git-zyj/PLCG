/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((165 ? 13489587599776482400 : 103));
    var_16 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2 - 2] = ((+(((arr_4 [i_0 + 2]) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 - 3])))));
                    var_17 = (((((~(arr_1 [i_0] [i_0])))) ? (((-((min(var_8, (arr_0 [i_2]))))))) : (((arr_6 [i_0 - 1]) - (arr_4 [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
