/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (min(var_17, 171));
        var_18 = 31;
        var_19 = var_0;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(var_5, -18446744073709551611));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                        {
                            arr_15 [i_4] [i_3 - 4] [i_2] [i_0] [i_0] &= var_12;
                            var_20 = ((65 & (min((min((arr_8 [i_0] [i_1 + 3] [i_2] [i_1 + 3] [i_4]), var_15)), ((min(99, (arr_12 [i_0] [i_0] [i_0] [6] [i_4] [i_4]))))))));
                            var_21 = (((min(var_3, var_2))));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            var_22 = ((var_10 > (min((arr_8 [7] [i_1] [i_2] [i_0] [i_5]), var_10))));
                            arr_19 [i_0] [i_0] [0] [i_3] [i_5] = (min(var_3, 1));
                            arr_20 [i_5] [i_3 - 1] [i_2 - 1] = ((-1 ^ var_15) && ((((-(arr_5 [i_0] [16] [i_3]))) <= (var_15 >= var_11))));
                            arr_21 [i_0] [i_3] [i_2] [i_0] [i_0] &= min((arr_13 [i_1] [i_1] [i_2 - 1] [i_3] [i_5]), var_16);
                            arr_22 [i_5] [i_3 - 4] [i_2] [i_1 + 1] [i_1] [i_0] [i_0] = (min(var_12, var_2));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_23 = (-1 - 19595);
                            var_24 &= (130 < 1);
                        }
                        var_25 = (min((min(15616249783241372233, 1994686166)), var_7));
                        arr_25 [i_3] [10] [i_2] [i_1 - 1] [i_0] = (min(var_6, 1));
                    }
                }
            }
        }
        arr_26 [i_0] = ((~(min((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_0])))));
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
    {
        var_26 = var_3;
        arr_31 [i_7] = (min(var_5, -var_12));
        arr_32 [3] = (((arr_17 [i_7] [i_7]) ^ ((min(var_9, (arr_2 [i_7]))))));
        var_27 = (~1853756875);
        arr_33 [i_7] = (min(var_15, ((((((arr_28 [i_7]) > (arr_24 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))) >> ((((arr_23 [i_7] [15] [i_7] [22] [i_7] [15] [i_7]) != (arr_0 [i_7] [i_7]))))))));
    }
    for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
    {
        var_28 = var_12;
        var_29 = ((-((min(var_13, var_1)))));
    }
    var_30 = var_8;
    var_31 = (min(var_31, (((var_1 >> (var_12 >> -var_2))))));
    var_32 = (~2467849154);
    #pragma endscop
}
