/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 16502173226616169842;

    for (int i_0 = 2; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 + 2] [2] = ((-13516 ^ ((((1 ? var_7 : (arr_0 [3]))) ^ var_6))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 += var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 = (max(((max((((13516 < (arr_0 [i_0])))), var_12))), (min((max((arr_4 [i_1] [i_1]), (arr_7 [i_0 + 1] [i_0 + 1] [14] [14]))), (max((arr_10 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_4]), var_16))))));
                                var_22 = (min(((((((~(arr_6 [i_0] [3] [i_2])))) || var_8))), ((~(arr_0 [i_0 + 2])))));
                                var_23 = ((((max((((arr_11 [i_2]) | var_1)), ((((arr_6 [i_0] [i_2 - 1] [i_3]) | var_12)))))) ? (arr_11 [i_2]) : ((((((127 / (arr_1 [17])))) || 1)))));
                            }
                        }
                    }
                    var_24 ^= (min(((min(((var_9 && (arr_7 [14] [i_2] [2] [17]))), 0))), var_4));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_25 = (min(((((var_17 + var_13) ? var_17 : var_8))), (((((var_14 ? var_11 : var_2))) ? (max((arr_8 [i_0] [1] [i_2] [1]), var_2)) : var_4))));
                                arr_20 [i_2] [i_2] [i_2] [i_1] = var_2;
                            }
                        }
                    }
                }
            }
        }
        arr_21 [6] = (arr_19 [i_0]);
    }
    for (int i_7 = 2; i_7 < 16;i_7 += 1) /* same iter space */
    {
        var_26 = ((min(((min((arr_17 [i_7] [i_7] [i_7 - 2] [i_7] [1] [i_7 + 1]), var_0))), var_7)));
        var_27 = ((1 ? 2113714775 : 1));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 14;i_9 += 1)
            {
                {
                    arr_31 [i_8] [i_8] [i_8] [i_8] = (((var_8 | ((1 >> (-32742 + 32751))))));
                    var_28 ^= max((min((min((arr_16 [i_9 - 1]), 32742)), 1)), -32742);
                }
            }
        }
    }
    #pragma endscop
}
