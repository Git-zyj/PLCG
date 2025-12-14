/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((max(((-2061835229945565162 ? 1 : var_3)), -26817))), ((((max(45097, var_11))) ? 224 : (min(65535, -5573855235019101954))))));

    for (int i_0 = 3; i_0 < 12;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_15 = (min(-103, ((31 / (1802492694420898032 * var_9)))));
                        var_16 = (arr_0 [i_0 - 1]);
                        var_17 &= (arr_7 [i_0 - 1] [i_1] [i_2] [i_3]);
                    }
                }
            }
        }
        var_18 = (max((~-8809192974979830481), 1));
    }
    for (int i_4 = 3; i_4 < 12;i_4 += 1) /* same iter space */
    {
        arr_13 [i_4] = (max((1820 < 9223372036854775807), ((((((arr_9 [i_4] [i_4 - 3]) ? 6 : -97))) ? (~1800) : (arr_10 [i_4])))));
        var_19 = (((((arr_11 [i_4 - 3]) ? (arr_11 [i_4 + 1]) : (arr_11 [i_4 + 2]))) - (((!(arr_8 [i_4 + 2]))))));
        arr_14 [0] |= (max(6632590915233979316, 1802492694420898032));
        arr_15 [i_4] = (min((arr_6 [i_4 - 1]), (((-9223372036854775794 * 13580022729346860898) ? 5795 : ((1 ? (arr_5 [i_4 + 1] [i_4 - 2] [i_4 - 2] [i_4 + 1]) : var_5))))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_20 = 0;
                    arr_22 [8] [i_4] [i_6] = arr_2 [i_4];
                    var_21 *= 10834562412583425522;
                    arr_23 [i_4 - 2] [i_4] [i_4 - 2] [i_4] = (((((~(min(3475500844, var_4))))) ? 8213622402832874717 : (((arr_4 [i_5 + 1] [i_5 + 1] [i_6]) ? (max(-8156061533194582805, var_5)) : (arr_4 [i_6] [12] [1])))));
                }
            }
        }
    }
    #pragma endscop
}
