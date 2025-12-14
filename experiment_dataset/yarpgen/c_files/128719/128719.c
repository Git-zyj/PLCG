/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_5 ? (((~(~var_2)))) : ((1 ? (((max(var_2, 1)))) : (var_3 + 6982431249871344291))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0] = (~42);
                arr_5 [i_0] [i_1] [i_0] = (min((arr_0 [i_0]), ((~((~(arr_3 [i_0] [i_1] [i_1])))))));
            }
        }
    }
    var_12 = ((((~((var_6 ? var_0 : -68)))) <= var_5));
    var_13 = var_9;
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_12 [i_4] [i_3] [i_3] [i_2] = 9807534068306765243;
                    var_14 = (arr_10 [i_3]);
                    var_15 = ((~(arr_10 [i_2 - 1])));
                    var_16 = (~(arr_7 [i_2]));
                    var_17 = ((((((1 / (arr_7 [i_3]))))) ? ((max((arr_11 [i_2] [i_2] [i_2] [i_2]), (((var_9 >= (arr_9 [i_3] [i_4]))))))) : (((arr_7 [i_2]) ? ((55917 ? (arr_8 [i_2] [i_3]) : var_2)) : ((1 / (arr_10 [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
