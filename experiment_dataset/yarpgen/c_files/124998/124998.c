/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 += (max((((((255 ? var_1 : 14))) ? 14 : (arr_1 [i_0]))), 38986));
                arr_6 [i_1] = var_8;

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] = ((!(0 && var_8)));
                                var_12 -= var_0;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_13 ^= 4294967295;
                                arr_20 [i_6] [i_1] [i_5] [i_5] [i_0] [i_1] [i_0] = (max((((!((5 || (arr_13 [i_1] [i_1])))))), ((var_3 ? var_1 : 1))));
                                arr_21 [i_1] [i_1] [i_0] [i_1] = 1;
                            }
                        }
                    }
                    arr_22 [i_1] [i_1] [i_1] = (-83 ? (arr_3 [i_0]) : (arr_3 [i_1]));
                    arr_23 [i_1] [i_1] [i_1] = ((-14448 ? (((0 ? 11 : var_1))) : ((var_9 ? (arr_15 [i_2] [i_1]) : -51))));
                }
                for (int i_7 = 0; i_7 < 0;i_7 += 1)
                {

                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        arr_32 [i_0] [i_1] [i_1] = var_0;
                        arr_33 [i_0] [i_1] [i_0] [i_0] = (arr_29 [i_1] [i_7 + 1] [i_7 + 1] [i_0] [i_0]);
                    }
                    for (int i_9 = 3; i_9 < 19;i_9 += 1)
                    {
                        arr_38 [i_1] [i_7] [i_7 + 1] [i_9] [i_1] [i_7] = 2702307110;
                        var_14 = ((var_1 ? var_4 : ((((arr_8 [i_1] [i_7] [i_1]) ? var_2 : 1)))));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_15 = (((arr_0 [i_11]) << (65535 - 65534)));
                                var_16 -= (arr_19 [i_11] [i_10] [i_7] [i_1] [i_0]);
                                arr_43 [i_1] [i_1] = 53;
                            }
                        }
                    }
                    arr_44 [i_1] = -36;
                }
                arr_45 [i_0] [i_1] [i_1] = ((!(!var_9)));
            }
        }
    }
    var_17 = var_4;
    #pragma endscop
}
