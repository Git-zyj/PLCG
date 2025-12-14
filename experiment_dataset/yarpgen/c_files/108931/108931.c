/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (min(((((var_4 ? (arr_6 [6] [i_1 + 1] [i_2]) : 2800569498)) * ((((arr_4 [i_2] [i_1] [i_0]) / var_4))))), (min((((var_9 ? (arr_8 [i_0] [i_0]) : var_0))), 0))));
                    arr_10 [i_0] = ((+(((arr_6 [i_1 + 2] [i_1 - 1] [i_2]) ? (arr_6 [i_1 - 2] [i_0] [i_2]) : (arr_6 [i_1 + 1] [i_1] [i_2])))));
                    arr_11 [6] |= ((~(max((944906163518038409 | var_0), ((var_10 ? -3265057999618668101 : 1))))));
                }
            }
        }
    }
    var_11 = ((var_10 ? (!var_8) : ((24 ? -82 : -2929343511888725137))));
    var_12 ^= var_9;
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_21 [i_3 - 2] [i_4] [i_5] [i_3] = (((arr_15 [i_3 + 1] [i_3 - 2] [i_3 - 1]) ? (((var_0 ? (arr_15 [i_3 - 3] [i_3 - 2] [1]) : (arr_15 [19] [i_3 - 1] [3])))) : (min(var_8, (arr_15 [i_3] [i_3 - 2] [i_3 + 1])))));
                            var_13 = var_7;
                            arr_22 [i_3] = ((~((((arr_13 [i_3] [i_3 - 2]) > (arr_14 [i_3] [i_4]))))));
                            arr_23 [i_3 + 1] [i_3] [19] [i_6] = (var_4 * -var_5);
                            var_14 &= ((((((((0 ? var_7 : var_2))) ? (!var_10) : (var_7 || var_4)))) ? 6 : var_8));
                        }
                    }
                }
                var_15 += 3265057999618668104;
            }
        }
    }
    var_16 = var_0;
    #pragma endscop
}
