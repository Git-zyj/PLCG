/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = ((!(((max((arr_3 [i_1] [i_0 - 1] [6]), var_7))))));
                var_11 = (max(var_11, var_7));
                arr_5 [i_0] [i_1] = (((((max((arr_2 [i_0] [i_0]), var_9))) || (arr_3 [i_1] [i_1] [i_1]))) ? (arr_2 [i_1] [i_0]) : var_0);
            }
        }
    }
    var_12 = ((((((max(var_0, -3054140860894850205))) ? 3054140860894850199 : var_7)) << (((max((max(-3054140860894850218, -3054140860894850205)), ((max(var_6, var_2))))) - 4294967265))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_13 = (min(var_13, (((!(max((!-10), (!9223372036854775807))))))));
                                arr_17 [i_3] [i_3] [i_3] [i_3] [i_2] = (min(-32, (((45 != ((-662442579 ? -3054140860894850203 : -33)))))));
                                arr_18 [i_3] [i_2] [i_6] [i_5] [i_6 + 1] = (min((~-1606525488), ((((arr_15 [i_4] [i_5 - 2] [i_6 + 2] [i_6] [i_6 + 2]) ? ((((arr_8 [i_2] [i_6]) ? 1606525487 : 1606525484))) : (((arr_16 [i_4] [i_3] [i_3] [i_2] [i_6] [i_4]) & (arr_15 [i_3] [i_3] [i_3] [i_6] [i_6]))))))));
                            }
                        }
                    }
                }
                var_14 += ((min(((-169753534382813579 ? 1 : -85)), (0 / 14))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 4; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((((arr_14 [i_2] [4] [i_7] [i_3]) + (arr_24 [i_8] [i_8] [i_3] [i_9 + 1] [0] [i_9] [i_9]))))));
                                var_16 = ((-((var_0 ? (max((arr_20 [i_2] [i_2] [i_2]), 16744327628323441004)) : (arr_16 [i_9] [i_9 - 4] [i_9 - 4] [i_2] [i_9] [i_9 + 2])))));
                                var_17 = var_2;
                                var_18 = (min(var_18, (((0 >= ((max(1606525482, (arr_6 [i_3])))))))));
                            }
                        }
                    }
                }
                var_19 = 81;
                var_20 = (max(var_20, (max(74, (((var_5 ? (arr_15 [14] [i_2] [i_2] [i_2] [i_3]) : (-6 / var_9))))))));
            }
        }
    }
    #pragma endscop
}
