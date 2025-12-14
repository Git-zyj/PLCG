/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = 29725;
        var_12 -= ((246 * (arr_1 [i_0])));
        var_13 = ((((4 ? (((arr_0 [i_0]) ? var_10 : 1)) : (arr_1 [i_0]))) | (arr_0 [i_0])));
    }

    for (int i_1 = 4; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_7 [i_1] [i_1 + 2] [i_2] = (arr_4 [i_1] [i_2]);
            arr_8 [i_1] = (arr_4 [i_1] [2]);
            arr_9 [i_1] [i_2] [i_1] = (min(((((arr_6 [i_1 + 1] [i_1 - 3] [i_1]) || var_1))), var_2));
        }
        arr_10 [i_1] = -4294967295;
        var_14 = (min(var_14, (((((((arr_5 [i_1 + 3] [i_1 + 3] [14]) ? (arr_5 [i_1 + 1] [i_1 - 4] [0]) : (arr_5 [i_1 - 4] [i_1 + 3] [8])))) ? (max((max((arr_3 [14]), var_7)), (arr_4 [i_1 - 1] [i_1 + 2]))) : (min(0, (arr_3 [i_1]))))))));
        var_15 = (min(var_15, (((+((((((arr_3 [i_1 + 3]) ? (arr_4 [i_1] [i_1 - 1]) : (arr_3 [i_1 - 2])))) ? (arr_3 [i_1]) : (arr_4 [i_1] [i_1 + 2]))))))));
    }
    for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    arr_19 [i_3 + 1] [i_3] [i_5] = (((~(arr_15 [i_4] [13] [10]))));
                    var_16 = ((var_7 ? (min(((((arr_3 [i_3]) ? -1 : -7329))), (((arr_13 [0] [i_3]) ? (arr_3 [i_5]) : var_11)))) : ((+(((arr_5 [i_3] [i_3] [i_3]) ? var_9 : var_0))))));
                }
            }
        }
        arr_20 [i_3] = (arr_12 [i_3] [i_3]);
        var_17 = (((arr_17 [13] [13] [13] [i_3]) ? (((-((min(9, 127)))))) : (((arr_13 [i_3] [i_3 + 2]) ? 31315 : (arr_13 [1] [i_3 + 1])))));

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_18 = (max(var_18, 0));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 13;i_8 += 1)
                {
                    {
                        var_19 = (arr_12 [i_8] [5]);
                        var_20 = -127;
                    }
                }
            }
        }
        arr_27 [i_3] = var_10;
    }
    for (int i_9 = 2; i_9 < 15;i_9 += 1) /* same iter space */
    {
        var_21 *= (((((var_3 ? ((var_10 ? (arr_16 [i_9] [14] [i_9]) : var_4)) : 31323))) ? (((((var_0 ? (arr_16 [i_9] [2] [8]) : (arr_28 [i_9] [i_9])))) ? (((arr_25 [i_9] [8] [8] [i_9]) * (arr_6 [i_9] [i_9] [14]))) : var_4)) : (((-(~48))))));
        var_22 *= 196519352;
    }
    #pragma endscop
}
