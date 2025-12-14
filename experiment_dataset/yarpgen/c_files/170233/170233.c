/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((((((~(min(var_12, var_17))))) ? (max(3005797347, 3499527599938877957)) : (((!-6448855358489483965) ? (~var_17) : -1083978575)))))));
    var_19 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [6] = (max(((max(3499527599938877946, ((var_3 ? var_3 : 6448855358489483964))))), ((var_3 ? ((min(var_17, var_14))) : var_8))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_3] = ((!(((10054 ? 0 : 121)))));
                            var_20 = ((!((min(-32760, var_11)))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_3] [i_3] = (min(((128 ? ((1 ? 2727314030 : 1)) : 64545)), (((-((4121924148 ? var_3 : 1163500700)))))));
                                arr_17 [i_4] [i_4] [i_4] [i_4] [7] [i_4] [1] = (((max(var_8, var_15))) ? (((min(27921, var_16)))) : (min(var_9, var_11)));
                                arr_18 [i_0] [i_0] [i_1] [8] [i_2] [17] [i_4] = (((((var_15 ? -9046232879046368842 : var_10))) ? (~var_11) : ((min(1, 125)))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                            {
                                var_21 = (~var_4);
                                var_22 ^= ((~((1911575895 ? 392085105461297536 : 13072))));
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                            {
                                arr_26 [i_6] [i_6] [i_3] [1] [i_1] [i_0] = (~var_16);
                                var_23 = ((max(var_4, (((var_4 ? var_16 : var_14))))));
                            }
                            var_24 = (~var_0);
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_25 *= ((-27 ? -5488688348570546476 : ((max(((-1 ? 1810757325 : 13072)), 16)))));
        var_26 *= ((~(!117)));
        arr_29 [i_7] = ((-12 ? (min(var_14, (((13075 ? 147 : 132))))) : ((min(-152, ((var_6 ? var_16 : 64545)))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            arr_40 [i_8] [i_8] [i_8] [i_8] [i_11] [i_8] = ((88 ? 104 : var_12));
                            var_27 = 47;
                            arr_41 [i_8] [i_11] [i_10] [i_11] [i_8] [i_11] [10] = (((((-26672 ? 152 : 12))) ? 152 : ((397212474 ? 1 : var_9))));
                        }
                    }
                }
            }
            var_28 ^= (((!12) ? (((103 ? 3448512569 : 151))) : -1));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    {
                        var_29 = (30 ? 1840489126 : -9308);
                        var_30 = (min(var_30, (~32)));
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            var_31 = (min(var_31, 1));
            var_32 = 1;
        }
        for (int i_16 = 3; i_16 < 24;i_16 += 1)
        {
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    {
                        var_33 = var_12;

                        for (int i_19 = 0; i_19 < 25;i_19 += 1)
                        {
                            arr_60 [18] [i_16 - 1] [i_8] &= (~var_14);
                            var_34 |= ((103 ? -123 : 6448855358489483964));
                            var_35 ^= ((-(~7)));
                            var_36 = -var_16;
                        }
                        arr_61 [i_18] [13] [i_16] [i_18] = ((0 ? (~-48825669) : ((var_8 ? 0 : 2010712566))));
                    }
                }
            }
            var_37 = ((var_14 ? var_2 : (((32030 ? -43 : 16)))));
            var_38 *= var_6;
            var_39 = 1;
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 25;i_20 += 1)
            {
                for (int i_21 = 2; i_21 < 24;i_21 += 1)
                {
                    {
                        arr_66 [i_21] [i_16] [i_21] [i_20] [20] &= (((~70) ? -var_6 : (((113 ? -9139 : var_11)))));
                        var_40 = 21305;
                    }
                }
            }
        }
        var_41 = ((var_6 ? var_13 : ((-126 ? 168 : -1707799354341125967))));
        var_42 &= ((var_4 ? -1689963766 : var_7));
    }
    #pragma endscop
}
