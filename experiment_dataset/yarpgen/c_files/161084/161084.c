/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 6;i_0 += 1)
    {
        var_18 -= (((arr_0 [i_0] [i_0]) || ((max(5994939730794219110, 11144706489480157282)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 ^= (max((max(1, 1)), 1));
                    var_20 = var_16;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_2, (min((!var_8), (-2147483647 - 1)))));
                                var_22 = (min(1385420832, var_5));
                                arr_16 [i_0] = ((~(arr_11 [i_0] [i_1])));
                            }
                        }
                    }
                }
            }
        }
        arr_17 [4] [i_0] |= ((((((((arr_13 [i_0 - 3] [9] [i_0]) + var_15)) ^ ((min(111, 823869036)))))) ? 2909546463 : 1));
        var_23 *= (min((max(7302037584229394319, (arr_2 [8]))), ((((arr_2 [8]) / 2588775064)))));
    }
    var_24 = (var_4 >= var_4);
    #pragma endscop
}
