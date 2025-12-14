/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) != (arr_1 [i_0])));
        var_17 = (((((((arr_1 [i_0 + 3]) >= (arr_1 [i_0 + 2]))))) > (((arr_1 [i_0 + 2]) ? (arr_1 [i_0 + 3]) : (arr_1 [i_0 + 2])))));
        arr_3 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 = (((arr_1 [i_1]) ? var_3 : (arr_4 [i_1] [i_1])));
        var_19 = (min(var_19, (((!(arr_4 [i_1] [i_1]))))));
    }
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        var_20 = var_13;
        var_21 = var_11;
        var_22 &= var_9;
    }

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_23 = (min(var_23, (((17829738634862070851 ? 12496 : 27)))));
            arr_13 [i_3] [12] [10] = ((-(arr_8 [i_3])));
        }
        var_24 += (((!((((arr_10 [i_3] [i_3]) ? (arr_9 [i_3]) : (arr_10 [i_3] [11])))))));
        var_25 = (min(var_25, (((((((arr_8 [i_3]) - var_6))) ? ((var_3 ? (arr_8 [i_3]) : (((arr_8 [i_3]) << (var_10 - 2162314969130851630))))) : var_7)))));
        arr_14 [i_3] = ((!(arr_10 [i_3] [9])));
    }
    #pragma endscop
}
