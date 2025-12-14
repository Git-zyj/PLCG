/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_11 [i_2] [14] [i_1] [i_2] = var_13;
                        var_17 = (max(var_17, var_4));
                        arr_12 [i_1] |= ((-(arr_10 [i_0] [i_1] [i_2] [i_1])));
                        var_18 += ((((18446744073709551597 ? 4294443008 : 255)) >> (var_3 - 14)));
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 22;i_4 += 1)
                    {
                        var_19 ^= ((~(22911 == 0)));
                        arr_15 [i_2] [i_2] [i_1] [i_1] [i_2] = arr_8 [i_4 + 1] [i_4] [16] [16] [16];
                    }
                    arr_16 [i_1] [i_2] = (((((arr_14 [17] [17] [17] [17]) ? (arr_8 [i_0] [i_1] [i_1] [i_0] [i_2]) : (arr_3 [i_0]))) == (((arr_5 [i_2]) ^ var_12))));
                }
            }
        }
    }
    var_20 = ((255 ? var_14 : 18446744073709551597));
    var_21 -= (((((var_3 ? var_3 : var_6)) != (~var_13))));
    #pragma endscop
}
