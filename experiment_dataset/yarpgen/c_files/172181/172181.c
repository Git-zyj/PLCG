/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 42;
    var_18 = max(var_16, 9223372036854775807);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        var_19 = (((arr_2 [16]) | (((((5994138531609403148 == (arr_2 [i_0]))))))));
        var_20 = (arr_1 [5] [5]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_1] [i_1] [i_1] = (arr_10 [i_1]);
                    var_21 = ((var_5 ? ((var_11 ? (arr_8 [i_1]) : (arr_9 [i_1]))) : (((((arr_6 [i_1]) == var_6))))));
                }
            }
        }
        arr_13 [i_1] [i_1] = var_13;
    }
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        arr_18 [i_4] [2] = 447956754;
        arr_19 [i_4] = 123;
        var_22 += (arr_6 [i_4]);
        var_23 += 120;
    }
    #pragma endscop
}
