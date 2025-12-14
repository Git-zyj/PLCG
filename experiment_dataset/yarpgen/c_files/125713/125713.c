/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (!var_6);
                arr_5 [1] [i_0 - 1] [i_0] = (max(((((~0) ? ((-(arr_3 [i_1]))) : (arr_4 [i_0 + 1])))), ((((((arr_4 [i_1]) ? (arr_0 [i_0]) : (arr_3 [i_1 + 4])))) ? (min(var_4, var_12)) : var_3))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_17 += ((-589593386 ? 0 : ((18446744073709551615 ? 1 : ((max(-5943, 4222124650659840)))))));
                            arr_10 [i_0] [i_1] [i_2] [i_0] = 31;
                        }
                    }
                }
                var_18 += min(-27063, (min((arr_2 [i_0] [i_0]), (((!(arr_8 [i_0] [i_1])))))));
            }
        }
    }

    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 17;i_7 += 1)
                {
                    {
                        arr_22 [i_4] [0] [i_4] [i_7 - 2] [i_7] = (4829796245199791866 ? 2136183797 : var_7);
                        arr_23 [i_4] [i_4] [i_4] [i_4] = var_10;
                    }
                }
            }
        }
        var_19 = (max(var_19, ((max(var_7, (arr_12 [i_4]))))));
        arr_24 [i_4] [0] = ((((min((!18446744073709551610), ((var_7 / (arr_6 [i_4] [i_4] [19])))))) ? -1209959000 : (((!(arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [16]))))));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
    {
        var_20 += (!var_11);
        var_21 = (max(var_21, ((((arr_27 [i_8]) ? ((4222124650659817 ? (arr_14 [i_8]) : (max(11679941104730870222, -4222124650659841)))) : (((-((~(arr_17 [i_8] [0] [15])))))))))));
        arr_29 [i_8] = (arr_20 [i_8] [i_8] [i_8] [i_8] [6] [i_8]);
    }
    #pragma endscop
}
