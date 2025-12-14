/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_14 = (max((max((var_10 / var_0), var_7)), var_9));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        var_15 += ((((var_8 ? var_6 : var_3)) << (var_7 + 806244417)));
                        var_16 = (((((var_8 ? var_13 : var_11))) ? (var_9 & var_2) : (var_2 % var_1)));
                        var_17 = (min(var_17, ((((((var_13 ? var_8 : var_2))) ? ((var_10 ? var_3 : var_7)) : ((var_3 ? var_1 : var_5)))))));
                        arr_13 [i_2] [i_1] [18] [i_2] [i_2] [i_2] = ((var_3 ? var_12 : var_7));
                        var_18 = (min(var_18, (((var_9 ? var_4 : var_4)))));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_17 [i_2] [i_2] [i_2] [i_2] = (((min((min(var_7, var_4)), var_1))) ? ((max(((var_12 ? var_4 : var_8)), var_1))) : (min((max(var_0, var_6)), ((min(var_5, var_11))))));
                        var_19 = (max(var_19, (((var_2 ? (((max(var_2, var_7)) << var_0)) : ((min(var_8, var_10))))))));
                        var_20 = ((((((((var_7 ? var_1 : var_8))) ? ((var_6 ? var_6 : var_12)) : var_9))) ? (((((var_11 ? var_7 : var_11))) ^ ((var_7 ? var_6 : var_10)))) : (((((max(var_11, var_0))) & var_11)))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_2] [i_2] [i_5] [i_6] = (((((var_3 ? ((var_7 ? var_5 : var_12)) : (var_10 - var_10)))) ? var_7 : var_10));
                                var_21 -= ((((((var_7 ? var_8 : var_8))) ? ((var_6 ? var_11 : var_10)) : var_7)) * ((((var_7 || var_9) < ((var_2 ? var_11 : var_12))))));
                            }
                        }
                    }
                    var_22 = ((((var_6 / (((min(var_8, var_10)))))) + (((var_7 ^ (var_2 <= var_6))))));
                }
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    arr_26 [i_0] [i_1] [i_0] [i_1] = ((var_11 || (((var_12 ? var_13 : var_0)))));
                    arr_27 [i_0] [i_1 - 1] [i_1] [i_1] = (max((var_8 - var_4), (((var_7 + 2147483647) << (var_1 - 131)))));
                }
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        {
                            var_23 &= (min((max(var_9, (max(var_12, var_7)))), ((var_6 ? var_12 : (((var_13 ? var_13 : var_13)))))));
                            var_24 |= ((((((var_11 / var_10) / var_7))) < (max((max(var_12, var_3)), var_4))));
                        }
                    }
                }
                arr_33 [i_0] &= var_7;
            }
        }
    }
    var_25 &= (((((((max(var_3, var_5))) - ((var_2 ? var_2 : var_1))))) ? ((((max(var_0, var_12))) ? ((var_12 ? var_6 : var_1)) : ((var_6 ? var_0 : var_6)))) : ((((((var_10 ? var_3 : var_13))) ? (var_3 / var_3) : var_5)))));
    var_26 = (max(var_26, ((((((var_3 ? var_3 : ((var_6 ? var_1 : var_12))))) && ((((max(var_13, var_6))) && (var_7 >= var_12))))))));
    #pragma endscop
}
