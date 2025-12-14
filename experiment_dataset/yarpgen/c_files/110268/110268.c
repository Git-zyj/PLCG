/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_4 ? 1944908093 : var_8));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_0] [i_0] [i_0 - 1] = (2350059198 ? ((((!(arr_7 [i_0 - 2] [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 1]))))) : 2350059203);
                            arr_9 [i_1] [i_1] [14] [i_1] = arr_0 [i_0];
                            arr_10 [i_0] [i_0] [i_0] [i_3] = (arr_7 [i_3] [i_2] [i_2] [i_2] [i_1] [i_0]);
                        }
                    }
                }
                arr_11 [i_0] [11] [9] = ((((var_7 ? (((arr_5 [i_1] [i_1] [i_0 + 1] [7]) >> (var_12 - 843059060))) : ((var_10 ? (arr_1 [i_1]) : 10574)))) ^ (arr_7 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0])));
                arr_12 [i_1] = ((-32767 <= (arr_3 [i_0] [i_0] [i_0])));

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_15 [16] [16] = (max(var_14, -32750));
                    arr_16 [i_1] [i_1 + 1] [i_4] [14] = (arr_1 [i_4]);
                }
            }
        }
    }
    var_16 = (((((~((var_9 ? var_7 : -13356))))) < (min(-32757, 4144520586))));
    var_17 = var_12;
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                {
                    arr_26 [i_5 - 1] [i_5] [i_5 + 2] = ((((-((min((arr_20 [i_5]), (arr_19 [i_5])))))) == (arr_17 [i_5])));

                    /* vectorizable */
                    for (int i_8 = 4; i_8 < 20;i_8 += 1)
                    {
                        arr_29 [19] [i_5] [i_5] [i_5] = ((((var_4 ? (arr_18 [i_5]) : 11)) != (arr_20 [i_5])));
                        arr_30 [i_6] [i_6] [i_7] = (((((14241 << (2350059203 - 2350059198)))) == 3292463354));
                    }
                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {
                        arr_33 [i_5] [i_5] [i_9] [i_9] = (arr_20 [i_5]);
                        arr_34 [i_5] = ((((((arr_22 [i_9 - 1] [i_6] [i_7]) && (((-32757 ? (arr_32 [i_5] [i_7] [6] [i_5]) : (arr_32 [15] [i_6] [13] [i_5]))))))) >> (((arr_20 [i_5]) ? ((((1785 || (arr_32 [i_5 + 1] [i_6] [15] [i_5]))))) : (arr_27 [i_5] [i_5] [i_7])))));
                    }
                    for (int i_10 = 4; i_10 < 19;i_10 += 1)
                    {
                        arr_38 [i_5] [i_5] [i_7] [20] = (arr_25 [i_5] [i_7 + 1] [i_10 + 2]);
                        arr_39 [i_7 + 1] [i_6] [i_10] [i_10] [i_5] [i_6] = (((min(4294967293, var_2))) ? 32756 : (min(1944908110, (arr_20 [i_5]))));
                        arr_40 [i_5] [i_5] [i_6] [i_6] = (4294967285 ? var_8 : (((var_9 ^ -32745) ^ (((arr_25 [i_10] [i_6] [i_7 + 1]) ? (arr_31 [i_5 + 1] [i_6] [i_7 + 1] [i_10] [i_7 + 1]) : (arr_31 [i_5 + 1] [3] [i_5] [i_5] [i_5 + 1]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
