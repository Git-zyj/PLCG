/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_19 = ((-((var_12 ? 10 : 0))));

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_20 = ((+((+(((arr_10 [i_0] [i_1] [i_2] [i_3] [i_3]) ? -13634 : var_16))))));
                        var_21 = ((12255 ? (((4294967295 ? -7504 : 117))) : ((-((793395941 ? (arr_4 [i_0] [i_3]) : var_14))))));
                        arr_12 [i_3] [i_2] [i_1] [i_0] = (((((-(((arr_1 [i_0]) ? (arr_8 [i_0] [i_1]) : -22228))))) ? (((var_6 ? -5005 : (arr_9 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3])))) : (((!(arr_11 [i_3] [i_3] [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        var_22 = (((arr_14 [i_0] [i_1] [i_2] [i_4]) ? (((-(arr_14 [i_0] [i_1] [i_0] [i_0])))) : var_17));
                        var_23 = ((-(((arr_13 [i_4] [i_2] [i_1] [i_0]) ? 255 : var_12))));
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_24 = ((0 ? 8783309883883289955 : 10));
                        arr_18 [i_0] [i_0] [i_0] [i_5] [i_0] = ((~((13924 ? 1 : 0))));
                    }

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_21 [i_6] = ((~(((((34359738367 ? var_11 : var_1))) ? -4119875322 : ((88 ? var_17 : 1986))))));
                        var_25 = (max(var_25, ((((((-(((arr_11 [i_0] [i_1] [i_1] [i_2] [i_6] [i_6]) ? var_11 : (arr_16 [i_0] [i_0] [i_2] [i_2] [i_6])))))) ? ((-13925 ? var_5 : (arr_5 [i_1]))) : ((65535 ? (((-(arr_4 [i_0] [i_6])))) : -var_14)))))));
                        arr_22 [i_0] [i_0] [i_0] = (((((var_8 ? (((-(-32767 - 1)))) : ((-32214 ? var_1 : var_14))))) ? (((~var_6) ? var_3 : (arr_6 [i_0] [i_1] [i_2]))) : (~var_9)));
                    }
                }
            }
        }
    }
    var_26 = ((((var_11 ? var_5 : 40643))));
    var_27 = 1;
    #pragma endscop
}
