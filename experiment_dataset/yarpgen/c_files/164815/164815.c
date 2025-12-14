/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_1] = var_14;
                arr_7 [1] [1] = ((((max((!1), (arr_2 [10])))) <= ((max(67, (arr_2 [i_0 - 1]))))));
            }
        }
    }
    var_21 = (((var_4 && var_8) && var_0));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_21 [4] [12] = (!3502291758032203492);
                                arr_22 [i_2] [i_3] [i_4] [i_5] [i_6] = (~var_16);
                                arr_23 [10] [i_3 - 2] [i_3] [i_3 - 2] [i_5] [i_6 + 2] [4] = var_14;
                                arr_24 [i_4] [3] [i_4] [i_5] [i_6] = (((max(((var_0 > (arr_12 [15] [7] [i_4]))), (!12050889310102713059))) ? (max(((18446744073709551590 ? var_2 : (arr_11 [12] [i_3]))), ((-(arr_17 [i_2]))))) : (((var_12 ? (arr_14 [i_6 + 3] [i_6 + 3] [17] [i_6 - 1] [i_6 + 1] [i_6 + 3]) : 33554432)))));
                                arr_25 [i_4] [5] [i_4] [5] = (min(((-3502291758032203492 ? var_18 : ((-715528312324775671 ? 64 : 7401303806078778418)))), (arr_11 [i_2] [i_2])));
                            }
                        }
                    }
                }
                arr_26 [13] = (arr_10 [11] [11] [11]);
            }
        }
    }
    var_22 = var_5;
    #pragma endscop
}
