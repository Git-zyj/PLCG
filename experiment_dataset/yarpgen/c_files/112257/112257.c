/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((3 ? 31 : -8200857496094404104)), ((max(var_4, (min(220, var_4)))))));
    var_11 = var_8;
    var_12 = (max(((max(256, 15360))), (((var_8 ? 31 : 4294967272)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 = (max(var_13, -405619631547940090));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_2] [i_2] [i_2] [i_0] = ((((min(var_3, (arr_6 [i_2] [2] [2] [i_0] [12] [10]))))) ? ((((max(55, var_8))) ? (-100 & var_1) : ((var_6 ? (arr_6 [i_2] [i_1] [11] [i_1] [i_4] [i_1]) : var_9)))) : var_4);
                                arr_13 [i_0] [i_1] [i_2] [i_2] [i_4] = (901287613 / 1);
                            }
                        }
                    }
                    var_14 += (((((!((((arr_4 [i_1 - 1] [i_2]) ^ (arr_7 [i_0] [2] [i_0] [i_1 - 1] [i_2] [i_2]))))))) & ((max((arr_10 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1]), 0)))));

                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        arr_16 [12] [12] |= ((((arr_2 [i_1 - 1]) ? (20 <= -18721) : (min(var_0, var_5)))) ^ (((((arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1]) < var_0)))));
                        arr_17 [i_0] [i_1 - 1] [i_2] = ((((min((arr_11 [i_0] [i_2] [i_0] [i_1 - 1] [i_5 - 2] [i_5 - 2]), (arr_9 [i_2] [i_2] [i_1] [i_1 - 1] [i_5 - 2])))) <= ((-1 ? var_9 : (arr_9 [i_2] [i_0] [i_1] [i_1 - 1] [i_5 - 2])))));
                        arr_18 [i_0] [i_0] [i_0] [i_2] = max((((!(-3598 || var_3)))), (min(((var_0 ? 12349250348544644421 : (arr_1 [i_5]))), (((-431939291891238201 ? var_7 : -36))))));
                    }
                    arr_19 [i_2] = var_9;
                }
            }
        }
    }
    #pragma endscop
}
