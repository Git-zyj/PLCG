/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 = min(var_0, (((~(arr_3 [i_0])))));
        var_11 = ((((min(var_5, (arr_2 [i_0]))) != ((max((arr_3 [i_0]), (arr_0 [i_0] [i_0])))))));
        arr_4 [i_0] [2] |= ((-((448 ? 2147483647 : 2147483647))));
        var_12 = (min(var_12, (arr_0 [20] [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_9 [i_1] &= 1134907106097364992;
        var_13 ^= (((min((arr_7 [i_1] [i_1]), 2147483647))) ? (max(2147483619, (arr_6 [i_1] [i_1]))) : ((min((arr_7 [i_1] [i_1]), (arr_7 [i_1] [i_1])))));
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            {

                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    var_14 = (max(var_14, ((max(((2147483647 ? -2147483647 : 64318)), -2147483647)))));
                    arr_18 [i_3] [i_3 - 1] [i_2] [i_3] = var_5;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_21 [i_3] [i_3] = (((arr_20 [i_3] [i_3] [i_5] [i_5]) ? (((-2147483647 + 2147483647) << (var_0 - 2480171406933770644))) : (arr_11 [i_3 + 1])));

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_15 = ((-27398 ? -268435456 : (((arr_19 [1] [i_3 - 1] [i_5]) ? 0 : var_8))));
                        var_16 = (~var_1);
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_27 [i_2] [i_2] [i_2] [i_3] = (((-2147483647 - 1) ? 2147483647 : 14));
                        arr_28 [i_3] = var_3;
                        arr_29 [i_7] [i_3] [i_3] [i_2] = ((var_3 ? var_4 : -2147483647));
                        var_17 = (max(var_17, ((-(arr_14 [i_7])))));
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        arr_33 [i_2] [i_3] = (((-8 ? 33292288 : 15883339811775468036)));
                        var_18 = ((24 ? 2 : ((2147483647 ? (arr_22 [i_2] [i_2]) : var_9))));
                        arr_34 [i_2] [16] [i_3] [i_2] = (((0 + 0) ? 2147483627 : (arr_11 [i_2 - 2])));
                        arr_35 [i_2 + 3] [i_3 - 1] [i_5] [i_5] [i_8] [i_3] = ((1984 ? -2147483647 : 2071461984));
                        arr_36 [i_3] = ((12466 == (arr_24 [i_2] [i_2] [i_3] [i_3] [i_5] [i_8])));
                    }
                }
                arr_37 [i_3] [i_3] [i_2] = (arr_32 [i_2] [15]);
            }
        }
    }
    #pragma endscop
}
