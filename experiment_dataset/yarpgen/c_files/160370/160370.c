/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_18 = (min(var_18, (!var_14)));
        var_19 -= (-32767 - 1);
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 17;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_15 [i_1] = (var_4 < 9005000231485440);
                        arr_16 [i_1] [i_2] [i_3] [i_2] = (((arr_10 [i_3 + 1] [i_3 - 2] [i_3 - 4]) != (arr_0 [i_1] [i_2])));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        var_20 -= (~0);

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_21 -= arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1];
                            var_22 = var_2;
                            var_23 = (var_0 ? var_11 : (arr_4 [i_5 + 1]));
                            var_24 = var_2;
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_25 = (((arr_4 [i_3 - 2]) ? ((5992262860369544288 ? (arr_13 [i_5]) : var_5)) : (var_0 > var_14)));
                            var_26 = ((var_7 ? (arr_22 [i_3] [i_3 + 1] [i_3] [i_3 - 3] [i_3] [i_3]) : (arr_12 [i_5 + 2])));
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_27 -= (((((arr_14 [i_1] [0] [i_3 - 2] [i_5 - 2]) ? var_11 : (arr_7 [i_5 + 2] [i_8])))) && (1577310629 - var_1));
                            var_28 = (((arr_19 [i_5] [i_5] [i_5 - 1] [i_5 + 1] [i_8] [i_3 - 1] [i_1]) ? var_13 : (arr_19 [i_1] [i_2] [i_3 - 2] [i_5] [i_5] [i_5] [i_8])));
                        }
                    }
                    var_29 &= (var_11 % 2490358187884322425);
                    var_30 = (min(var_30, ((~(max((var_5 || -1), (arr_17 [i_1] [i_3 - 2] [i_3 - 2] [i_3 - 2])))))));
                }
            }
        }
    }
    var_31 = var_13;
    var_32 -= (!var_11);
    var_33 -= ((((max((var_5 != var_9), ((var_3 ? 1 : var_13))))) ? ((((23917 >= ((var_16 ? var_14 : var_16)))))) : (((0 << 0) ? (((3 ? var_14 : var_6))) : 35940))));
    #pragma endscop
}
