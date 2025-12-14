/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 = (min((((~var_14) % (16087765103377591096 | var_5))), ((((1 ? 1 : var_12)) << (var_7 + 1120468116)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((~(arr_4 [i_0] [i_1 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [3] [8] [i_0] = (max((min((arr_6 [i_0] [i_1 + 1] [i_3] [i_4]), (994853830 | 1015500405))), 1764876508));
                                var_17 = (min((min(var_2, (~3300113465))), (max((arr_3 [i_0] [i_1 + 1]), (arr_6 [i_0] [i_0] [i_3 + 1] [i_1 + 2])))));
                                var_18 ^= (((~(arr_3 [12] [i_0]))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_0] [i_0] = ((((1 != (arr_6 [i_0] [i_1] [i_2 - 1] [i_1 + 1]))) ? (arr_6 [i_0] [i_1] [i_2 + 1] [i_1 + 2]) : (arr_6 [i_1 + 2] [i_1 - 1] [i_2 - 2] [i_1 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
