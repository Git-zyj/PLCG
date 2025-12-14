/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [i_2] [i_2] [i_2] = ((arr_10 [i_1] [i_1] [i_2]) ? var_8 : var_4);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_18 [i_4 - 1] [i_1] [i_1] [i_3] [i_4] = -1;
                                var_13 = (((((((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) + -var_0)) + 2147483647)) << ((((var_2 ? ((-18 ? (arr_0 [i_0]) : 65520)) : (((arr_10 [i_1] [i_1] [i_1]) ? var_12 : var_5)))) - 35))));
                                var_14 = ((939970856 + (max(14727272871734379039, (arr_0 [10])))));
                                arr_19 [i_4] [i_4 - 1] [i_3] [5] [i_1] [i_0] = (arr_8 [i_4]);
                                arr_20 [i_4 - 1] [12] [12] [11] [i_0] = ((-(max(3719471201975172570, 88))));
                            }
                        }
                    }
                    var_15 = (((~(~939970851))));
                }
            }
        }
    }
    var_16 = 3719471201975172576;
    var_17 = ((3515304201 ? 64 : 1756536389));
    var_18 = (max((((var_11 == var_4) && (12416596895483076619 & 28))), ((((var_2 ? var_12 : var_12)) == var_1))));
    var_19 = (3515304201 & 56467);
    #pragma endscop
}
