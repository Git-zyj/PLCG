/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_19 = var_5;

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_20 = (arr_1 [i_3 + 1]);
                            arr_12 [i_0] [i_1] [i_3] [i_1] = (((arr_2 [i_3 + 4]) && var_18));
                            var_21 = (max(var_21, var_6));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_22 = ((var_16 ? (arr_11 [i_2] [i_2] [i_3 + 2] [i_3] [i_3]) : (arr_11 [i_0] [i_3] [i_3] [i_3] [i_0])));
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] = 750014594;
                            arr_16 [i_1] = (((~11281) != var_17));
                            var_23 = (max(var_23, (((var_7 ? (-127 - 1) : var_15)))));
                        }
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            var_24 -= -62;
                            var_25 = (((arr_14 [i_3 + 3] [i_3 + 4] [i_3 + 3] [i_3 + 3] [i_6 - 1]) != (min(-61, ((var_2 ? var_3 : var_16))))));
                            var_26 = ((((-(var_15 / -4952766608097231902)))) ? (!14672339524934843698) : 1502235095);
                            arr_19 [i_0] [i_1] [i_0] [i_1] [i_3] [i_6] [i_6] = 67;
                        }
                    }
                    var_27 -= (((((var_18 ? var_18 : 1080863910568919040))) ? ((var_1 | (((arr_2 [i_0]) ? 80 : var_9)))) : var_10));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 18;i_9 += 1)
                {
                    {
                        var_28 = ((((~(max(var_2, var_3)))) >> (55653 - 55639)));
                        var_29 = (min(var_29, ((((((((-111 ? var_0 : var_2)) / (arr_24 [i_0] [i_9 + 3] [i_8 + 4] [i_9 + 3])))) ? (((94 + ((((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) != -64)))))) : (max((((-105 ? (arr_13 [i_0] [i_0] [i_0] [i_7] [i_8] [i_8] [i_9]) : var_11))), (~var_13))))))));
                        var_30 = (((~var_4) != (((2927569486 ? (arr_23 [i_0] [i_7] [i_8 - 1] [i_9]) : 331815157)))));
                        var_31 = var_16;
                        arr_27 [i_7] [i_8] [i_7] = (max(((((~var_7) >= (-127 - 1)))), ((var_15 ? (!var_3) : (var_4 + -551290435)))));
                    }
                }
            }
        }
    }
    var_32 += ((-(((var_16 / var_17) ? (!var_16) : ((var_9 ? 63 : var_14))))));
    #pragma endscop
}
