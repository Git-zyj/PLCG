/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 ^= (min(39, 48889));
                    var_19 = ((((min(var_2, (arr_4 [i_0] [i_0])))) ? (max(-1, -4)) : (((var_13 ? 4294967295 : var_14)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_10 [i_0] = (arr_1 [i_0 - 1]);
                        arr_11 [1] [i_2] [i_0] = ((-1292831214 ? 9 : 779938242781314285));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_15 [i_0] [i_0] [4] = ((((((arr_9 [i_0] [i_0] [i_0] [i_4]) ? ((-1 ? var_11 : var_3)) : (40660 <= var_2)))) / ((var_12 ? 1928772924752685264 : -117))));
                        var_20 = ((((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1])))) ? (!12) : (((arr_9 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]) ? var_15 : var_5))));
                        var_21 = (((-119 + 2147483647) << (65535 - 65535)));
                    }
                    var_22 = var_6;
                }
            }
        }
    }
    var_23 = var_17;
    #pragma endscop
}
