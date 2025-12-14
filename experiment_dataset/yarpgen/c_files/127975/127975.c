/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]));
        var_12 = (arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_13 = ((((((arr_6 [i_1] [i_1] [2]) ? 255 : (arr_1 [i_0] [2])))) <= var_9));
                        var_14 = (max(var_14, (((var_0 ? (-32767 - 1) : 7)))));
                    }
                }
            }
        }
        var_15 = ((255 ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 7;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    arr_22 [i_4] [i_4] [i_4] = (((arr_11 [8] [8] [i_4] [i_6]) == ((-(arr_20 [i_4])))));
                    var_16 ^= 0;
                    var_17 = (max(var_17, 1));
                    var_18 = ((0 ? 31 : (arr_19 [i_4] [i_5 - 2])));
                    var_19 = ((-1 > ((-111 ? 24 : 1))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 7;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 9;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_31 [i_9] [i_7] [i_4] [i_9] [i_4] = ((1 ? ((((arr_20 [i_4]) & var_8))) : (((arr_13 [i_4]) ? var_6 : 0))));
                        arr_32 [i_4] [i_7 + 3] [i_4] [i_9] = (-(((arr_30 [i_4] [i_7 + 2] [i_4] [i_4]) ? (arr_21 [i_4] [i_7 + 1] [i_7 + 1] [i_7 + 1]) : (arr_8 [i_4] [5] [i_9]))));
                    }
                }
            }
        }
    }
    var_20 = (~var_4);
    #pragma endscop
}
