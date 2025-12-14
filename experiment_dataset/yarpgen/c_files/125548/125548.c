/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_7);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 &= (((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) ^ (arr_0 [i_0] [i_0])));
        arr_2 [i_0] = ((-((-(-127 - 1)))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            var_13 *= (((5054332021023917933 | (arr_4 [i_0]))));
            var_14 = (min(var_14, (((24140 ? (var_0 * var_2) : (arr_4 [i_0]))))));
            var_15 = -var_8;
        }
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_16 = ((max(24140, ((-24140 ? 28 : -24159)))));
            var_17 = (max(var_17, (((((((arr_3 [i_2 + 1] [i_2 + 2] [i_2 + 1]) != (arr_3 [i_2 + 1] [i_2] [i_2 + 1])))) + (((arr_4 [i_0]) ? (0 != var_1) : (~var_3))))))));
        }
        arr_7 [11] = max(-125, 12067443895704713764);
    }
    #pragma endscop
}
