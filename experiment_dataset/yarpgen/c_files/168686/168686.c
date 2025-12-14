/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (((arr_3 [i_0] [i_1]) ? (((-13830 / (arr_4 [i_0])))) : var_0));
                arr_5 [i_0] [i_1] [i_1] &= (((var_2 * (arr_2 [i_0]))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_15 = (((~var_8) & (max(var_8, (arr_10 [i_2] [i_3] [i_4])))));
                        var_16 *= (min(((var_4 - ((31 ? 13829 : (arr_14 [i_5]))))), ((~(~var_1)))));

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_17 += ((((min((arr_7 [i_2]), (arr_13 [i_5])))) == (((((arr_12 [i_2]) / 1)) / var_3))));
                            arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] = -75;
                            arr_18 [i_2] [i_2] [i_2] [i_2] = var_1;
                            var_18 &= -13836;
                            arr_19 [i_2] [i_3] [i_4] [i_5] [i_6] = (((var_7 <= -13836) | (min((var_7 ^ var_12), (-908 % var_11)))));
                        }
                        arr_20 [i_5] [i_4] [i_4] [i_3] [i_3] [i_2] = var_11;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    var_19 = (min(var_19, ((((((var_11 ? (arr_13 [i_2]) : var_6))) ? (max(((min((arr_15 [i_2] [i_7] [i_7] [i_7] [i_8]), var_3))), var_4)) : (!var_1))))));
                    arr_27 [i_8] [i_7] [i_2] = (((((((var_7 << (var_2 - 12407))) <= (var_12 != var_4)))) <= var_12));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    arr_33 [i_9] [i_9] [i_10] = 13835;
                    var_20 = var_9;
                    var_21 += ((((((var_3 && ((max(var_5, 13835))))))) - (~var_13)));
                }
            }
        }
        var_22 = (((min((arr_24 [i_2]), (arr_6 [i_2]))) | ((var_4 ? 13830 : (arr_15 [i_2] [i_2] [i_2] [i_2] [i_2])))));
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        var_23 = (!var_0);
        arr_38 [i_11] [i_11] = (((((arr_37 [i_11] [i_11]) || var_13)) ? (min(((var_5 ? var_0 : var_9)), var_0)) : ((((arr_36 [i_11]) || (var_7 || var_8))))));
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            {
                var_24 += 50128;
                var_25 &= var_5;
            }
        }
    }
    #pragma endscop
}
