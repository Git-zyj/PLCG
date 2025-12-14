/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] &= ((((((~(arr_0 [i_0]))))) ? (arr_2 [i_0]) : (min(1632836100, 0))));
        var_20 *= -731534694;
        var_21 += (min((((((~(arr_0 [1])))) ? 20 : 0)), (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [16] [i_1] &= var_10;
        arr_9 [i_1] = ((((min(var_1, (arr_6 [i_1])))) ? (arr_4 [i_1] [i_1]) : (var_11 != 1023)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_14 [i_2] [i_2] = var_17;
        arr_15 [16] [i_2] = ((0 ? (arr_13 [i_2] [i_2]) : 1062093508));
    }
    var_22 = 1192089904;
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_26 [i_5] [2] [i_3 - 2] [i_3] = ((1411700478 ? 0 : var_18));
                    arr_27 [i_3] [i_4] [i_5] = (arr_5 [i_5] [0]);
                }
                var_23 += -1;
                arr_28 [i_3] [i_3 - 2] = ((!(((-(arr_22 [i_4 + 1] [i_4 - 1]))))));
                var_24 = (max(var_24, (((((min((((arr_25 [i_4] [i_4]) ? 1 : (arr_5 [8] [i_3 - 1]))), ((24738 ? (arr_5 [12] [i_4]) : 199955454))))) ? (arr_19 [i_4]) : ((((var_5 ? var_3 : (arr_11 [i_3]))))))))));
            }
        }
    }
    #pragma endscop
}
