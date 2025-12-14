/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [1] = (min(var_3, 1));
                    var_19 -= 92;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 -= (+(min((arr_4 [i_0 + 1] [i_2 + 1]), (min((arr_10 [i_4] [i_0] [i_0] [i_0]), 3355452228403496356)))));
                                var_21 = (min(var_21, ((max((max((!var_13), (min((arr_12 [i_0] [i_1] [i_2] [i_3] [12] [i_0]), (arr_14 [12] [i_3] [i_2 + 1] [10] [i_0]))))), (((~((((arr_10 [i_0] [i_1] [i_0] [i_4]) != 11)))))))))));
                                arr_15 [i_0] [i_0] [i_0] [i_2] [i_0 + 1] [i_2] [7] = (min((11124227112759173902 * 1), var_13));
                                var_22 = ((+(max((arr_6 [i_0] [i_0] [i_4]), (max(1, 42))))));
                            }
                        }
                    }
                    var_23 = ((-36 ? 143 : 48));
                }
            }
        }
    }
    var_24 = ((((min(65535, var_16))) ? var_1 : var_7));
    #pragma endscop
}
