/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106658
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_3 != (~var_11)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = ((16012589010405319585 + ((((-0 >= (arr_0 [i_0])))))));
                    var_14 = (min(((-(arr_4 [i_0] [i_1] [i_2]))), (arr_0 [i_0])));
                    var_15 *= (((((min(-3525515522460771062, (arr_2 [i_1] [i_0])))) ? (var_0 || -9414) : (min(var_10, 9636924423459481899)))) << ((((var_6 ? (arr_4 [i_2 - 1] [i_1 + 1] [i_2 - 1]) : (((-127 - 1) ? var_6 : (arr_5 [i_2]))))) - 3109079506)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 ^= ((((((arr_4 [i_2 - 2] [i_4 + 4] [i_1 - 1]) * 374549845))) ? (arr_4 [i_2 - 1] [i_4 + 2] [i_1 + 2]) : (((~(arr_12 [i_3] [i_2] [i_2 - 1] [i_2]))))));
                                var_17 = (min(var_17, (((((~-1662787448) | 9412)) >> ((((-(arr_11 [i_2] [i_1] [i_2 + 1] [i_3] [i_4] [i_3] [i_2]))) - 35))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((((((12492 ? -9413 : 1082497130975461250)) >= var_7)))) + ((var_5 ? 3920417451 : var_2))));
    #pragma endscop
}
