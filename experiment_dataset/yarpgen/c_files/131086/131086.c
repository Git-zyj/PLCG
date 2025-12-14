/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((var_16 ? var_16 : var_9))) ? ((max(var_14, var_7))) : var_18))) ? var_13 : (((var_5 ? (55767 < 157) : (var_9 + var_10)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_21 = ((var_16 ? var_2 : var_7));
        var_22 = (((var_13 == var_1) == var_1));
        arr_3 [i_0] = var_17;
        var_23 = (var_17 / var_6);
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            var_24 = (max((min(var_0, ((var_15 ? var_10 : var_4)))), ((var_12 ? (!var_14) : (var_8 == var_8)))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {
                    {
                        var_25 = (max(((((!var_18) > ((max(var_12, var_7)))))), (((((var_3 ? var_16 : var_18))) ? (((var_0 ? var_14 : var_11))) : (min(var_14, var_17))))));
                        var_26 = ((var_18 ? var_6 : (((!(((var_14 ? var_7 : var_19))))))));
                    }
                }
            }
            var_27 -= (((!var_15) != (var_10 < var_15)));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_28 = (max(var_28, var_17));
                        arr_20 [7] [7] [i_1] [i_1] [10] [i_1 + 2] = ((((((!var_3) ? ((max(var_9, var_19))) : (min(var_5, var_1))))) ? (((((var_11 ? var_19 : var_18))) ? (!var_1) : (min(var_2, var_0)))) : ((var_18 ? var_10 : var_4))));
                        var_29 = (max(var_29, ((((((((((var_2 ? var_6 : var_19))) < (min(var_8, var_9)))))) * (((((var_0 ? var_7 : var_16))) ? var_14 : (min(var_3, var_7)))))))));
                    }
                }
            }
        }
        var_30 ^= ((((max((((var_10 ? var_6 : var_14))), ((var_17 ? var_9 : var_15))))) ? (min(((var_1 ? var_13 : var_4)), var_4)) : (min(((var_15 ? var_13 : var_19)), ((min(var_9, var_7)))))));
    }
    #pragma endscop
}
