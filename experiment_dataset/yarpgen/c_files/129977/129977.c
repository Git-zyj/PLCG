/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (max(var_13, (max((var_15 ^ var_16), (var_12 == var_7)))));
                    arr_9 [i_0] [i_0] [i_0] = var_15;
                    arr_10 [i_0] [i_0] [i_0] [i_0] = var_17;
                    var_18 = var_16;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 8;i_7 += 1)
                        {
                            {
                                arr_23 [i_3] [i_6] [i_3] [i_6] [i_3] = var_5;
                                arr_24 [i_3] [i_3] [i_3] [i_6] [i_3] [i_6] [i_6] = (((((var_9 / (var_9 >= var_16)))) == (((var_8 ^ var_6) ^ var_1))));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_19 |= var_1;
                        var_20 |= (max(var_0, (min((var_3 == var_13), var_5))));
                        arr_29 [i_3] [i_3] [i_8] [i_3] = ((((var_9 ^ ((max(var_1, var_1))))) == (((var_5 / var_16) / ((min(var_15, var_0)))))));
                    }
                    var_21 += ((var_0 == (max(var_3, (var_6 ^ var_6)))));
                }
            }
        }
    }
    var_22 = (max((min((min(var_3, var_3)), var_17)), ((((min(var_4, var_8)) >= var_8)))));
    var_23 -= (((((max((max(var_0, var_15)), (var_15 == var_8))))) ^ var_14));
    #pragma endscop
}
