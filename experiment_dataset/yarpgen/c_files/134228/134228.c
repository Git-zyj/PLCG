/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (var_0 > var_7);
                    var_19 ^= (((((var_3 + (((var_9 || (arr_0 [i_1]))))))) ? ((((var_10 >= (!var_7))))) : (arr_3 [10])));
                    arr_10 [i_0] [i_0] [i_0] [13] = ((!(((var_7 ? (arr_6 [i_2 + 1] [i_1] [22] [i_0]) : var_2)))));
                }
            }
        }
    }
    var_20 = (((!(!var_18))));
    var_21 = var_12;

    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_22 = (arr_3 [i_3]);
        arr_13 [i_3] = ((330536335 <= (arr_6 [i_3] [i_3] [i_3] [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_22 [1] [i_4] [i_5 + 1] [i_4] [3] = (arr_7 [i_3] [16] [16] [i_3]);
                        var_23 &= (var_8 - var_18);
                        var_24 = ((-var_11 >> (var_11 + 25680)));
                        var_25 *= (arr_5 [1] [i_5]);
                    }
                    arr_23 [i_3] [2] [i_5] &= 0;

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        arr_26 [i_3] [i_3] [11] [i_4] [13] = (0 < 2693702479);
                        arr_27 [i_7] [i_4] [i_3] [i_4] [i_3] = ((-((-((-(arr_19 [i_7] [i_4] [i_4] [i_4] [i_3])))))));
                        var_26 = 4294967295;
                    }
                    var_27 = -var_8;
                    arr_28 [i_4] [i_3] [i_3] [i_4] = (((arr_0 [i_5]) >> (((arr_24 [i_5 + 2] [0] [i_5 + 2] [7]) ? (arr_6 [i_5 + 2] [i_4] [i_4] [i_4]) : 10071934666543442350))));
                }
            }
        }
        arr_29 [0] = ((((arr_1 [i_3]) ? (-106 / 1) : var_6)));
        var_28 = 151;
    }
    #pragma endscop
}
