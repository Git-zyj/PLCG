/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = (((((arr_0 [i_1]) || (arr_0 [i_0 + 1]))) ? (((min(126, (arr_0 [i_0 - 1]))))) : (((arr_0 [i_0 - 1]) ? var_6 : 13225890825249838923))));
                var_12 |= (max(((~(arr_6 [i_0] [i_0 - 1] [i_0]))), ((min(var_3, 34)))));
                arr_8 [i_0] [i_0] = ((var_1 / 2047) == var_2);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_2] [i_2] = var_6;
                var_13 = (max((max((arr_11 [i_2 - 1] [i_3]), var_5)), ((((arr_12 [i_2 - 1] [i_2]) ? 129 : (arr_12 [i_2 - 1] [i_2]))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_21 [i_2] = ((-((var_0 * (arr_15 [i_4])))));
                            var_14 = -13225890825249838918;
                            var_15 = ((((min((arr_18 [i_4] [i_4] [i_2 - 3] [i_2] [i_2] [i_2]), var_5))) / (arr_14 [i_2] [i_2 - 3] [i_2 + 2] [i_2 - 2])));
                        }
                    }
                }
                var_16 = ((((var_10 <= (((arr_20 [i_2] [i_2] [i_2] [i_3] [i_3]) + var_3)))) ? (((min((min(var_9, var_3)), (arr_17 [i_3]))))) : ((+(max((arr_11 [i_2] [i_3]), var_7))))));
            }
        }
    }
    var_17 = var_2;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 9;i_7 += 1)
        {
            {
                arr_27 [i_6] = 139;
                arr_28 [i_6] = var_6;
                var_18 *= (((((arr_10 [i_7 + 2]) ? (arr_10 [i_7 - 1]) : (arr_10 [i_7 - 2]))) * (((((arr_11 [i_6] [i_7]) && var_10)) ? 5 : (max(116, var_5))))));
                arr_29 [i_6] [i_7] [i_7] = (max(((min((max(var_10, 127)), (arr_22 [i_7 + 1] [i_7 - 1])))), (min(var_9, (arr_11 [i_7 - 1] [i_7])))));
            }
        }
    }
    var_19 = var_5;
    #pragma endscop
}
