/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(((((1 ? var_8 : 1))) - var_10))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 -= var_0;
                    arr_8 [i_0] [i_2] [i_0] = (((((0 ? 1 : 1))) >= (~7)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                var_21 += (((((~((var_14 ^ (arr_7 [i_3] [8] [i_3] [i_4])))))) ? 1 : (~480)));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_22 = (max(var_22, 6));
                    arr_17 [i_3] [11] [11] [i_3] = (arr_12 [i_3] [1] [20]);

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_23 = (((((arr_9 [i_4] [i_3]) >> (-22 + 35))) >> ((271548256 << (((arr_6 [i_3]) - 881219118))))));
                        var_24 *= -1;
                    }
                }
                var_25 -= (((-(arr_15 [i_3] [i_3] [i_4]))));
                arr_21 [i_3] [i_4] [i_4] &= 0;
                arr_22 [i_3] [i_4] = (((var_4 ? (!-116) : (~var_17))));
            }
        }
    }
    var_26 = ((var_6 >= (var_13 ^ var_14)));
    #pragma endscop
}
