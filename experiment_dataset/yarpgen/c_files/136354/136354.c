/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = ((((min(0, var_12)))) ? (arr_2 [2]) : (~0));
        var_21 = (1065353216 ? ((0 ? (arr_2 [i_0]) : var_10)) : (max((arr_2 [i_0]), (arr_2 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_2] [i_2] = 12834353073116787896;
                    var_22 ^= ((~((var_1 ? 2147483638 : (arr_7 [i_1 - 2])))));
                }
            }
        }
    }
    #pragma endscop
}
