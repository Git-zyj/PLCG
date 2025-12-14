/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (max(((-186150040 ? 2056516592 : 0)), 0));
    var_18 = (-9223372036854775807 - 1);

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((186150037 ? 9223372036854775807 : 1)))));
                                arr_14 [i_0] [i_1] [i_2] [9] [i_1] [9] = ((-var_4 ? ((((~var_15) ? (4197552678204809159 || 18013848753668096) : var_8))) : 18446744073709551615));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [8] [i_2 - 1] = (((!var_4) ? (((((min(0, 44363))) < (arr_2 [i_0])))) : var_10));
                    arr_16 [i_1] [5] [7] [i_2] = -1;
                    arr_17 [i_0] [i_0] [i_1] = (~186150069);
                }
            }
        }
        var_20 = ((((((arr_9 [8] [i_0] [i_0 + 1] [i_0]) ^ var_14))) ? (var_11 & 1) : (((arr_9 [i_0] [i_0] [i_0 - 2] [i_0]) ? var_0 : (arr_9 [5] [i_0 - 2] [i_0 + 1] [i_0])))));
        var_21 ^= (max((-186150057 & -186150057), 2319363208));
    }
    #pragma endscop
}
