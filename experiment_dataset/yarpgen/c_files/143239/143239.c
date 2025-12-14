/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 -= ((((((arr_0 [i_1]) == (arr_1 [i_1]))) ? (((arr_1 [i_0]) ? (arr_2 [i_1]) : (arr_2 [2]))) : ((((arr_5 [i_0] [i_1]) ? (arr_3 [8] [i_1]) : (arr_4 [i_0] [i_0])))))));
                var_19 = ((((((arr_0 [i_1]) ? (arr_0 [i_0]) : (arr_2 [i_0])))) / (arr_5 [i_0 - 2] [i_0 - 2])));
                var_20 = (((arr_1 [i_0 - 2]) != (((arr_3 [i_0 + 3] [i_0 - 1]) ? (arr_3 [i_0 - 1] [i_0 - 3]) : (arr_3 [i_0 + 2] [i_0 - 3])))));
                var_21 = (((arr_4 [i_0] [2]) != (((((arr_5 [i_1] [i_0 - 3]) ? (arr_2 [i_0]) : (arr_2 [9])))))));
                var_22 = (((((arr_4 [i_0 - 1] [i_0 - 3]) | (arr_4 [i_0] [i_0 - 3]))) >> (arr_4 [15] [i_0 - 3])));
            }
        }
    }
    var_23 = var_4;
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_24 -= (arr_10 [i_2] [5]);
                arr_12 [i_3] = ((((((arr_8 [11] [9]) + (arr_5 [12] [i_3]))) / (arr_9 [i_2 - 2] [i_2 - 1]))) >> (((arr_11 [i_2]) - 1522439870)));
                arr_13 [i_3] = (arr_1 [i_2]);
            }
        }
    }
    var_25 = var_1;
    #pragma endscop
}
