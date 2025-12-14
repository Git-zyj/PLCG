/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, 4194296));
    var_21 = (!35184372088831);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_22 = (min(var_22, (arr_8 [i_3] [16] [i_2] [i_3])));
                            var_23 += (-16 < -1);
                        }
                    }
                }
                arr_12 [i_0] = ((1 % (max(var_7, (arr_3 [i_0] [11] [i_0])))));

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_24 = ((((127 ? (arr_3 [i_0] [16] [i_0]) : (arr_4 [16])))));
                    var_25 = (((arr_4 [0]) ? (((var_13 / 6144) + ((9223372036854775807 ? 0 : -13)))) : ((-(!1)))));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_0] [i_0] [i_0] = (-((1 ? 7 : (arr_3 [i_0 + 1] [i_0 + 3] [i_0]))));
                    var_26 = 1;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_27 = (max(var_27, -1));
                    arr_22 [i_0] [i_0] [i_0] = var_10;
                }
                var_28 = (min((((~(arr_0 [i_0])))), ((32767 ? var_1 : 18446744073709551598))));

                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    arr_27 [i_0] [i_0] [17] = var_3;
                    var_29 = ((8 < (((arr_1 [i_0]) ? -15 : ((2147483647 ? -4 : 1))))));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_30 *= ((!((((((-127 - 1) > 17592186044415))) < var_14))));
                                var_31 = (arr_4 [7]);
                                arr_33 [1] [i_0] [12] = ((((((!(arr_26 [i_0] [i_0 - 3] [i_8 + 1]))))) | (arr_25 [i_8] [i_0] [2] [i_0])));
                                var_32 = (max(var_32, 4));
                            }
                        }
                    }
                }
            }
        }
    }
    var_33 = (min(var_33, 288230371856744448));
    var_34 = (min(var_34, 268435455));
    #pragma endscop
}
