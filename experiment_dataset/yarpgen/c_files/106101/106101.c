/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((~((var_4 ? -52235 : (max(var_4, var_8))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] = (((((var_7 ? var_12 : var_11))) ? (((var_2 ? var_14 : var_13))) : ((var_13 ? var_14 : var_7))));
                        var_17 = (min(var_17, (((!((min(var_6, (~var_4)))))))));
                        arr_13 [0] [i_0] = (((((var_0 ? var_9 : var_12))) ? ((((max(var_7, var_7))) ? (((var_15 ? var_11 : var_11))) : ((var_11 ? var_6 : var_5)))) : (((~(~var_13))))));
                    }
                }
            }
        }
        arr_14 [i_0] = ((-((max(var_11, var_11)))));
        var_18 = ((-var_1 ? var_1 : -var_3));
        arr_15 [i_0] = var_11;
        var_19 = (min(var_19, var_5));
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 14;i_7 += 1)
                {
                    {
                        arr_30 [i_4] [i_5] [i_7] [i_5] [i_7] [i_7] = (max(var_1, ((min(var_3, var_15)))));
                        arr_31 [i_4] [1] [12] [i_4] |= var_2;
                        arr_32 [i_4] [i_5 - 1] [i_5 - 1] [i_7] = ((((((((var_3 ? var_14 : var_9))) ? ((var_9 ? var_12 : var_0)) : ((var_10 ? var_14 : var_12))))) ? (((max(var_13, var_2)))) : (max((min(var_5, var_10)), var_15))));
                    }
                }
            }
        }
        var_20 = (((((var_9 ? var_1 : var_2))) ? (min(var_11, var_14)) : ((~((var_9 ? var_14 : var_9))))));
        var_21 = ((((((((var_0 ? var_6 : var_14))) ? var_0 : (max(var_10, var_12))))) ? (max(var_10, var_14)) : var_14));
        arr_33 [i_4 - 1] [i_4 + 2] = (((max(var_13, ((var_8 ? var_10 : var_7))))) ? (min(((var_0 ? var_0 : var_6)), ((min(var_4, var_3))))) : (!1708309928));
    }
    var_22 = (((((var_6 ? var_3 : ((13301 ? -49 : -433596346))))) ? ((-(min(var_9, var_10)))) : (!13292)));
    #pragma endscop
}
