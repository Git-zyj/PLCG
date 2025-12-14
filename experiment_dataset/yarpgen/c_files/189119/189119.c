/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_17 = (min(var_17, (((~((-(arr_12 [i_3 - 1] [i_3] [i_1] [i_3 - 1] [i_1] [i_1 + 1] [i_1]))))))));
                            var_18 = 466561105670256383;
                            var_19 -= ((min((min(103, 15840050705315251395)), ((((arr_12 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1] [i_1]) ? var_14 : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4])))))));
                            var_20 = var_10;
                            var_21 = (max(var_21, ((min((min((arr_6 [i_1 - 2] [i_3 - 1] [i_1 - 2] [i_2]), (arr_6 [i_1 - 2] [i_3 - 1] [i_1 - 2] [i_3 - 1]))), ((((arr_1 [i_3 - 1] [i_1 + 1]) ? var_8 : var_1))))))));
                        }
                    }
                }
            }
            var_22 = ((~((3584 ? 221 : ((var_9 ? 674150007 : var_9))))));
            var_23 = (min(-4, 2606693368394300228));
        }
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            arr_17 [i_0] [i_5] = ((-var_7 <= (arr_12 [i_5 - 1] [i_5] [16] [i_5 - 1] [16] [i_0] [i_0])));
            var_24 = (max(var_24, (((-(arr_6 [i_0] [i_5] [i_5] [i_5]))))));
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            arr_31 [i_0] [i_0] [19] [19] [i_9] = var_11;
                            var_25 = (arr_5 [i_0] [9] [3] [i_0]);
                        }
                    }
                }
            }
            var_26 = (max(var_26, (arr_24 [i_6 + 1] [i_6 - 1] [i_6 - 2] [i_6 - 1])));
            arr_32 [i_0] [i_6] = var_12;
            var_27 = (((var_13 * 15840050705315251402) % 17980182968039295248));
        }
        arr_33 [4] [i_0] = (((min(-24, var_2))) | 17980182968039295233);
    }
    var_28 = var_13;
    #pragma endscop
}
