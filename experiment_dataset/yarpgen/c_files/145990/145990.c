/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((max((18446744073709551615 && var_8), ((179042615 ? 179042615 : var_9))))) ? (arr_1 [i_0]) : (((arr_0 [i_0]) ? var_5 : (arr_0 [i_0])))));
        arr_3 [i_0] = 0;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            {
                arr_10 [i_1] [i_2] [i_1] &= ((var_5 ? (((arr_6 [i_2]) ? (((max((arr_8 [i_1]), (arr_6 [i_2]))))) : (arr_8 [i_2]))) : var_8));
                arr_11 [i_2] [i_2] [5] = ((((((((9223372036854775807 ? (arr_1 [i_2]) : 28985))) ? (((448 << (((arr_5 [i_2]) - 1139622462657953957))))) : 1))) ? (((((((~(arr_7 [i_2])))) > (arr_8 [1]))))) : (max(var_6, (arr_6 [i_2])))));
                arr_12 [i_1] &= (arr_9 [i_1]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_13 = ((((((arr_7 [0]) ? 16877856007880034398 : 448))) ? ((var_6 & ((min((arr_13 [i_1] [i_2] [i_3] [i_3]), var_1))))) : var_11));
                            arr_17 [i_1] [i_1] [i_2] [i_3] [i_4] = (min((arr_1 [i_2]), ((((65088 || var_3) <= 5714729511320685323)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
