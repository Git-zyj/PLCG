/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((var_10 >= ((-(min(var_9, 126)))))))));
    var_12 = (max(var_12, (((-7478642977301916000 ? (((((-1912992528 ? var_3 : 64))) ? ((var_7 ? 6563250866344667266 : var_1)) : (max(var_0, var_9)))) : var_2)))));
    var_13 = var_1;

    for (int i_0 = 2; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_14 *= ((var_6 ? (min((0 & -15), (arr_0 [i_0 + 1]))) : (max(((1 - (arr_2 [i_0]))), (arr_0 [i_0 + 2])))));
        var_15 = (min(var_15, (((((var_9 < (arr_1 [i_0 - 2] [i_0 + 2]))) ? 64 : (arr_0 [i_0]))))));
        arr_4 [i_0] [i_0] = (!var_1);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((!(arr_3 [i_1] [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 19;i_5 += 1)
                        {
                            var_16 = (min(var_16, (arr_10 [i_1] [i_1] [i_1 + 1] [i_1])));
                            var_17 = ((-var_2 ? (arr_13 [i_1 - 2] [i_2] [1] [i_3]) : 126));
                            var_18 = (max(var_18, (arr_0 [i_5])));
                            var_19 |= ((3724987920 ? -21806 : (arr_8 [i_1] [i_1 - 2])));
                        }

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_20 = (max(var_20, ((((((arr_14 [10] [i_2] [i_4] [i_4] [i_4] [i_4]) & (arr_17 [i_4] [i_4] [i_4] [i_6] [i_4] [i_4])))) < var_9))));
                            var_21 = 11398235006363074647;
                        }
                        for (int i_7 = 2; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_4] [i_3] [i_1] [11] [i_3] = 255;
                            arr_23 [i_4] = (arr_10 [i_1] [i_1] [i_1] [16]);
                            var_22 = ((arr_18 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1] [i_1 + 1]) ? (arr_18 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_1 + 1]) : (arr_18 [i_7 - 2] [i_7 - 1] [i_1 - 1] [i_7 + 1] [i_1 - 1]));
                            var_23 = (((arr_10 [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 2]) ? 70 : 57));
                        }
                        for (int i_8 = 2; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            arr_26 [i_4] [i_2] [i_2] = (arr_17 [i_8] [i_8 - 1] [i_8] [i_4] [i_8 - 1] [i_8]);
                            var_24 |= (((arr_2 [i_1 + 2]) ? (arr_2 [i_1 + 2]) : (arr_2 [i_1 + 2])));
                        }
                    }
                }
            }
        }
        arr_27 [i_1] = (((((arr_11 [i_1 - 2] [i_1] [i_1] [i_1]) || 65535)) ? (arr_18 [i_1 - 2] [i_1 + 1] [i_1] [i_1 + 2] [i_1 - 1]) : 12877));
        var_25 |= (((arr_19 [i_1 - 2] [i_1] [i_1] [i_1 - 1]) * 87));
    }
    var_26 += (var_7 || -10);
    #pragma endscop
}
