/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [8] [i_0] = (arr_2 [i_0]);
        arr_4 [i_0] [i_0] = var_6;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = (+((((arr_6 [i_0] [i_1]) < var_12))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = (arr_1 [i_4]);
                                var_15 = var_6;
                            }
                        }
                    }
                    var_16 = 7;
                }
            }
        }
        var_17 = (~13132963347204831377);
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        arr_17 [i_5] = var_0;
        arr_18 [i_5] [i_5] = 255;
        var_18 = (min((min(((80 ? (arr_7 [i_5] [i_5] [i_5]) : 167)), var_6)), (((arr_11 [i_5 - 1] [i_5] [i_5] [i_5 + 1] [i_5]) + (arr_11 [i_5 + 1] [i_5] [0] [i_5 + 1] [i_5])))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_19 = (!1748897088);
        arr_21 [i_6] [i_6] = (((arr_1 [i_6]) + var_3));
        var_20 = 214639588;
    }
    var_21 |= var_4;
    var_22 &= var_4;
    var_23 -= 18446744073709551615;
    #pragma endscop
}
