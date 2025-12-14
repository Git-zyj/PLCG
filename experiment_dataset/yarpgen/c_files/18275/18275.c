/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 -= (arr_6 [6] [i_1] [i_1]);
                    arr_7 [i_0] [i_1] &= ((var_4 ? ((((max(63, 16626))) >> (-var_17 - 2460299263))) : (((((255 / (arr_1 [i_0] [i_0])))) ? 1 : (((62 != (arr_2 [13] [i_1]))))))));
                    arr_8 [i_0] [i_1] [i_2] |= (((((((arr_4 [i_0] [i_2]) ? (arr_3 [i_0] [i_0]) : 9223372036854775807))) ? var_8 : (max(-1806792832, -62)))));
                }
            }
        }
    }
    #pragma endscop
}
