/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    var_16 = 11039725705644199919;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, var_3));
                                var_18 &= ((min(-var_13, (16379717275913021538 || 38))));
                            }
                        }
                    }
                    var_19 = (((38 ^ 38) ^ var_2));
                }
                for (int i_5 = 4; i_5 < 18;i_5 += 1)
                {
                    arr_15 [i_0] [i_1] [i_5] [i_5] = (arr_8 [i_5] [i_5] [i_5 - 1] [i_5]);
                    arr_16 [i_0] [i_0] [i_1] [i_5 + 1] = (arr_13 [i_0] [i_1]);
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_20 = 127;
                                var_21 = var_9;
                                var_22 = (min(var_22, var_10));
                                arr_27 [i_0] [5] [i_0] [i_0] [i_0] [i_0] [i_0] = ((18446744073709551609 ? 127 : -39));
                                arr_28 [i_0] [i_1] [i_6] [i_7] [i_6] [i_7] [i_8] = (((((10 ? 39 : 8))) ? ((max(var_4, 247))) : ((min((!10), (!2))))));
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_23 = (((((~((max(-40, (arr_17 [i_0] [i_1] [i_9]))))))) >= (((!13386425744337979076) ? 23 : 7))));

                        for (int i_10 = 1; i_10 < 18;i_10 += 1)
                        {
                            arr_34 [i_0] [i_0] [i_9] [i_0] [i_10 - 1] [i_9] [i_0] = var_15;
                            var_24 = (!39);
                            var_25 &= var_14;
                        }
                    }
                    var_26 |= ((((((-(arr_8 [i_6] [i_1] [i_1] [i_0]))) ? (((var_6 < (arr_6 [i_0] [i_0])))) : var_6))));
                }
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 15;i_12 += 1)
                    {
                        {
                            var_27 -= (((-108 & 5060318329371572540) || (-127 - 1)));

                            for (int i_13 = 4; i_13 < 18;i_13 += 1)
                            {
                                var_28 = (((!142) < ((((min(39, var_2)) > 41)))));
                                var_29 = (min(var_29, ((min(15952593834298709331, 0)))));
                                var_30 |= (arr_35 [i_0] [i_0]);
                            }
                            var_31 = (min(var_31, (((~((~(min(var_4, (arr_38 [i_0] [i_0] [i_11] [i_12] [i_0] [i_11 - 1]))))))))));
                        }
                    }
                }
                var_32 = -40;
            }
        }
    }
    var_33 = (((~216) || (~0)));
    /* LoopNest 2 */
    for (int i_14 = 2; i_14 < 14;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 16;i_15 += 1)
        {
            {
                var_34 = (min(30, 125));
                var_35 = (min(var_35, (((var_12 < ((225 ? 7495731654363501235 : (-127 - 1))))))));
            }
        }
    }
    var_36 = ((-(-127 - 1)));
    #pragma endscop
}
