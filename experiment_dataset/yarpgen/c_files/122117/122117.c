/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    var_12 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 &= max(-4828483615054372797, (((((((1 > (arr_3 [i_2] [i_1] [i_0]))))) == (max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_1] [i_2])))))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = (min((arr_6 [i_0] [i_0]), (arr_6 [i_0] [i_0])));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_14 += ((((((max(var_0, (arr_12 [1]))) < var_7))) - (arr_11 [i_3])));
        arr_13 [1] [i_3] = ((((!(arr_11 [i_3]))) ? (((!(arr_11 [i_3])))) : (arr_11 [i_3])));
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        arr_18 [i_4 - 1] = ((!1) > ((+((1 ? (arr_14 [i_4] [i_4 - 1]) : var_7)))));
        var_15 += 1;
        var_16 += (min((max((((1 | (arr_14 [i_4] [i_4 - 1])))), (min(var_6, var_8)))), (arr_15 [i_4])));
    }
    var_17 = var_9;
    #pragma endscop
}
