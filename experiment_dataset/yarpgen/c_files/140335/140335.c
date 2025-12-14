/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = (max((min(var_18, (max(-5907, (arr_0 [i_1]))))), var_11));
                var_19 = (arr_3 [i_0 + 4] [i_0 + 3]);

                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_1] [i_2] [1] = (!1);
                    arr_12 [i_0] [i_1] [i_0] = (8326 > 39660);
                    arr_13 [2] [i_1] [2] |= ((0 << (511 - 511)));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    var_20 ^= 161;
                    arr_17 [i_0] = ((((min(164, var_12))) ? var_17 : (((arr_7 [i_0 + 2]) ? (arr_7 [i_0 + 4]) : 1))));
                }
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    var_21 = (max(20396, (max((161 - var_0), ((52 ? var_16 : 788492880))))));
                    arr_20 [i_0 - 1] [i_0 - 1] [i_4] = (((max(59242, 0))) ? (((max(var_1, var_11)))) : (((!-15) ? var_0 : (arr_2 [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_22 = (max(((((((var_8 ? 61724 : -2038347373))) ? var_9 : -var_4))), ((var_13 ? 0 : (arr_3 [i_0 + 2] [i_0 + 2])))));
                                var_23 = 1095428808;
                                var_24 = 0;
                            }
                        }
                    }
                    var_25 = (((arr_24 [i_0] [i_1] [i_4]) != var_11));
                }
                /* vectorizable */
                for (int i_7 = 4; i_7 < 9;i_7 += 1)
                {
                    arr_28 [i_1] [i_7] = var_2;
                    var_26 = (((-9223372036854775807 - 1) ? 788492869 : 9776157725961871725));
                }
                var_27 = var_10;
            }
        }
    }
    var_28 = var_15;
    var_29 = 2624582894;
    #pragma endscop
}
