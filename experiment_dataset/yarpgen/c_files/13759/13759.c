/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_4));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= (((arr_1 [i_0]) < (max(32761, (arr_1 [i_0])))));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_16 = (min(var_16, (((((arr_4 [i_1 - 1] [i_1 - 1]) ? (arr_5 [i_1 + 1] [i_1 + 1]) : var_0))))));
            var_17 = (arr_1 [i_0]);
            arr_7 [i_1] = ((max((arr_4 [i_1 + 2] [i_1 + 2]), (arr_4 [i_1 - 1] [i_1 - 1]))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_18 = (min(var_18, ((min(((((((var_14 ? var_4 : var_12))) ? (arr_8 [i_0]) : (arr_6 [i_2])))), (((arr_8 [i_2]) & var_8)))))));
            /* LoopNest 3 */
            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_19 = (min(var_19, ((max(1389694696663873230, (var_10 % 1))))));
                            var_20 = (min(var_20, (~3094613209)));
                            arr_16 [i_3] [i_4] [i_3] [i_3] [i_2] [i_0] = -588558634;
                            arr_17 [i_5] [i_0] [i_0] [i_0] [i_0] |= 810072304;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            var_21 = (min(var_21, (arr_4 [i_6 + 3] [i_6 + 1])));
            arr_22 [i_6] [i_6] = (((arr_21 [i_6] [i_6 + 3]) ? -1249906919 : 2116630628));
            var_22 = (arr_1 [i_6]);
            var_23 = var_1;
            arr_23 [i_6] = (arr_15 [i_0] [i_0] [i_0]);
        }
        for (int i_7 = 4; i_7 < 16;i_7 += 1)
        {
            var_24 = (max(1, (min(var_6, (arr_20 [i_7] [i_7])))));
            var_25 = (!-10451);
        }
    }
    for (int i_8 = 3; i_8 < 13;i_8 += 1) /* same iter space */
    {
        var_26 = ((72 && (arr_0 [i_8])));
        arr_28 [i_8] = (arr_19 [8] [8]);
        arr_29 [i_8] = -4408;
    }
    /* vectorizable */
    for (int i_9 = 3; i_9 < 13;i_9 += 1) /* same iter space */
    {
        var_27 = (15872 & 0);
        var_28 |= (var_4 == (arr_3 [i_9 + 2]));
        var_29 = (((arr_32 [i_9] [i_9]) ? 40094 : ((((arr_10 [i_9] [i_9] [i_9] [i_9]) != (arr_18 [i_9] [i_9] [i_9]))))));
    }
    #pragma endscop
}
