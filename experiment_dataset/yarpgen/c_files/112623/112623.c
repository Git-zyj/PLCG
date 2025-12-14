/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (((arr_4 [i_1 + 1] [i_1 + 2] [i_1 + 1]) ? (((((arr_2 [i_0]) ? 4030149667972726431 : 7)) >> (((arr_4 [i_1 - 2] [i_1 - 1] [i_1]) - 97)))) : (min(((14416594405736825170 ? 4030149667972726431 : 27)), 4030149667972726446))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [11] [i_0] [i_0] [i_0] [8] = 4030149667972726446;
                                arr_14 [i_0] [i_1 + 1] [i_2] [i_2] [14] [i_1 + 1] = 196;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_15 = 14416594405736825170;
                                var_16 = (max(var_16, ((((((arr_16 [i_1] [i_1 + 2]) ? (arr_11 [1] [i_1 - 1] [i_5] [i_1 - 1]) : var_6)) <= (((arr_8 [i_1] [i_1] [i_1] [i_1 + 2]) ? (arr_11 [i_7] [i_7] [i_7] [i_1 - 1]) : 251)))))));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [6] [i_0] [6] |= (arr_6 [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_1]);
                            }
                        }
                    }
                }
                arr_22 [i_1] = (((max((arr_4 [i_1 - 2] [i_1 - 2] [i_1]), (arr_4 [i_1 + 1] [i_1 + 1] [10])))) ? (max(1125112684159926138, 4)) : ((((arr_4 [i_1] [i_1 - 2] [13]) + (arr_4 [i_1 + 2] [i_1 + 2] [4])))));
            }
        }
    }
    var_17 = (((var_2 - var_6) / var_1));
    var_18 = (max((max(1125112684159926138, 12)), (var_7 == var_8)));
    #pragma endscop
}
