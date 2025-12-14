/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    {
                        var_18 = ((var_10 ? (var_6 ^ var_11) : (var_7 ^ 1)));
                        arr_10 [i_0] [i_1 + 1] [i_0] [i_2] [i_2] [i_2] &= (((~var_13) ? 10485 : (~var_6)));
                        var_19 = ((~(var_3 >= var_15)));
                    }
                }
            }
        }
        var_20 = ((var_3 - ((var_13 ? var_5 : var_2))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    {
                        var_21 = var_0;
                        var_22 *= (18426 & 219110436);
                    }
                }
            }
        }
    }
    for (int i_7 = 4; i_7 < 11;i_7 += 1)
    {
        arr_22 [i_7] [i_7] = (arr_19 [i_7 + 1]);
        var_23 = var_4;
    }
    var_24 = 1;
    #pragma endscop
}
