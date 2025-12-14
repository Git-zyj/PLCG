/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_11 = (574 ? (arr_5 [i_0 + 3]) : (((arr_3 [i_1 - 1] [i_1 - 1]) ? (arr_3 [i_1 - 2] [i_1 - 1]) : (((arr_5 [8]) ? var_1 : var_3)))));
                arr_6 [i_1 - 2] [i_0 + 3] |= (((arr_4 [i_0 - 1]) && (((+((((arr_3 [i_1 - 3] [i_0]) && (arr_3 [1] [i_1])))))))));

                for (int i_2 = 3; i_2 < 6;i_2 += 1)
                {
                    var_12 = (min(var_12, (((-47 ? (arr_5 [i_0 - 4]) : (arr_8 [i_1 - 3] [i_0 - 4]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 6;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_3] [i_2 - 1] [i_1] [i_0] = ((~((var_5 ? (arr_3 [6] [i_1 - 2]) : -1331263179))));
                                arr_17 [i_0] [i_1] [i_0] [i_2 - 2] [2] [1] [i_4] |= ((((((arr_11 [i_2 + 3] [i_1] [9] [i_2 + 4] [i_3 + 2] [9]) ? (arr_11 [0] [1] [0] [i_2 - 1] [i_3 + 2] [i_3]) : (arr_11 [i_4] [4] [i_2] [i_2 - 1] [i_3 + 4] [i_0])))) ? (arr_5 [i_1 - 3]) : (((arr_15 [i_0] [i_0] [0]) << ((((1331263173 ? 1331263201 : 1331263175)) - 1331263188))))));
                                var_13 *= 1331263180;
                                var_14 -= 5086;
                                var_15 = 18446744073709551606;
                            }
                        }
                    }
                    var_16 = 1;
                }
            }
        }
    }
    var_17 = var_2;
    #pragma endscop
}
