/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_14 = (arr_0 [i_0]);
        var_15 = (max((arr_1 [i_0 + 1]), (((8795958804480 ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
    }
    var_16 = ((var_9 ? (45478 == -1) : (min(var_2, (max(-8795958804480, 466))))));
    /* LoopNest 3 */
    for (int i_1 = 4; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = ((~(min((min(8795958804480, (arr_7 [i_1] [i_1] [i_1]))), 4108))));
                    arr_10 [i_1] [i_1] [i_1] [i_1] = ((((((arr_6 [i_3] [i_3] [i_1]) ? (arr_6 [i_1 - 1] [i_1 - 1] [i_1]) : (arr_6 [i_1] [i_1] [i_1])))) ? ((-(arr_6 [i_1 + 2] [i_2 + 1] [i_1]))) : (((arr_6 [i_1] [i_2 - 1] [i_1]) ? (arr_6 [i_1 - 2] [i_1 - 2] [i_1]) : 105))));
                    var_17 = 4099;
                    arr_11 [i_1] [i_1] [i_1] = ((((((((arr_8 [i_1]) ? (arr_3 [i_1]) : var_4)) ^ (arr_6 [i_2 - 1] [i_2 - 1] [i_1])))) ? (arr_6 [i_1] [i_1] [i_1]) : 105));
                    var_18 = (i_1 % 2 == 0) ? (((((((((arr_6 [i_1] [i_1] [i_1]) == (arr_3 [i_1])))) >> (arr_3 [i_1]))) != (arr_7 [i_1] [i_1] [i_1])))) : (((((((((arr_6 [i_1] [i_1] [i_1]) == (arr_3 [i_1])))) >> (((arr_3 [i_1]) - 59)))) != (arr_7 [i_1] [i_1] [i_1]))));
                }
            }
        }
    }
    var_19 *= (1 ^ var_4);
    #pragma endscop
}
