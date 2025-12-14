/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (min(-8414694448508542841, -8414694448508542841));
                var_19 = ((((((41 ? (arr_4 [i_1]) : 8926626632809440339)))) * ((-(arr_1 [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_4] [i_2] [i_2] [5] [i_4] = var_12;
                                arr_13 [i_0] [i_0] [i_2] [i_4] [i_4] = (((((var_3 ? (min((arr_8 [i_0] [0] [i_0] [0] [i_0]), 8414694448508542846)) : (min((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), -8414694448508542838))))) ? (((((max(var_16, var_7))) ? ((~(arr_3 [i_0] [i_1] [10]))) : (arr_7 [i_3] [i_4])))) : ((-8414694448508542834 ? (min((-127 - 1), 9546868297525335545)) : ((((-2147483647 - 1) ? -1 : var_6)))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_20 = 1;
                                var_21 = (arr_6 [7] [i_0]);
                            }
                        }
                    }
                }
                arr_22 [i_0] |= (max(((67 ? (arr_4 [i_0]) : (arr_20 [i_0] [i_0] [i_0] [i_0] [4]))), (((~(arr_17 [i_0] [i_0] [8]))))));
            }
        }
    }
    var_22 = var_18;
    var_23 = (max(((var_8 >> (var_8 - 7447026278570117809))), ((max(2235649901, -var_13)))));
    #pragma endscop
}
