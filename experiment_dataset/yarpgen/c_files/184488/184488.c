/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 39;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 += ((20 ? ((19448 ? ((var_17 ? (arr_0 [11]) : 1373741339)) : var_5)) : ((((!(((var_4 ? (arr_10 [i_0] [i_0] [i_1] [i_0]) : 3909802684008068246)))))))));
                                var_20 = (max(var_20, ((((((0 || ((min(-8, (arr_8 [i_2] [i_2] [i_2 + 3] [i_2]))))))) << ((((((min(var_7, 332328447))) ? var_5 : 8107767378260545117)) + 39)))))));
                            }
                        }
                    }
                    var_21 *= (min((((14536941389701483369 ? 8 : (1008 < var_17)))), ((-(max(3859973141, 155))))));
                    var_22 -= (max((max(3135844589404730820, (1073725440 & var_0))), ((~((0 ? 1373741339 : var_0))))));
                    arr_15 [20] [20] &= (((arr_5 [i_0] [i_0]) ^ -15648));
                    var_23 &= (((((49745 > 3859973166) < (arr_12 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) ? var_7 : (arr_2 [i_2])));
                }
            }
        }
    }
    #pragma endscop
}
