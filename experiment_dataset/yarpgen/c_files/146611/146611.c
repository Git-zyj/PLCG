/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 99;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = -1870614137;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 7;i_3 += 1)
                {
                    {
                        arr_11 [i_0] = ((-1986264938 ? 13991070444980830463 : ((((arr_5 [i_1 + 4] [i_1 + 3] [i_2 - 2]) ? -var_0 : (((-1870614137 + 2147483647) << (((var_4 + 5334220713892832043) - 25)))))))));
                        arr_12 [i_3] [i_1] [i_2] [i_1] [i_0] [i_0] = (min(-1870614139, var_2));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            {
                arr_19 [i_4] = (arr_15 [i_4]);
                arr_20 [i_4] [i_4] = ((min((arr_17 [i_4]), 65535)));
                arr_21 [i_5] [i_4] = ((!(arr_14 [i_4])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 21;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            arr_32 [4] [16] [i_8] [i_9] = 0;
                            arr_33 [i_6] = (arr_23 [i_6] [i_6]);
                            arr_34 [i_6] [i_7] = (min(((((((~(arr_28 [i_9] [i_8] [4] [i_6]))) + 2147483647)) >> (((max(var_11, 127)) - 412491848)))), (((min((arr_27 [i_6] [i_9] [i_9]), var_14)) + -var_0))));
                            arr_35 [i_6 + 2] [i_6 + 2] [i_8] [i_9] [i_8] = (var_9 << (-1 + 23));
                            arr_36 [i_7] [i_7] [i_6] [i_7] [i_7] [i_6] = (((!(((var_2 ? (arr_25 [i_8] [i_7] [i_6]) : (arr_26 [i_9] [i_8] [i_7] [i_6])))))));
                        }
                    }
                }
                arr_37 [i_7] [i_6] [i_6] = (arr_29 [10]);
            }
        }
    }
    #pragma endscop
}
