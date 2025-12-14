/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 += ((((max((28 + -23), ((max(var_6, 22553)))))) + ((+((15610 ? (arr_4 [4] [4] [i_1] [i_1]) : var_2))))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        var_16 = (max(var_16, (arr_1 [i_2])));
                        arr_8 [i_0] [i_1] [0] [i_3] [10] [12] &= (((arr_2 [i_0]) & var_13));
                        var_17 += ((((~(arr_7 [i_0] [i_1] [11]))) + var_10));
                    }
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        var_18 = (max(var_18, (max((((((var_3 ? var_0 : var_6))) ? (min(-32747, var_1)) : var_12)), (((((max(-8256184697087406690, 0))) ? -1067440274 : (var_8 + -23))))))));

                        for (int i_5 = 1; i_5 < 12;i_5 += 1) /* same iter space */
                        {
                            var_19 = max((((-(32747 % 22553)))), (~var_5));
                            var_20 = (min(var_20, ((((arr_5 [i_5 + 1] [i_4 - 1] [i_2 + 3] [i_0]) == (((var_6 & var_11) ? ((max(var_10, var_3))) : (arr_6 [i_0] [i_0] [i_2 + 2] [i_4] [4]))))))));
                        }
                        for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_2 - 1] [i_0] = ((10695272509223927638 ? (arr_10 [i_0] [i_1] [i_2] [i_6]) : ((-1403582306 ? 252 : 32747))));
                            var_21 = (max(var_21, (arr_14 [i_6] [i_2] [9] [i_2 - 2] [i_6 + 1])));
                            var_22 = ((((((arr_16 [i_0] [i_2 - 2] [i_0]) ? (arr_16 [i_0] [i_2 - 2] [i_0]) : (arr_7 [i_4 - 1] [i_2 - 1] [i_2 + 2])))) ? (var_11 + var_6) : (min((arr_17 [1] [1] [i_2 - 3] [i_4 - 1] [1] [i_6 - 1]), 57))));
                        }
                        arr_19 [i_0] = (max(var_13, (min(var_9, var_6))));
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_0] = var_11;
                        arr_25 [i_0] [11] [i_0] = (max((max(-32747, (arr_1 [i_7]))), (~-74219438457719473)));
                    }
                }
            }
        }
    }
    var_23 += ((((min((!-32747), -var_2))) ? (((var_0 | var_11) ^ var_5)) : var_11));
    #pragma endscop
}
