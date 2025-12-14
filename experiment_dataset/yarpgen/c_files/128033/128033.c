/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((arr_0 [i_0]) == (arr_3 [i_0] [i_1]))) ? 1 : 1));
                arr_5 [i_0] [1] [i_0] = ((((min(4294967293, var_0))) ? (arr_2 [i_0] [9]) : ((((var_0 != 1) ? (arr_3 [i_0] [13]) : (((arr_3 [i_0] [i_1]) ? (arr_3 [i_1] [i_0]) : -65536)))))));
                arr_6 [i_0] [i_0] [i_0] = ((((!(arr_3 [11] [i_1]))) ? (((arr_3 [i_0] [i_1]) & (arr_3 [i_1] [i_0]))) : var_0));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            {
                arr_13 [i_3] [i_3 - 1] = (arr_10 [i_2] [i_2] [i_3]);
                arr_14 [i_2] [i_2] [i_2] &= arr_7 [i_2];
            }
        }
    }
    #pragma endscop
}
