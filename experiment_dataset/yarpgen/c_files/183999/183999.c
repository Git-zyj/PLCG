/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((~(min(-101, var_3)))), var_13));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_15 = (min(var_15, (var_5 - 7962748611108006035)));

        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = (((!(((-(arr_4 [i_0] [i_1] [i_1 - 2])))))));
            var_16 = (arr_3 [9] [i_1 - 3] [9]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_17 = var_0;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_20 [4] [i_3] [i_4] = ((64760 ? var_6 : (~var_5)));
                            var_18 = (min(var_18, (arr_10 [i_0] [i_0] [i_3] [i_4])));
                            var_19 -= 7962748611108006035;
                        }
                    }
                }
            }
        }
        for (int i_6 = 3; i_6 < 9;i_6 += 1) /* same iter space */
        {
            var_20 &= ((41210153 * (3534030014 == 2353783936)));
            arr_25 [i_6] [i_0] [i_0] = ((((max((((~(arr_15 [i_0] [i_6] [i_0])))), (min((arr_11 [i_0] [i_0]), (arr_8 [i_0] [i_6] [i_6])))))) - (((arr_9 [i_0] [i_6 + 1] [i_0]) ? (arr_19 [1] [i_0] [i_0] [i_0] [i_6] [i_6 - 1] [i_6]) : (arr_19 [i_0] [i_0] [8] [i_0] [i_0] [i_0] [i_0])))));
        }
        for (int i_7 = 3; i_7 < 9;i_7 += 1) /* same iter space */
        {
            arr_28 [i_0] [i_7 + 1] = ((7962748611108006035 ? 10483995462601545571 : 10483995462601545580));
            var_21 = ((10 ? -1 : 115));
        }
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        arr_31 [i_8] = (var_7 >= var_8);
        arr_32 [i_8] = (max(((42905 | (arr_29 [i_8]))), (arr_29 [i_8])));
    }
    #pragma endscop
}
