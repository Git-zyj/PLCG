/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((8775049511403911041 / var_2) || var_1));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] [0] [i_0] [i_2] &= ((max(1, (arr_2 [i_0] [4] [i_2]))));
                    arr_9 [i_0 + 1] [i_1] [i_2] [10] = ((1 ? (((4294967279 || 19640) | -78)) : (arr_6 [i_0 - 1] [i_1] [i_2])));
                }
            }
        }
        var_11 *= (((min(99122063, ((19651 ? 123 : 7932358177355272440)))) <= (((~((13 ? (arr_2 [i_0] [8] [1]) : 0)))))));
        var_12 = (arr_2 [2] [1] [2]);
        arr_10 [2] [4] = (max((1 - 45895), 194));
        arr_11 [4] [4] = (arr_3 [i_0] [6]);
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        var_13 = arr_14 [0] [14];
        var_14 = (max((arr_12 [i_3] [i_3]), var_7));
    }
    var_15 = ((var_1 ? (!var_6) : var_2));
    var_16 = (((var_4 ^ 1) ? (((var_1 ? (var_9 <= var_1) : var_5))) : (max(var_2, (min(0, var_9))))));
    #pragma endscop
}
