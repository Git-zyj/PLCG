/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [4] [i_0] = var_9;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_2] = ((((((arr_8 [i_2 - 2] [i_1 + 1] [i_1 - 1] [i_0]) | var_1))) ? var_1 : (((((arr_8 [i_2 + 1] [i_1 + 1] [i_1 + 1] [1]) < -8611947643697423266))))));
                    var_12 = (min(var_12, var_0));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        arr_18 [i_5] [i_5] [i_4] [i_5] = ((38724 << (((max(var_3, 92)) - 3714595816))));
                        var_13 = (((((((49280 ? 13855343329525253562 : 32168))) && -1))) | (arr_0 [i_3]));
                    }
                    arr_19 [i_4] [i_4] [i_4] = (var_4 || 64155);
                    var_14 = ((~(((((var_1 ? 211905894604077452 : 145))) ? (arr_0 [i_0]) : (min(var_7, var_4))))));
                    arr_20 [i_0] [i_0] [i_0] [i_4] = (((((!(arr_13 [i_4] [i_3] [i_4])))) != (((arr_13 [i_4] [11] [i_4]) ? 1 : (arr_13 [i_3] [i_0] [i_4])))));
                    arr_21 [i_4] [i_4] = ((~(((arr_1 [i_0] [i_3]) % var_1))));
                }
            }
        }
        arr_22 [i_0] = (((((((var_4 ? 149 : var_11))) ? (((arr_12 [i_0]) ? var_4 : 57499)) : (var_5 || var_2))) * (((((var_7 << (((arr_8 [i_0] [i_0] [i_0] [i_0]) - 3333350151))))) ? (16255 * 13855343329525253589) : (((var_4 ? 65518 : var_5)))))));
    }
    for (int i_6 = 4; i_6 < 18;i_6 += 1)
    {
        arr_27 [i_6] = ((var_2 != (((((var_11 ? var_9 : 16256))) ? (~var_1) : -22109))));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 18;i_8 += 1)
            {
                {
                    arr_35 [i_8] [i_7] [i_8] = (((((~(var_6 & var_0)))) > ((-((33369 ? var_6 : 2))))));

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        arr_39 [i_8] = (((arr_23 [i_8 + 2] [i_7]) << (65535 - 65534)));
                        var_15 += (arr_38 [i_9] [i_9] [i_6] [i_9]);
                    }
                }
            }
        }
    }
    var_16 = 0;
    #pragma endscop
}
