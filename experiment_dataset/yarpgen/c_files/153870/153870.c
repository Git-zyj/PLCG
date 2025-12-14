/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;
    var_15 = ((((!((max(1, var_1))))) ? (~var_8) : var_11));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (max((arr_0 [i_0]), (((arr_1 [i_0]) ? (!1) : 1))));
        var_17 = 1;
        var_18 = (arr_1 [i_0]);
        arr_2 [i_0] = var_4;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_19 -= ((((((arr_0 [i_1]) & (arr_0 [i_1])))) ? (((min((arr_1 [8]), var_10)))) : -2114577719571133143));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 7;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_20 = ((((((arr_1 [i_1]) || (arr_10 [i_1] [i_2] [6] [i_4])))) ? ((((((arr_1 [i_2]) ? var_11 : (arr_10 [3] [i_2] [0] [9])))) ? ((((arr_13 [i_1] [i_2] [i_2] [i_2] [i_2]) && 22320))) : (arr_1 [2]))) : ((-4217299475831979872 ? (var_11 && var_0) : (((7883540190313038794 && (arr_12 [i_1] [i_2]))))))));
                        var_21 = (((((((~(arr_0 [i_2]))) <= (arr_3 [2] [1]))))));

                        for (int i_5 = 2; i_5 < 7;i_5 += 1) /* same iter space */
                        {
                            arr_17 [7] [7] [7] [i_4] [0] [i_2] [i_2] = (arr_14 [i_3] [i_2] [i_3]);
                            arr_18 [i_5] [i_2] [i_3] [i_4] [i_5] = min(var_2, 16156);
                            var_22 *= ((!(((-(arr_3 [i_1] [i_2]))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 7;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_1] [i_2] [i_3 - 2] [8] [i_6] [i_1] [i_4] |= (((arr_20 [8] [i_3 + 2] [i_4]) ? var_13 : (((arr_20 [i_1] [i_2] [3]) ? var_1 : var_8))));
                            arr_22 [i_1] [i_2] [i_2] [i_4] [5] [i_3] [i_1] = (((arr_15 [i_1] [i_2]) ? ((~(arr_3 [7] [i_4]))) : (!255)));
                            var_23 = (min(var_23, var_0));
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 7;i_7 += 1) /* same iter space */
                        {
                            var_24 = (13120073612063201628 ? (arr_14 [i_4] [i_2] [i_3 - 1]) : (arr_14 [i_4] [i_2] [i_3 - 1]));
                            var_25 = var_0;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
