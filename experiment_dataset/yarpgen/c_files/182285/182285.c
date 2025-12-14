/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_1] [i_2] [i_0] [i_4] [i_4] [i_3] = ((~(((arr_11 [i_0] [i_1] [i_4]) ? (arr_11 [i_0 + 1] [9] [i_0 - 1]) : (arr_11 [i_4] [i_3] [i_2])))));
                                var_15 = (max((arr_5 [6] [i_2] [4]), ((((arr_6 [i_0] [i_0] [i_2] [i_4]) ? (arr_10 [i_0] [1] [6] [i_4]) : var_8)))));
                                var_16 = (2896 <= 4294967295);
                                arr_16 [i_0] [i_1] [0] [i_0] [0] [i_0] [11] = (((arr_2 [i_2]) ? (((((var_8 >> (var_12 - 63773)))) ? (arr_1 [i_0] [i_0]) : (((min(var_4, var_12)))))) : ((((((-2896 ? 2895 : -8421990827991938461))) ? (max(-3373199686187107612, var_6)) : (arr_4 [7] [11] [i_4]))))));
                                var_17 = var_2;
                            }
                        }
                    }
                    var_18 = (max((((arr_1 [i_0 - 2] [i_0]) * (arr_1 [i_0 - 1] [i_0]))), (((!(arr_1 [i_0 + 2] [i_0]))))));
                    var_19 = (((((((min((arr_8 [i_0]), 1))) ? (~18446744073709551615) : (((var_11 ? 3058320280657021251 : -2896)))))) ? (max((min((arr_4 [11] [8] [i_0]), (arr_12 [i_2] [11] [11] [6]))), -748842313)) : (arr_3 [i_0])));
                }
            }
        }
        var_20 = (arr_2 [4]);
    }
    var_21 = (max(var_21, var_10));
    #pragma endscop
}
