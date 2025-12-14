/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = var_2;
                                arr_11 [i_0] [i_4] [i_4] [i_0] [i_4] = (((((var_0 ? -var_5 : (((-56 ? var_4 : var_6)))))) ? -194 : ((50 ? -62 : var_5))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_12 = ((((((var_0 ? 1 : 1194736782))) ? -1 : var_4)));
                                var_13 = ((((((var_6 ? 845627342 : -1225700743)))) ? (!var_1) : var_1));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            arr_27 [i_7] [i_7] [i_7] = var_1;
                            arr_28 [i_7] [3] [i_7] [i_7] = (((-(~-1))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            {
                                arr_38 [i_7] [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1] = ((var_0 ? (((((var_8 ? var_6 : var_7))) ? -104 : ((var_6 ? var_6 : var_2)))) : (((!var_3) ? ((var_9 ? -39 : var_9)) : ((-94 ? 49661 : var_10))))));
                                var_14 = var_0;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    for (int i_15 = 3; i_15 < 16;i_15 += 1)
                    {
                        {
                            arr_45 [i_7] [i_15 - 3] = ((var_7 ? ((var_2 ? var_7 : var_10)) : -1));
                            arr_46 [i_7 - 1] [i_7 - 1] [i_14] [i_7] = var_0;
                            arr_47 [i_8] [i_7] [i_8] [i_8] = var_10;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        {
                            var_15 = (min(var_15, (((65535 ? ((var_3 ? -var_3 : ((1 ? 57344 : 1753731855)))) : var_0)))));
                            var_16 = ((var_3 ? var_8 : 47));
                            var_17 = 36402080;
                            arr_54 [i_7] [i_7] [i_7] [i_7] [i_16] [i_7] = var_4;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_18 = 3; i_18 < 19;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        for (int i_20 = 0; i_20 < 20;i_20 += 1)
                        {
                            {
                                arr_63 [i_7 - 1] [i_8] [15] [i_19] [i_7] = (-((39938 ? -208 : var_9)));
                                arr_64 [i_7] = (((((var_1 ? ((47 ? 15 : var_6)) : var_9))) ? var_0 : 15882));
                                var_18 = (((((var_7 ? var_5 : var_9)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
