/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((((((((var_8 ? var_16 : 1))) ? ((var_6 ? var_1 : var_4)) : var_9))) ? (((((1 ? var_17 : var_16)) | (((var_17 + 9223372036854775807) << var_16))))) : (((!var_0) ? (var_9 && var_11) : ((var_8 ? var_10 : var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = ((((arr_4 [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : ((var_13 ? (arr_3 [i_0] [i_1 + 1]) : 139)))));
                var_22 = ((((0 ? var_10 : 127))) % -var_5);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_23 = (arr_7 [i_2 - 1] [i_2]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_24 = ((491183801 ? var_1 : 14260));
                            var_25 = (min(var_25, ((((((((((arr_5 [2]) ? 1 : (arr_4 [i_2 + 1] [i_4] [i_4])))) ? (arr_1 [i_2]) : (arr_11 [8] [i_2 + 2] [i_5 - 1] [1] [i_5 - 1] [i_5 - 1])))) ? var_14 : ((+(((arr_3 [i_2 + 2] [i_4]) ? (arr_3 [i_2] [i_2]) : 1)))))))));
                            var_26 = (arr_11 [i_2 + 2] [i_2] [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 2]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_27 += ((((((arr_11 [i_8] [i_7] [i_7] [i_7] [i_3] [i_2]) ? ((329832626 ? var_11 : var_8)) : ((((arr_4 [1] [1] [i_7]) >= 1)))))) ? (((((((arr_4 [i_2 + 3] [i_3] [i_6 + 2]) ? (arr_10 [1]) : var_18))) ? var_13 : -14257))) : var_17));
                                var_28 -= (((arr_21 [i_2 + 1] [i_2] [i_3] [i_6] [i_7] [i_3] [0]) ? (((((0 ? var_0 : (arr_1 [i_7])))))) : ((var_4 ? (arr_0 [i_3] [i_6 - 1]) : (arr_13 [i_3] [i_6 - 1])))));
                            }
                        }
                    }
                }
                arr_22 [i_2] = arr_9 [i_2 - 1] [i_2 + 3] [i_2] [i_2];
            }
        }
    }
    #pragma endscop
}
