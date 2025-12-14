/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((arr_0 [i_1 + 1]) ? ((~(arr_0 [i_1 - 1]))) : (((arr_0 [i_1 - 1]) ? (arr_2 [i_1 - 1]) : (arr_0 [i_1 + 1])))));
                var_16 = (arr_2 [i_0]);
                var_17 = arr_4 [i_0];
                var_18 = 4398046511096;
            }
        }
    }
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_2] [i_2] = var_14;
                arr_12 [i_2] = ((~(((arr_6 [11]) ? ((var_8 >> (((arr_8 [i_2 - 1] [i_2] [1]) - 2068232435008134761)))) : var_6))));
            }
        }
    }
    #pragma endscop
}
