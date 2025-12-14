/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 = (max(var_19, var_16));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = (min((~1), ((min((-80 ^ -124), var_12)))));
        arr_4 [i_0] = (arr_2 [i_0]);
        var_21 ^= ((((min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) * ((-(((arr_1 [i_0] [i_0]) ? (arr_0 [1]) : var_10))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_22 = (max(var_22, 127));
                        var_23 = (-(arr_13 [i_1] [i_2 - 2] [i_1] [i_3] [i_3 + 1]));
                        var_24 = 79;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                {
                    var_25 = (max(var_25, (arr_14 [i_6] [i_6 + 2] [i_6] [17] [i_5 - 1])));
                    arr_20 [20] &= (9223372036854775807 / 15990);
                }
            }
        }
        arr_21 [i_1] = (arr_14 [i_1] [i_1 + 2] [i_1] [i_1 + 1] [i_1]);
        var_26 *= 124;
        var_27 = (-(arr_11 [8] [0] [8]));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        arr_24 [i_7] [i_7] = (((arr_16 [i_7 - 1] [i_7 + 1]) > (arr_9 [i_7 - 1])));
        arr_25 [i_7] = 0;
    }
    #pragma endscop
}
