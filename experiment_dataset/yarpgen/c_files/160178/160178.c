/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 *= arr_0 [i_0];
        var_17 = -1213754277;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            var_18 &= (((arr_5 [i_2 + 2] [i_2 + 1]) ? 127 : (arr_5 [i_2 + 1] [i_2 + 2])));
            var_19 += (((arr_7 [14]) ? (arr_4 [i_1]) : (arr_7 [i_2 - 1])));
            var_20 = (-(arr_8 [i_1] [i_1]));
        }
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            var_21 = var_5;
            var_22 = ((-(arr_11 [i_1] [i_3 + 1])));
            arr_12 [i_1] [1] = (((arr_9 [i_3 + 1] [i_1]) || (arr_5 [i_3 - 2] [i_3 - 2])));
        }
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            var_23 = (arr_2 [i_4 + 1] [i_4 + 1]);
            var_24 |= -1;
            var_25 = (min(var_25, (((((((arr_6 [16] [16]) ? var_4 : var_8))) ? (((var_8 ? (arr_7 [i_4]) : (arr_9 [i_1] [2])))) : (arr_6 [i_1] [i_1]))))));
            var_26 += 47816;
        }
        var_27 &= (arr_4 [i_1]);
    }
    var_28 = var_0;
    var_29 -= var_9;
    var_30 &= var_0;
    #pragma endscop
}
