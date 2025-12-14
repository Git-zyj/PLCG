/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~var_4) ? var_3 : ((var_10 ? (var_12 ^ 549755813872) : (9029237757609430705 | var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (min((min((arr_1 [i_0]), 28)), (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
                    arr_7 [i_0] [i_1] = (((max(var_9, (~var_10))) << (((1 || (((arr_5 [i_0] [i_1] [0] [6]) || 10651)))))));
                    var_15 *= (-144115188075855868 ^ 2047);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            {
                var_16 *= (((max((arr_10 [i_4 + 2] [i_4]), -10652)) << (-10670 + 10680)));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_17 [i_4] [14] [i_4] = (~10641);
                            var_17 = (((arr_10 [i_3] [i_3]) ? (arr_9 [i_3] [16]) : (((0 > 70) ? (50502 % 63) : (max(1, (arr_8 [12] [7])))))));
                            var_18 = (min(var_18, 3165645811));
                            arr_18 [i_3] [i_4 + 2] [i_4 + 2] [i_4] = ((((((-(arr_9 [i_4] [i_3])))) ? (min(-10652, 549755813887)) : 102)) & ((((((-101 ? (arr_16 [i_3] [i_3] [i_3] [i_4 + 1] [i_3] [i_6]) : (arr_9 [i_6] [i_6]))) == var_8)))));
                            var_19 = ((((((!(~var_11))))) < -957110050693850874));
                        }
                    }
                }
                arr_19 [9] [15] [i_4] = ((min(48737, (!var_1))));
            }
        }
    }
    #pragma endscop
}
