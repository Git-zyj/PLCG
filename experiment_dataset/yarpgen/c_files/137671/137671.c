/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~-var_9);
    var_11 = ((~(~2550143164455328122)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            var_12 = (arr_14 [i_0] [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4] [i_4]);
                            arr_16 [16] [i_0] = (arr_1 [i_2] [i_3]);
                            var_13 = (arr_8 [i_0] [i_0]);
                            arr_17 [i_0] [i_0] [i_2] [i_3] [i_4] = ((-16 / (((var_9 || (arr_7 [i_0] [i_0] [2]))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_14 [i_0] [i_1] [i_3] [i_3] [16] [i_4]) + (27 || var_9)));
                        }
                        arr_19 [i_0] [i_0] [i_0] = ((var_2 & var_9) & var_7);
                    }
                }
            }
        }
        var_14 = (((-68 + 2147483647) << (((arr_6 [i_0] [i_0] [i_0] [i_0]) - 1))));
        arr_20 [i_0] [i_0] = (18446744073709551588 >= 1);
        arr_21 [i_0] = (((arr_8 [i_0] [i_0]) << (((arr_8 [i_0] [i_0]) - 1171262652))));
    }
    var_15 = -1;
    var_16 = max((min((var_4 + 3170161273010958031), var_5)), ((((109 - var_3) - var_5))));
    #pragma endscop
}
