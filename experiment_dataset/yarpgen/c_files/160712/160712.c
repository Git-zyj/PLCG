/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [12] [i_0] = ((627828959519469867 - var_3) + (((627828959519469867 ? 28251 : ((max(9288, 0)))))));
                    var_17 = (min((((4057 - 0) ? (arr_2 [i_0] [7] [i_0]) : -var_5)), ((max((arr_5 [i_0]), (190 + var_10))))));
                }
            }
        }
    }
    var_18 = var_9;
    var_19 &= var_6;

    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        var_20 = 5;
        var_21 = (((((min(6977219968595010877, 1654010589)) + 7360193404467632766)) - (~466542372)));

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_17 [i_3 - 2] [i_3 - 1] [i_3] = (var_13 ? ((19614 ? (arr_16 [i_3 - 1]) : 9491)) : (arr_14 [i_4]));
            arr_18 [i_3] [i_3] = (arr_16 [i_3]);
            arr_19 [i_3] [i_3] = (!(((((var_1 ? (arr_15 [i_4] [i_4]) : (arr_10 [i_3])))) && (!-1654010589))));
        }
        var_22 *= ((-46 ? (((arr_15 [i_3 - 2] [i_3]) & (var_6 + var_16))) : (((((min((arr_10 [1]), 515927887))) ? (var_7 && 13260025257321798484) : 0)))));
    }
    #pragma endscop
}
