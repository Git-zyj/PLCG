/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_16 ^= ((~((~(var_9 >> 8)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = (~var_2);
                                var_18 = (max(var_18, ((min((min(var_6, var_10)), (!var_0))))));
                                arr_12 [i_4] [i_3] [i_2] [i_1 + 1] [i_0] = ((((max(var_6, var_4))) && ((((min(var_12, var_4)) & (((var_15 ? (arr_3 [i_0] [i_0 + 3] [8]) : var_13))))))));
                                var_19 = (max(var_19, (arr_8 [i_0 + 4] [i_1] [i_1 + 2] [i_1 + 1] [i_1] [i_2 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((((3900268915 / var_5) ? (145 * 175) : var_7))) ? (+-863854612433666607) : (1 * var_12)));
    var_21 = (min((max(var_15, var_12)), var_11));
    var_22 = ((var_6 ? 85 : var_4));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 9;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 7;i_8 += 1)
                    {
                        {
                            var_23 -= ((var_6 ? (arr_17 [i_5] [1]) : (!var_15)));
                            var_24 = var_2;
                            var_25 -= ((!((min((min(var_1, var_10)), var_10)))));
                        }
                    }
                }
                arr_23 [i_5] [9] [i_6] = (((((var_5 ? ((var_15 ? var_0 : var_6)) : (arr_20 [i_5] [i_5] [i_6 - 2] [3] [i_6])))) % (((arr_11 [i_5] [i_6 - 2] [i_6 + 1] [i_6] [i_6 - 1] [i_6] [i_6 - 2]) ? 56647 : ((var_3 ? 161 : var_2))))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_26 |= ((161 <= (max(((min(var_11, var_3))), ((var_10 ? 4241112009 : var_1))))));
                            arr_31 [6] [i_10] = var_15;
                            var_27 = (max(var_27, ((((~var_5) ? (((var_11 ? (142 | var_1) : var_11))) : var_4)))));
                            var_28 = ((((255 < var_4) == var_11)) ? var_9 : (((~1223010336) ? 145 : 85)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
