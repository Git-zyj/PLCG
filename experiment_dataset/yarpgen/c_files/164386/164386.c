/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_20 = (min(var_20, var_2));
        var_21 = ((((((arr_0 [i_0 + 2]) ? 66 : (arr_0 [i_0 + 2])))) ? ((max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2])))) : ((~(arr_0 [i_0 + 2])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = (max(58, (arr_3 [i_1])));
        var_23 = (((max((arr_3 [0]), (((arr_4 [i_1]) ? (arr_2 [12] [12]) : var_7)))) ^ (arr_3 [4])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_24 = (((arr_7 [i_2]) | (((arr_7 [i_2]) ? var_15 : (arr_7 [i_2])))));
        var_25 |= (((arr_6 [i_2]) ? (arr_8 [i_2]) : (arr_8 [i_2])));
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            {
                var_26 = (max((((((93 && (arr_7 [i_4]))) && (arr_2 [i_3] [i_3])))), (min((arr_13 [i_3] [i_4] [i_4]), (~var_16)))));
                var_27 = (arr_9 [i_4]);
            }
        }
    }
    #pragma endscop
}
