/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (240 - 8646911284551352320);
        var_17 = 2147483647;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {
                        var_18 = (((-2147483615 + 2147483647) << (2147483614 - 2147483614)));
                        var_19 = (!-2147483601);
                        arr_14 [i_1] [i_1 - 2] [i_1] [i_3] [i_1] = (!15249);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        var_20 ^= ((-(var_13 / var_8)));
        var_21 = (max(var_21, (arr_15 [i_4 + 3])));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 18;i_5 += 1)
    {
        var_22 -= (!133955584);
        var_23 = (max(var_23, (((!(arr_18 [i_5]))))));
        var_24 = (min(var_24, (((((!(arr_17 [4]))))))));
        var_25 = (min(var_25, var_11));
    }
    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {
        arr_22 [i_6] = ((min(-2147483602, 96)));
        var_26 = (max(var_26, (((min(((max(96, var_16)), (min(31792, 3812461103)))))))));
    }
    var_27 = (max(4109468518, 89));
    #pragma endscop
}
