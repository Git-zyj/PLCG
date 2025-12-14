/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_2;

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_11 = (min(1840115187, -123));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 ^= (arr_10 [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_2] [i_2] [i_0] [i_0] = (arr_11 [i_0] [i_0] [i_0] [i_3]);
                                var_13 = (max(var_13, var_7));
                            }
                        }
                    }
                }
            }
        }
        arr_17 [i_0] = (min((arr_0 [i_0]), -5288));
        arr_18 [i_0] [i_0 - 1] = (((((((arr_13 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1]) ? (arr_12 [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1] [19] [i_0 + 1]) : var_4)))) ? (arr_5 [i_0 - 1]) : (((arr_10 [i_0 + 1] [i_0] [i_0 + 1]) + ((min(4294967267, 133169152)))))));
    }
    var_14 = (max(var_14, var_1));
    #pragma endscop
}
