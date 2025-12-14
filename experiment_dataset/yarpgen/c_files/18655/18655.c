/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((~((var_8 - (max(var_7, var_6)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [5] [i_1] = ((!(((~(arr_0 [i_0 + 3]))))));
                arr_6 [i_1] = (arr_3 [i_1] [i_0] [i_0]);
                arr_7 [i_1] = ((+(((arr_0 [i_0 + 3]) ? 4094746699911044713 : (((min(1, (arr_4 [i_1] [i_0] [i_0 - 1])))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_10 [i_2] = ((var_8 ? 76 : ((14351997373798506897 ? (arr_9 [i_2]) : (arr_9 [i_2])))));
        var_15 = (min(var_15, ((((((arr_8 [i_2]) ? var_4 : (arr_8 [i_2]))) * (arr_9 [i_2]))))));
        var_16 = (max(2771221236, (!2530202792545714618)));
        var_17 *= ((((~(arr_9 [i_2]))) >= ((((arr_9 [i_2]) < var_10)))));
    }
    #pragma endscop
}
