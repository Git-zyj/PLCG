/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 += ((var_13 >= (min((arr_5 [i_0] [i_0] [i_0]), (arr_0 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = (0 - 255212678);
                                arr_15 [i_0] [i_1] [i_4] = (-(((!(1830027285 <= -1)))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    arr_20 [i_5] = ((var_8 ? ((var_8 * (((min((arr_16 [9] [9] [0]), var_10)))))) : (min((((var_12 ? (arr_18 [i_0] [i_0 - 1] [i_0]) : (arr_16 [i_0] [i_5] [i_5])))), ((var_8 + (arr_7 [i_0] [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_25 [i_6] [i_5] [i_5] [i_5] [i_8] = (((max((((arr_1 [i_6]) - var_11)), (((var_2 ? (arr_2 [i_0]) : var_5)))))) ? (((max(var_5, (arr_10 [i_8] [i_8] [i_8 + 1] [i_8 + 3] [i_8 + 2]))))) : (max(2464940022, (((var_8 ? var_2 : var_1))))));
                                arr_26 [i_0] [i_5] [i_6] [i_6] [i_8] = (arr_7 [i_0] [14] [i_6]);
                            }
                        }
                    }
                    var_17 += ((var_12 + (((var_4 <= (((1 ? 2615165502 : 4039754618))))))));
                }
            }
        }
    }
    var_18 = (max(1821991085, (max(9622045095931023374, 17882152441181609250))));
    var_19 = (min(((((var_13 ? var_10 : var_0)))), ((var_5 ? var_12 : ((min(var_6, var_3)))))));
    var_20 = (((((((var_1 ? var_13 : var_0))) || var_10)) || var_5));
    #pragma endscop
}
