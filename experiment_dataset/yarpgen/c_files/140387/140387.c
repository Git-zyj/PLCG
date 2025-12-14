/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = var_5;
        arr_2 [i_0] [i_0] = ((90 >> (54581 - 54553)));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_16 = ((((max((max(var_8, 0)), (arr_0 [i_0] [i_0])))) - ((~(max(17179865088, 1291771492))))));
            arr_5 [10] [10] [i_1] = ((max(3, (arr_4 [i_0]))));
            arr_6 [i_1] [13] [i_0] = (max(((var_10 != ((-(arr_3 [16] [i_1]))))), (min((arr_4 [i_1]), (!10982)))));
            var_17 = ((var_4 ? ((54554 | (arr_1 [i_1]))) : (arr_3 [i_1] [i_1])));
        }
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 *= ((((((!255) ^ ((54593 ? var_10 : var_14))))) ? (arr_7 [8] [8]) : (arr_4 [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_2] [i_3] [i_4] = (~1);
                    arr_17 [i_2] [i_4] = (((min((max(10982, 54581)), 38))) < (~var_4));
                    arr_18 [i_2] [i_2] [i_2] = (1 >= 0);
                }
            }
        }
        arr_19 [i_2] = (~0);
        var_19 = 4192256;
    }
    var_20 = var_4;

    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_22 [i_5] = (max((((arr_14 [i_5] [i_5] [i_5]) * (arr_7 [i_5] [i_5]))), (arr_4 [i_5])));
        var_21 = (max(var_21, ((max(((max((min((arr_8 [i_5]), var_14)), 6))), ((var_14 | (((arr_21 [5]) & (arr_10 [i_5]))))))))));
        arr_23 [i_5] [i_5] = var_13;
    }
    var_22 -= (max(((max(var_13, var_9))), var_8));
    #pragma endscop
}
