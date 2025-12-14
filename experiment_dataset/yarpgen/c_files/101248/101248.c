/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_20 = (min(var_20, (((var_5 % (arr_0 [i_0] [i_1]))))));
            arr_6 [i_0] = (((arr_3 [i_0] [6] [i_1]) ^ (arr_3 [i_0] [i_1] [i_0])));
            var_21 ^= ((!((((arr_1 [4]) / var_6)))));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_11 [i_0] [11] &= (!-12231);
            var_22 = (max((arr_8 [i_0]), (((((arr_0 [i_0] [i_2]) / var_4)) % (min(var_15, -98))))));
        }
        var_23 = (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 11;i_4 += 1)
            {
                {
                    arr_16 [i_0] = 312427044807898190;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_24 = ((~(min((arr_8 [i_5]), (arr_8 [i_0])))));
                                var_25 -= (max((arr_19 [i_4] [i_3] [i_4 - 3] [i_5] [i_4 - 3]), (arr_8 [i_0])));
                                arr_21 [i_0] [i_0] [i_0] [1] [i_6] = ((((-(arr_18 [i_4 - 1] [11] [i_3 - 1] [11]))) / (arr_9 [i_4 + 3])));
                                var_26 ^= (((((arr_5 [i_4 - 3] [i_3 + 1]) * (arr_5 [i_4 + 1] [i_3 - 1]))) / (((arr_5 [i_4 - 1] [i_3 + 2]) * (arr_5 [i_4 + 1] [i_3 + 2])))));
                                var_27 += (arr_14 [i_3]);
                            }
                        }
                    }
                }
            }
        }
        var_28 = (min(var_28, ((min((((((arr_19 [i_0] [i_0] [10] [i_0] [i_0]) * var_19)))), (((var_16 & -3134242402015107439) % (max(var_6, (arr_8 [i_0]))))))))));
    }
    var_29 = (min(var_29, 65));
    var_30 = (min(var_30, var_13));
    var_31 = var_6;
    #pragma endscop
}
