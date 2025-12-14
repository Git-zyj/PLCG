/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = max((arr_3 [i_0]), (((!var_1) ? (((arr_4 [i_1 + 4]) ? var_1 : (arr_2 [i_0]))) : ((min(1566432425, 3660065198))))));
                var_20 = (((((max(var_7, -78))) != ((((arr_0 [i_0]) == (arr_1 [i_0])))))));
            }
        }
    }
    var_21 -= (((var_15 - ((var_4 ? 3660065198 : -53)))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_22 = var_2;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 8;i_4 += 1)
            {
                {
                    arr_14 [9] [i_3] [i_3 - 1] [4] = ((-(arr_7 [i_4 - 4] [i_4 - 4] [i_4 + 1])));
                    var_23 = (((((-15479 ? (arr_5 [i_2]) : (arr_0 [10])))) ? ((109 >> (var_7 - 40))) : -69));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 6;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_4] [i_2] [i_5] = (((3792775804 ? (arr_20 [i_2] [i_3] [7] [1] [i_5 + 2] [6] [i_5]) : (arr_4 [i_2]))));
                                var_24 = (arr_3 [i_3 - 1]);
                            }
                        }
                    }
                    var_25 = ((-78 ? var_8 : 108));
                    var_26 = (arr_13 [i_2] [8] [i_4 - 2] [i_4 - 1]);
                }
            }
        }
    }
    var_27 &= var_16;
    #pragma endscop
}
