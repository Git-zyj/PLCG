/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_18 = ((-1096342067914331240 == (((-1096342067914331240 ? (arr_0 [i_0 + 1] [i_0 + 1]) : ((117 | (arr_0 [i_0] [i_0]))))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_19 |= ((arr_0 [i_0 - 1] [i_0 + 1]) ? ((-978680651 ? var_15 : (arr_3 [i_0]))) : 16782);
            var_20 = (arr_1 [i_0 + 1] [i_1 + 1]);
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_21 = 0;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_17 [i_2] [i_2] = 1096342067914331240;
                            var_22 = 0;
                        }
                    }
                }
            }
        }
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            arr_20 [i_6] [1] [i_6 + 1] = ((-704126665 ? (arr_4 [6]) : (min(17, ((max(var_1, (arr_2 [1]))))))));
            var_23 = (min(var_23, (((!(arr_1 [i_0] [i_6]))))));
            arr_21 [i_0 - 1] [i_0 + 1] [i_0 + 1] = 9223371968135299072;
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        {
                            arr_31 [i_9] = ((var_3 + ((((var_6 ? (arr_10 [i_0] [i_6 + 1] [i_7] [i_8]) : 484850986)) - (((arr_4 [i_9]) - 1))))));
                            arr_32 [i_9] = (min((((!(((1 ? 0 : var_2)))))), 2030699942));
                            arr_33 [i_9] = ((0 ? ((((arr_9 [i_9] [i_9]) ? 5 : (arr_19 [i_7])))) : (((((-3631222438543256579 ? 0 : (-127 - 1)))) ? (min((arr_1 [i_0] [i_0]), (arr_24 [i_0]))) : var_4))));
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            var_24 = ((var_16 != (arr_27 [i_0] [i_0] [i_0 + 1] [i_0])));
            var_25 ^= (min(var_14, -1582851727));
        }
    }
    var_26 = (((min(((min(28672, var_5))), -1096342067914331216)) / var_8));
    #pragma endscop
}
