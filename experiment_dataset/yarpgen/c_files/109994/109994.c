/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= 0;
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((((((((-13 ^ var_8) + 2147483647)) << (!var_6))) - (max((max(23318, -13)), (((!(arr_1 [i_0])))))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_14 = (!32767);

                            for (int i_4 = 1; i_4 < 14;i_4 += 1)
                            {
                                arr_12 [i_0] [i_1 + 1] [i_2 + 2] [i_1] [i_4 + 2] [i_4 + 2] = ((((min(1, (arr_7 [i_2 + 2] [i_4 + 2])))) ? (((16758569103831021533 >= (var_6 / 3456)))) : 0));
                                var_15 = min(531333879, -16);
                            }
                            var_16 = var_3;
                        }
                    }
                }
                var_17 = ((!(arr_11 [i_0] [i_0] [i_0] [9] [i_1 - 2])));
                arr_13 [2] &= (1 * var_3);
            }
        }
    }
    var_18 = 207;
    #pragma endscop
}
