/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [2] [i_1] [i_1] [i_1] = (((((-(arr_6 [i_2] [i_1] [i_1] [i_1])))) > (max(1578830956, (arr_7 [11] [i_2 + 2] [i_2 + 2])))));
                    var_11 = ((-(arr_7 [i_0] [2] [i_2])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                {
                    arr_13 [i_0] [i_3] [i_4 + 1] [i_3] = ((24 ? ((max((!var_4), (3665 <= -12)))) : (arr_11 [i_0] [22] [i_3])));
                    arr_14 [6] [i_3] [i_3] [14] &= ((((2771012567 == (-2147483647 - 1))) ? var_3 : (var_8 == 11)));

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        var_12 = (arr_0 [i_3 + 2] [i_4 + 1]);
                        arr_18 [i_3] [1] [i_4] = (((arr_4 [i_3 - 2]) <= (arr_12 [i_4] [i_4] [i_4 + 1] [i_3])));
                    }
                    for (int i_6 = 1; i_6 < 23;i_6 += 1) /* same iter space */
                    {
                        var_13 = (((max((arr_3 [i_0] [i_3 - 1] [i_3]), (arr_3 [i_0] [i_4] [i_3])))) ? 8976350580925728921 : (((~((((arr_10 [i_3]) || 1)))))));
                        arr_22 [11] [i_3] [i_3] [11] = ((-9712 & (((((-32443 ? 126 : 1578830976)) > 9)))));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_14 = (min(var_14, ((+(min((arr_1 [i_7]), var_0))))));
        var_15 = ((~var_2) || ((max(-4404303856295147105, (0 & 1)))));
    }
    var_16 = ((-(((!var_8) & var_3))));
    #pragma endscop
}
