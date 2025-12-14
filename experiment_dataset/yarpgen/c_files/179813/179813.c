/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_0 ? (!-var_2) : (min((var_3 + var_3), (96 * 0)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (min((arr_0 [i_0] [i_0]), ((853 ? (arr_0 [i_0] [i_0]) : var_4))));
        arr_3 [i_0] = (((((max(-806120441, 64683)))) << (64683 - 64671)));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] &= 52153;
        var_16 = (min(var_16, (arr_4 [i_1])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_10 [8] = 1;

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_17 = (min(var_17, ((max(((-(((-466976932 > (arr_14 [i_2] [i_3] [i_3])))))), (((((max(-940991708, var_3))) != 4085002301721679455))))))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] = (arr_17 [i_6 + 2]);
                            var_18 ^= ((-(~var_6)));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_4;

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_20 = ((-32751 / (arr_11 [i_9] [i_8] [i_7])));
                    arr_34 [i_9] = var_1;
                    arr_35 [i_9] [i_8] = (min(127, var_8));
                }
            }
        }
        arr_36 [i_7] [9] &= (((min(11570905645431093, (((var_11 ? var_9 : var_10))))) % -32726));
        var_21 &= (((~var_10) <= ((((((~(arr_14 [i_7] [i_7] [i_7])))) || 1)))));
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
    {
        var_22 += (((385846411 / 2147483638) << 1));
        var_23 = (min((arr_9 [i_10]), ((((arr_13 [i_10] [i_10]) ? (0 / var_0) : ((var_10 ? 65169 : -1678381033839777672)))))));
    }
    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
    {
        var_24 = ((768 != (min(444426086, -1358609563))));
        var_25 = (min(var_25, ((((69 < (arr_4 [i_11]))) ? (arr_14 [i_11] [i_11] [i_11]) : ((((min((arr_12 [19]), 26))) ? -32758 : (!-7079)))))));
    }
    #pragma endscop
}
