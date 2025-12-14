/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (min(var_16, (arr_2 [3])))));
                                var_20 = ((((((~26) ? var_10 : ((min(var_12, 80)))))) > 4294967295));
                                var_21 = (max(var_21, (((1201998249 ? 7122800897029794002 : 11144066539030945084)))));
                                var_22 = (max(var_22, ((min(((((max(var_18, 576460752303423487))) ? (arr_0 [i_0]) : (min(4008, (arr_11 [i_0] [i_0] [i_4] [i_3 - 1] [i_4] [i_1]))))), var_6)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_23 = ((((((min(7302677534678606531, 18446744073709551603))))) % (min(7302677534678606517, (arr_13 [i_5] [1] [i_2] [i_5] [i_2] [i_6 + 3])))));
                                var_24 = ((var_4 << (((((var_16 ? var_12 : 1000242179))) / (min(-8, 9223372019674906624))))));
                            }
                        }
                    }
                    arr_19 [7] [i_1] [2] [i_1] = ((min((min(-29, var_18)), ((((arr_13 [i_1] [i_0 - 2] [i_2] [i_0 - 2] [i_1] [i_2]) + var_14))))));
                    var_25 = (((min((((var_12 ? var_3 : (arr_2 [i_0 - 1])))), -7302677534678606529)) << ((max((arr_0 [i_1 - 3]), ((var_4 || (arr_7 [i_2] [i_1] [i_2]))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_30 [i_7] [i_8] [i_9] [i_7] = (arr_17 [11]);
                            arr_31 [i_8] = ((0 && (((!var_12) || (arr_2 [i_9])))));
                            arr_32 [i_7] [i_8] [4] [4] = var_9;
                        }
                    }
                }
                arr_33 [i_7] [i_8] [1] = var_18;
            }
        }
    }
    var_26 = var_2;
    #pragma endscop
}
