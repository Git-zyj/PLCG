/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min((-2061321542 | var_2), var_3))) ? ((((!(!7171))))) : ((-var_9 ? (var_0 == var_15) : var_1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_3] [15] = (arr_1 [i_0] [i_3]);
                                arr_13 [i_0] [i_1] [i_2 + 1] [i_3] [i_4] = -96;
                                arr_14 [i_0] [10] [i_2] [i_1] [i_4] = ((-(arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] [i_1])));
                                var_17 = ((+(min(-9031037848133973524, (max((arr_0 [i_0]), (arr_0 [i_0])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1 - 3] [i_1] [i_5] = (((((!var_1) < (31051 == var_14)))) & (arr_19 [i_5 + 2] [i_5 + 2] [i_0] [i_5 + 4] [i_5 - 2]));
                                arr_21 [i_2] [i_2 - 2] [i_1] [i_2 - 2] = (((((~(arr_11 [i_0] [i_0] [i_1] [i_1] [i_5 - 2])))) && ((max((arr_11 [i_0] [i_1] [i_1] [i_1] [i_5 - 2]), var_12)))));
                                var_18 = 536870911;
                                arr_22 [i_0] [i_1 - 3] [i_2] [i_5] [i_1] = var_5;
                                arr_23 [i_0] [i_1] [i_1] [i_0] [i_5] [i_5] [i_1] = (((arr_1 [i_1 + 3] [i_1 - 3]) >> (((((arr_1 [i_1 + 3] [i_1 - 2]) ? (arr_1 [i_1 - 2] [i_1 - 2]) : (arr_1 [i_1 - 2] [i_1 + 2]))) - 2))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 21;i_8 += 1)
                        {
                            {
                                arr_28 [i_1] [i_8] = ((((((((arr_16 [i_1]) ? 1724938549 : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) && var_9)) ? 3279208490 : (((31578 || (arr_16 [i_1]))))));
                                var_19 = ((-29806 ? (((~var_14) % (arr_5 [i_1] [i_7] [i_8]))) : (max(((var_4 ? (arr_17 [i_1] [0] [i_2] [i_1] [i_8] [i_2]) : -1)), 1132986655131425047))));
                                arr_29 [i_0] [i_1] [i_2] [i_1] [i_8] = ((((((arr_11 [i_8] [i_2] [i_1] [i_1 - 2] [i_1 - 2]) ? var_13 : (arr_11 [i_8 - 1] [i_2] [i_1] [i_1] [i_1 - 1])))) ? ((-(arr_11 [i_7 - 3] [i_1] [i_1] [i_1 - 4] [i_1 - 4]))) : (((arr_11 [i_8] [i_8] [i_1] [i_8 + 1] [i_1 - 1]) / (arr_11 [i_7] [i_7 - 3] [i_1] [i_1] [i_1 + 3])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((((!var_1) ? var_11 : var_4)));
    #pragma endscop
}
