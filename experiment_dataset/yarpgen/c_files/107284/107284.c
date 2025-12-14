/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((~(((var_11 % var_0) ? ((var_11 ? var_12 : var_4)) : (!var_12)))));
    var_17 = var_9;
    var_18 += ((!(!var_3)));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_0;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_19 = (((((var_0 ? 255 : (!var_15)))) ? (-82 + var_15) : (((arr_2 [i_0]) ? ((((arr_11 [i_0] [1] [i_0]) * var_2))) : (max(var_6, (arr_4 [i_0] [i_0] [i_0])))))));
                        var_20 = ((~(arr_9 [i_0] [1] [7] [i_3])));
                        var_21 = (arr_0 [i_3] [i_3]);
                        arr_12 [i_1] [i_0] = var_1;
                    }
                }
            }
        }
        var_22 ^= (max((((((arr_0 [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [i_0] [0]) : var_5)) % (var_2 != var_1))), (((!var_14) * (~var_5)))));
        var_23 = ((((max((((!(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))), (((arr_6 [i_0]) ? var_9 : var_12))))) ? (((arr_0 [i_0 + 1] [i_0]) ? (max(var_7, (arr_1 [i_0]))) : (((max(var_2, 72)))))) : ((max((var_6 * var_12), ((var_1 ? var_12 : -1268841298)))))));
        var_24 = ((!(((var_13 ? (arr_2 [i_0]) : var_6)))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_25 = ((((max((arr_14 [10]), var_0))) ? var_0 : (((var_2 % ((32199 ? (arr_13 [i_4]) : (arr_14 [8]))))))));
        var_26 = var_13;
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_27 = ((((((!var_6) ? (var_14 || 1268841297) : 1268841301))) * ((~((var_13 ? 1 : var_6))))));
        arr_17 [9] [i_5] = ((((max(-31903, ((var_13 ? 49995 : (arr_13 [i_5])))))) ? (arr_9 [i_5] [i_5] [i_5] [i_5]) : var_4));
    }
    #pragma endscop
}
