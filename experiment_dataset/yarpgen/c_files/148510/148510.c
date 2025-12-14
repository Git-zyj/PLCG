/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((((var_2 >= (~877414624)))), 488280037));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
        {
            var_17 &= (arr_2 [i_0] [i_1]);
            arr_5 [i_0] [i_1] = 488280036;
            var_18 = (min(var_18, (-29665 < 1834671622)));
            var_19 = -var_2;
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_2] [i_0] = ((-933884133047406716 > ((((((arr_4 [i_0] [5]) ? (arr_1 [i_0]) : -488280026)))))));
            var_20 -= (-488280037 / var_12);
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_12 [i_0] [8] [1] = ((488280036 ? 488280005 : -9168363729866277879));
            var_21 = (max((-488280037 || 3462336591), -5));
            var_22 *= ((((((arr_3 [i_0] [i_0]) ? 5 : -2109271460))) || ((((arr_2 [7] [i_3]) / (arr_2 [i_3] [i_3]))))));
        }
        var_23 ^= (((min((arr_1 [i_0]), var_9))) || (arr_9 [i_0]));

        /* vectorizable */
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        var_24 ^= var_14;
                        var_25 = (arr_0 [i_0] [i_6]);
                        var_26 = ((((arr_17 [i_0] [i_4 + 2] [i_6]) & (arr_15 [i_4] [i_4]))));
                        arr_20 [i_0] [i_4] [16] = (((arr_6 [i_4 - 3]) / (arr_6 [i_4 - 1])));
                    }
                }
            }
            var_27 = (min(var_27, (((~(arr_7 [0]))))));
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_28 = (min(var_28, ((((min((var_9 >= var_1), (min(2669928383237864315, (arr_16 [i_0] [i_7] [i_0]))))) - var_6)))));
            arr_23 [1] [i_7] [i_7] = 488280053;
        }
        for (int i_8 = 1; i_8 < 22;i_8 += 1)
        {
            arr_28 [i_0] [i_8 - 1] [i_0] &= (((-47 - -3774939229533127097) - (max((((arr_18 [i_0] [i_0] [i_8 - 1] [i_0]) ? var_12 : var_14)), (arr_3 [i_8 - 1] [i_8 - 1])))));
            var_29 = var_7;
            arr_29 [i_0] [i_8 - 1] = 488280066;
        }
    }
    for (int i_9 = 3; i_9 < 16;i_9 += 1)
    {
        arr_34 [i_9] = arr_26 [i_9 - 3];
        arr_35 [8] = ((~(arr_1 [i_9 - 3])));
        var_30 = ((((((arr_27 [i_9 - 3]) % (arr_13 [i_9 + 1])))) ? (((((var_12 || (arr_10 [9] [i_9] [i_9]))) || ((min((arr_22 [i_9 - 2]), (arr_30 [10] [i_9 + 1]))))))) : (~-488280041)));
    }
    var_31 = var_8;
    #pragma endscop
}
