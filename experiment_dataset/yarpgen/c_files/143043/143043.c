/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_1;
        var_11 = 1;
        var_12 = ((18446744073709551612 * (~18446744073709551612)));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_13 = var_2;
        var_14 &= var_8;
        var_15 = (-32767 - 1);
        var_16 = ((((((-14023 ? 0 : 18446744073709551594)) ? 14027 : ((3 ? -883627733969363114 : var_2))))));
    }
    var_17 = 14027;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_18 = ((((((-(arr_6 [i_2])))) ? var_7 : 18446744073709551612)));
                arr_12 [i_3] [i_3] [16] = ((-(max((~2147483637), ((~(arr_10 [i_3] [i_3] [11])))))));
                arr_13 [i_2] [i_3] [i_3] = (max(130252456073964652, ((((var_2 + 9223372036854775807) << (255 - 255))))));
            }
        }
    }
    #pragma endscop
}
