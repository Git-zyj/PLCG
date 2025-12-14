/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_11 ? ((0 ? 1650011254 : var_0)) : var_3))) ^ (min(-var_12, (min(32767, 2803452434))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [3]);
        var_21 = (min(var_21, (arr_0 [2])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_8 [3] = ((-(arr_4 [i_1] [i_2])));
            arr_9 [i_2] [i_2] [i_1] = var_4;
            var_22 += ((var_12 + (arr_3 [i_2])));
            arr_10 [3] = ((arr_7 [i_1]) ? var_15 : (arr_6 [i_1] [i_2] [i_2]));
        }
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            var_23 = (min(var_23, var_13));
            arr_14 [i_3] [i_1] = var_4;
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            arr_18 [i_1] [i_4] = ((((max((max((arr_15 [i_4]), (arr_3 [1]))), (arr_4 [i_4] [i_1])))) ? var_3 : (min(var_9, ((-(arr_3 [i_1])))))));
            arr_19 [i_1] [7] [i_1] = (!((((arr_4 [i_4] [i_1]) * (arr_4 [i_4] [i_1])))));

            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                arr_23 [i_5] = ((~((+((((arr_0 [i_1]) != (arr_20 [i_1] [i_4]))))))));
                var_24 = (max(var_24, var_19));
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_32 [i_1] [i_4] [i_4] [i_4] &= (((((arr_0 [i_7]) == (arr_12 [i_6] [i_4] [i_6]))) ? (max(1491514862, var_15)) : 0));
                        var_25 = var_2;
                        arr_33 [i_1] [i_1] [i_4] [i_6] [i_7] = (min(-610588806, 2803452434));
                    }
                }
            }
        }
        var_26 = (((var_2 | (((1 ? 3624315491838062561 : 17))))));
    }
    #pragma endscop
}
