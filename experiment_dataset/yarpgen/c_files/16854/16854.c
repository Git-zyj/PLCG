/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(1, (min(var_0, var_1))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [i_1 - 3] [i_1] = ((((-2147483639 ? (((arr_0 [i_0] [i_0]) - -10)) : 144115187002114048))) - 18446744073709551615);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = ((min((min(var_10, var_12)), (arr_5 [i_0] [i_2] [i_3]))));
                                var_15 = var_3;
                                var_16 += -var_7;
                                arr_17 [i_1] = (1 ? ((min(96, 2147483647))) : (min((~var_0), var_6)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_7;
    #pragma endscop
}
