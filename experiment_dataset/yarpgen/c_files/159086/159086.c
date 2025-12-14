/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_6));
    var_14 = (min(0, 1));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_1] [i_1] = (min(1, ((!(arr_8 [i_0] [i_1])))));
                        var_15 = (max(var_15, ((((1 - 1299297530) << (((min(var_9, (arr_4 [i_1]))) - 1767704605)))))));
                        var_16 ^= (min((((51495 && ((min((arr_2 [i_0] [i_1] [i_1]), var_7)))))), ((var_11 ? 29869 : (((1 && (arr_0 [i_2]))))))));
                        var_17 = arr_2 [i_0] [i_1] [i_0];
                    }
                }
            }
        }
        arr_10 [i_0] = 0;
        arr_11 [i_0] [i_0] = (((65535 | (4294967290 | 0))) * var_2);
        var_18 *= (arr_1 [i_0] [i_0]);
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_14 [i_4] &= min((arr_13 [i_4]), ((~((1 ? (arr_2 [i_4] [i_4] [i_4]) : var_11)))));
        var_19 -= min((arr_13 [i_4]), (((((((arr_0 [i_4]) ? 59 : (arr_5 [i_4] [i_4] [i_4])))) || (!1)))));
    }
    #pragma endscop
}
