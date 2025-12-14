/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_1));
    var_12 = (min((((-(11 < var_0)))), -3972720201451775375));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_13 = (min(((-(arr_8 [i_2 + 1] [i_2 + 1] [i_2 + 2]))), ((((arr_8 [i_2 + 2] [i_2 - 1] [i_2 + 2]) < (arr_8 [i_2 + 1] [i_2 + 2] [i_2 - 1]))))));
                                var_14 = (max(var_14, var_3));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_15 -= (((arr_4 [i_5] [i_1 + 1] [i_2 + 2]) && (((~(arr_8 [i_0] [i_0] [i_0]))))));
                        var_16 = ((-(arr_15 [i_2 + 2] [i_2 - 1] [i_1 - 2])));
                        var_17 = ((((((arr_4 [i_5] [i_1 - 2] [i_0]) ? 14676968311478711727 : (arr_6 [i_2] [i_2])))) && 63));
                        var_18 = var_4;
                    }
                    var_19 = ((((((((arr_0 [i_1]) ? (arr_13 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1 - 1] [i_1]) : (arr_15 [i_2] [i_2] [i_1])))) && ((!(arr_7 [i_1]))))) ? (-25664 && 9223372036854775807) : ((((((-4 ? -32742 : var_3))) && 28)))));
                }
            }
        }
    }
    var_20 = var_10;
    var_21 = (min(var_21, (((((~(~var_0))) < var_8)))));
    #pragma endscop
}
