/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 = ((((-(1770020107 + -4957041688503482665)))) ? -var_15 : 71);
                            var_20 = 1831398272;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_1] [i_4] [i_0] [i_6] [i_6] = var_2;
                                var_21 = ((!(((var_0 ? (arr_9 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0]) : (arr_9 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            var_22 = ((!(arr_21 [i_7 - 1] [i_7])));
                            arr_28 [i_0 - 1] [i_1] [i_0] [i_1] = (arr_6 [i_8] [i_1] [i_0 - 1]);
                            var_23 = ((((((arr_23 [i_0] [i_0 - 1] [i_7 + 2]) ? ((((arr_23 [i_0] [i_7] [i_8]) ? 3118411584 : (arr_2 [i_0 - 1])))) : ((~(arr_14 [i_8] [i_7] [i_1] [i_1] [i_0])))))) ? (~-1213005893) : (-1831398282 / var_8)));
                            var_24 = (((~(arr_6 [i_0 - 1] [i_7 - 2] [i_7 - 2]))));
                        }
                    }
                }
            }
        }
    }
    var_25 = ((var_15 << (var_0 - 778953281)));
    var_26 = (-(((!(((1 ? -97 : 1605930403)))))));
    #pragma endscop
}
