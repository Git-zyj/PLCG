/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_7 ? 13227 : (-127 - 1));
    var_15 = ((((min(236146551, var_2))) ? var_2 : var_10));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] &= (~236146541);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_16 = 3162805131360497864;
                        var_17 = arr_4 [i_1] [i_3];
                        var_18 &= (~(1 != var_1));

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_19 = var_0;
                            arr_12 [i_1] [i_2] [i_4] |= ((18446744073709551614 ^ (arr_9 [i_2 - 2] [i_2 + 1] [i_2 - 1])));
                            var_20 = (((arr_3 [i_1] [i_3]) || (((236146543 ? var_10 : -236146560)))));
                            var_21 = 1;
                        }
                        arr_13 [i_0] [i_0] [i_0] [i_0] = (((arr_6 [i_2 - 1] [i_2 - 1] [i_2]) ? var_3 : var_5));
                    }
                }
            }
        }
        arr_14 [i_0] = (((arr_10 [i_0] [i_0] [i_0]) ^ (1 ^ var_12)));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_22 = (min((((~(arr_3 [i_5] [7])))), ((max(1, var_4)))));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    {
                        var_23 = (max(var_23, ((((arr_6 [i_5] [i_6] [i_7]) ? (~1) : (max(110, 3162805131360497864)))))));
                        var_24 *= -var_4;
                    }
                }
            }
        }
        arr_25 [i_5] = ((((var_1 & (arr_5 [i_5] [i_5] [i_5])))));
    }
    var_25 &= ((((min(var_11, (~var_2)))) ? var_7 : var_5));
    #pragma endscop
}
