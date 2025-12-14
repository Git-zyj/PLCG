/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [19] [i_1 + 2] [i_1] [i_2 - 2] = (((-4294967295 ? 119 : (arr_0 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_17 = (min(((max(119, (arr_11 [i_2 + 3] [i_2 + 3])))), ((var_5 | (var_5 & 0)))));
                                var_18 ^= ((((3601862867 ? 32204 : 0))) < 3278037180);
                                arr_14 [i_2] [i_3 + 1] [i_2 + 3] [i_2] &= (61 ? 1 : (!3601862873));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 -= -1767798527;
    var_20 = ((-var_8 != (((29888 == 237) ? var_7 : (((var_10 ? 10 : 4294967295)))))));
    #pragma endscop
}
