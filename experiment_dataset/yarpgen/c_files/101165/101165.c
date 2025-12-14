/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_15, var_6));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((((!(~var_15)))), (max((min(var_0, var_3)), (min(488995849, 91))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] = ((~(min((~var_16), (min(var_10, var_12))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_0 + 2] = ((-((var_12 ? var_11 : var_12))));
                        arr_13 [i_0] [i_1] [i_1] = -var_4;
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        arr_16 [1] [i_0] [i_0] [i_2] [20] = var_2;
                        arr_17 [i_0] [i_1] [i_4] [i_4] [0] [i_2] = (max(((max(var_19, var_7))), (min((min(var_4, var_12)), (((var_12 ? var_3 : var_11)))))));
                        var_21 = (min((max(var_14, (max(120, 6763685513283861015)))), var_17));
                        var_22 = (((max(1, 1))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    arr_26 [1] [1] [1] [i_5] = ((!((min(248, 1)))));
                    var_23 = (min(123, 20876));
                    var_24 = (min((((((min(var_6, var_17))) ? ((-20 ? 63 : -76)) : ((min(var_0, var_9)))))), (max(var_10, (min(1100411822, 11720348981974388185))))));
                    arr_27 [i_5] [i_5] [i_5] [i_5] = (min((!var_4), (min(var_15, var_2))));
                    var_25 = (max(((min(((var_4 ? var_6 : var_8)), ((max(var_0, var_15)))))), (max((!var_11), (min(var_12, var_19))))));
                }
            }
        }
        var_26 += var_3;
        arr_28 [i_5] = (min(((((max(var_9, var_19))) ? -var_17 : (min(var_4, var_6)))), ((min(-853878557, var_5)))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {
                    var_27 += ((!((min(var_5, var_1)))));
                    arr_34 [i_5] [i_8] [i_5] = (max((min(((var_4 ? var_5 : var_1)), var_7)), (!var_9)));
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_28 = var_15;
                                arr_40 [i_5] [i_5] = ((~(max(((min(var_17, var_6))), var_4))));
                            }
                        }
                    }
                    arr_41 [i_8] [i_8] [i_5] = var_4;
                }
            }
        }
        var_29 = (max(var_29, var_6));
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                {
                    var_30 += (min((max(117, 65533)), ((max(var_17, (max(var_15, var_18)))))));
                    var_31 = (min(var_13, var_15));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 23;i_16 += 1)
            {
                {
                    arr_57 [i_12] [i_12] [i_12] = ((((min(-var_0, (min(var_9, var_12))))) ? (min(((var_9 ? var_12 : var_15)), ((max(var_4, var_16))))) : var_18));
                    arr_58 [i_12] [i_16] = (max(((((min(var_11, var_10))) ? (!var_18) : (min(var_12, var_8)))), ((max(3441088711, 65533)))));
                }
            }
        }
        var_32 = (min((((1 ? -117 : 65))), ((853878561 ? (~var_7) : (max(var_7, var_1))))));
    }
    var_33 = (max((max((max(var_3, var_11)), (min(var_3, var_4)))), var_14));
    var_34 = (max(((((min(var_0, var_9))) ? var_19 : (~var_14))), (((((-1 ? 250 : 2828853038))) ? var_19 : var_2))));
    var_35 = var_17;
    #pragma endscop
}
