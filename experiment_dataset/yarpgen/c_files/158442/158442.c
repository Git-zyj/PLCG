/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = ((-110 ? (min(-1603915004, ((3374295501 / (arr_1 [i_0]))))) : var_3));
                var_21 = (15 & 18446744073709551604);
            }
        }
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_22 = (max(var_22, ((((arr_1 [10]) ? (min(((max(127, 0))), (-807300482 * 4294967295))) : (min((var_14 != var_15), (max(var_1, var_0)))))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    {

                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            var_23 = (arr_11 [i_2] [i_3] [i_2]);
                            arr_18 [i_2] [i_3] [i_4] [i_2] [i_6] = (((var_8 ? (arr_11 [i_2] [2] [i_4 - 1]) : 807300482)));
                        }
                        arr_19 [i_2] [i_3] [i_2] [i_4] [i_3] = ((((!var_15) <= (2293810822 == -127))) ? (((var_13 ? (arr_9 [i_5 - 2] [1] [i_4 - 1]) : (arr_9 [i_5 - 1] [i_5 - 1] [i_4 - 1])))) : var_12);
                        var_24 = -119;
                        var_25 = (-(min((arr_13 [i_4 - 1] [i_4 - 1] [i_2] [i_4 - 1] [i_4]), (arr_12 [i_2] [i_4 - 1] [i_4 - 1]))));
                        arr_20 [i_2] [i_3] [i_3] [8] [i_3] = (max(26, (min(-1, 1387523979))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
