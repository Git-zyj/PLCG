/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = -var_5;

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            arr_16 [i_0] [11] [i_3] [i_3] [i_0] [i_4] = ((min((arr_5 [i_0] [i_2] [i_3 - 1]), 24682)));
                            arr_17 [i_3] [i_3] [i_2] [i_0] [i_3] |= -30815;
                            var_16 ^= (arr_5 [i_3] [i_3] [i_2 + 1]);
                        }
                        for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_17 = (((arr_0 [i_5 - 1] [i_0 - 1]) ? (((arr_9 [i_0] [i_0]) ? (((var_9 ? var_6 : var_7))) : ((30814 ? var_14 : (arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] [i_0]))))) : ((((~1) ? 828532865434831393 : -8251)))));
                            var_18 = var_6;
                        }
                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_19 = ((!(arr_3 [i_2 - 1] [i_0] [i_2 - 1])));
                            var_20 = (min(var_20, (((var_2 ? (arr_14 [i_0 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_3 - 1]) : (arr_14 [i_0 + 2] [i_1] [i_2 - 1] [i_2 + 1] [i_3] [i_3 + 2]))))));
                            var_21 = ((63492 ? 8235 : 828532865434831393));
                        }
                        arr_22 [i_3] [i_0] [i_1] = var_7;
                        var_22 = 8250;
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_23 = (arr_21 [i_1] [i_0] [i_1] [i_1] [i_2] [i_8 + 2]);
                                var_24 = (min(var_5, ((((max(var_0, -8250))) ? 12563391788952798428 : (max(2483961596996322556, -322468655))))));
                                var_25 = 2080425003;
                            }
                        }
                    }
                    var_26 = ((((min(var_3, (arr_25 [i_0])))) ? ((((((arr_1 [i_1]) ? 829761812153351009 : var_1))) ? -34355544064 : (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : 1));
                    arr_27 [i_0] [i_1] [i_2] = var_14;
                }
                var_27 = ((((((arr_13 [i_0] [i_1] [i_1] [i_0] [i_0 + 3] [i_0 + 3] [i_1]) ? (arr_13 [i_0] [i_1] [i_1] [13] [i_0 + 2] [i_1] [13]) : (arr_13 [i_1] [i_1] [7] [16] [i_0 - 2] [i_0] [i_1])))) ? (min(((var_14 ? var_9 : var_2)), var_0)) : var_12));
                var_28 = (max(var_28, (((-6616 ? 2483961596996322556 : 292589168)))));
            }
        }
    }
    var_29 = ((((!((min(var_9, -6706))))) ? var_6 : ((((828532865434831393 ? var_7 : var_2))))));
    var_30 = (!var_14);
    var_31 = min(-32149, ((462199057 ? 637701717 : -6011254400082331124)));
    #pragma endscop
}
