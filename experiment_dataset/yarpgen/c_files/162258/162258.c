/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = 13;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_12 &= -12002;
                                var_13 = (min(var_13, (((-(((min(var_5, var_9)) + var_4)))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_14 = (max(((((!var_0) >> (-var_4 - 2228291102044315892)))), (((!-25251) - (max(-8012, (arr_6 [i_5])))))));
        var_15 = (min(var_15, (((-(-29628 ^ 28))))));
    }
    for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
    {
        var_16 = (26 > var_10);
        var_17 = (((arr_17 [i_6 + 1]) != (((arr_18 [i_6 - 1]) ? -26 : (arr_16 [i_6 - 2])))));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_18 = -26;
        var_19 = (max(var_19, ((((arr_16 [i_7 - 2]) & (arr_16 [i_7 - 1]))))));
        var_20 = (min(var_20, var_3));
        var_21 = (arr_20 [i_7] [i_7]);
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
    {
        var_22 += (((((arr_18 [i_8]) ? (arr_20 [i_8] [4]) : var_2)) << (((116 & 32760) - 111))));
        var_23 += (arr_22 [i_8] [i_8]);
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                {
                    var_24 *= (((arr_23 [i_8 - 2]) ? (arr_23 [i_8 + 1]) : (arr_23 [i_8 - 2])));
                    var_25 = (min(var_25, ((((arr_25 [i_8 + 1]) * (arr_23 [i_8 - 1]))))));
                    var_26 = (max(var_26, ((((arr_16 [i_8 - 2]) ? (arr_19 [i_9]) : ((var_2 << (arr_26 [i_8]))))))));
                    var_27 = ((!(arr_26 [i_8 - 2])));
                }
            }
        }
    }
    #pragma endscop
}
