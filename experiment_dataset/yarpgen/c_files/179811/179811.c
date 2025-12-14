/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= var_2;

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = 1125899906842623;

        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_11 = (min(var_11, (((18445618173802708993 ? (((((52750 ? -103 : 1727912969)) > -1377099249))) : ((var_9 ? var_7 : (((!(arr_7 [i_3] [i_2] [i_0] [i_0])))))))))));
                        var_12 = ((17870283321406128128 > -103) < var_0);
                        var_13 = ((12786 ? (arr_9 [i_3] [i_2] [i_1 - 1]) : (((var_5 ? (arr_5 [i_3] [i_2 + 2] [i_1 - 1]) : 0)))));
                    }
                }
            }
            arr_11 [i_1] [i_0 - 2] [i_1] = 96;
            var_14 = ((((max(23976, -1))) ? ((-(arr_5 [i_1 - 1] [i_1 - 1] [i_0]))) : var_7));
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_15 -= ((((((1 >> (102 - 80))))) ? var_5 : -var_9));
                var_16 += ((-1 ? 17870283321406128125 : 18445618173802708993));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            var_17 = ((var_2 > (((arr_14 [20] [i_5] [i_0]) * var_0))));
                            var_18 = (min(var_18, (((12785 <= (-2147483647 - 1))))));
                            var_19 *= (((2232358010 ? (!105) : var_6)));
                        }
                    }
                }
                var_20 += ((var_1 ? (((!var_6) ? var_2 : (max(var_6, var_3)))) : 15));
            }

            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                var_21 = (((((var_1 ? (~-210935027) : (!-10)))) ? (((!(arr_10 [i_8])))) : 4294967295));
                var_22 = (!12614);
            }
            for (int i_9 = 1; i_9 < 23;i_9 += 1) /* same iter space */
            {
                var_23 = (arr_4 [i_9] [4] [i_0]);
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_24 = ((!((-37 && (((0 ? var_7 : 16460529675591384107)))))));
                            var_25 = (-2147483647 - 1);
                            var_26 &= (((((1 ? 127 : var_7))) ? (((((var_8 ? 0 : (arr_6 [i_11] [i_9 + 2] [i_4 - 1])))) ? (min(var_4, var_5)) : var_5)) : (((-((2232358026 ? 2606118352 : -1267691084)))))));
                        }
                    }
                }
            }
            for (int i_12 = 1; i_12 < 23;i_12 += 1) /* same iter space */
            {
                var_27 = ((!((((arr_16 [i_0 - 2] [i_12] [i_0 - 2] [i_0]) + var_9)))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        {
                            var_28 = ((((max((!31744), ((1 ? (arr_17 [i_14] [i_12] [i_4 - 1]) : var_0))))) ? ((~(var_7 % 1))) : 1));
                            var_29 = (min(var_29, ((((((((!(arr_18 [11] [11]))) ? (!var_0) : 1))) ? -55 : 1377099248)))));
                        }
                    }
                }
            }
        }
        for (int i_15 = 3; i_15 < 24;i_15 += 1)
        {
            var_30 = ((max(12236, 1)));
            var_31 = (min(var_31, (((46834 ? 1 : 1)))));
            var_32 = 1;
            var_33 ^= ((((((arr_25 [i_0 - 2] [i_0] [i_0 - 1] [i_0 - 1]) ? var_8 : -var_9))) ? (arr_5 [i_0 - 1] [i_0] [i_0]) : (((-47 == (arr_38 [i_15] [i_15] [i_0 - 2] [i_0]))))));
            var_34 = (~((((var_6 + 4294967279) < 6903923539839576619))));
        }
    }

    for (int i_16 = 0; i_16 < 0;i_16 += 1)
    {
        arr_50 [i_16] [i_16] = 24;
        var_35 = (((!1377099248) ? (((1 ? (arr_7 [i_16] [i_16] [i_16] [i_16]) : ((-1 ? var_5 : var_8))))) : ((max(var_8, var_4)))));
    }
    var_36 = ((!(~var_0)));
    #pragma endscop
}
