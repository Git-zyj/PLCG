/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (((min(((var_11 ? 3536257394 : -2097785481412432441)), var_0))) ? (((((-102 ? var_8 : var_13))) ? var_4 : ((var_13 ? var_13 : 2097785481412432440)))) : (((max((min(var_12, -8625)), var_0)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 -= 120;
                                var_18 += (((min(84, -2097785481412432441))) ? ((((arr_0 [i_2]) && (arr_10 [i_0] [i_1] [i_1] [10] [i_3] [i_1])))) : ((max(var_15, (arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [10])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_19 ^= (max((((arr_9 [i_0] [i_1] [i_1] [i_2] [i_1] [i_6] [i_6]) / (arr_0 [6]))), (arr_13 [i_5] [i_2] [i_0])));
                                arr_17 [i_0] [i_1] [i_5] [i_5] [i_6] [i_1] [10] = 22495;
                                arr_18 [i_0] [i_2] [i_2] [i_2] [i_2] = (((((var_1 ? var_4 : (arr_4 [i_0] [i_1] [i_0])))) ? (2079675050 ^ -22523) : ((((arr_4 [13] [i_5] [i_6]) >= var_11)))));
                                arr_19 [i_0] [i_0] [i_2] [i_0] [i_5] [i_0] &= (((((arr_7 [i_0] [i_5] [i_6]) ? (arr_7 [i_5] [i_2] [i_1]) : (arr_7 [i_0] [i_2] [i_2]))) ^ ((min((arr_7 [14] [i_5] [i_5]), (arr_7 [i_1] [i_5] [i_5]))))));
                                arr_20 [i_2] [i_1] = (max(((var_11 ? (arr_6 [0] [i_1] [i_6]) : -29)), (arr_10 [i_0] [0] [i_0] [12] [i_6] [i_1])));
                            }
                        }
                    }
                }
            }
        }
        var_20 = (min(var_20, (((-((~(arr_0 [i_0]))))))));
        arr_21 [i_0] = (((-18 > var_15) ? (((((-2097785481412432436 ? -1931658018 : 509014683192142484))) ? ((65520 ? 57168 : var_7)) : ((max(39312, -35))))) : ((~(arr_7 [i_0] [i_0] [i_0])))));
        var_21 = (max(var_21, ((((arr_2 [i_0] [16] [i_0]) ? var_1 : ((min(var_7, (((21460 && (arr_15 [8] [14] [i_0] [8] [i_0]))))))))))));
    }
    var_22 = var_3;
    #pragma endscop
}
