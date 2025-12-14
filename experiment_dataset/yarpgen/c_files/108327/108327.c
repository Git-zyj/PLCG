/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (-1367629129 | (arr_0 [i_0]));
        var_17 = ((~((max(65535, 20)))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_18 = (max(var_18, (((((min((arr_4 [i_1]), var_9))) ? (arr_3 [i_1 - 1]) : ((var_14 ? var_14 : 20)))))));
        arr_5 [i_1] = (var_2 * (arr_4 [10]));
        var_19 = (!65511);
        arr_6 [i_1] = (((arr_4 [i_1 + 2]) <= ((((8394182030524790025 ? 950 : var_6))))));
        var_20 = (arr_3 [i_1]);
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_21 = (arr_15 [i_4] [9] [19]);
                    arr_16 [i_2] [i_3] [i_4] [i_3] = (arr_7 [i_2] [i_4]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_22 *= (((max(var_0, (max(2669884294, var_0))))) ? 27063 : var_11);
                                var_23 = var_4;
                                arr_23 [i_4] [2] [i_4] [i_4] [i_2] &= (arr_22 [2] [1]);
                                var_24 += max(-13, 1367629129);
                                var_25 = ((~((21 / ((max(-34, 606)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (var_7 || -9223372036854775784);
    #pragma endscop
}
