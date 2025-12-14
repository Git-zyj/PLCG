/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((+(((!var_14) ? (min(7956590209394449805, (arr_1 [i_0]))) : (((~(arr_3 [i_0] [i_0])))))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 -= (-(((arr_3 [i_1 - 1] [i_1 + 1]) & (arr_3 [i_1 - 2] [i_1 - 3]))));
                                var_22 = ((!((((~var_2) ? ((211598013614008013 & (arr_10 [i_4] [i_1] [i_2] [i_1] [i_0]))) : (((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_11 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0]) : (arr_10 [i_1] [i_1] [i_2] [i_1] [i_2]))))))));
                                var_23 -= (+((((arr_3 [i_1 + 1] [i_4 + 3]) == (arr_3 [i_1 + 1] [i_4 + 1])))));
                            }
                        }
                    }
                }
                var_24 = (((((var_17 ? (arr_6 [i_1]) : -499280100))) ? var_0 : (var_6 + var_16)));
                var_25 *= var_10;
                var_26 = (max(var_26, ((~(max(((6245444307792693989 ? -1742509136 : (arr_1 [i_1]))), (arr_4 [i_0])))))));
            }
        }
    }
    var_27 = var_2;
    var_28 = ((((max(var_16, var_1)) % (var_15 % var_1))));
    #pragma endscop
}
