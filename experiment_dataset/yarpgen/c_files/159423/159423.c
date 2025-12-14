/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (min(var_10, ((var_8 ? 12 : 25))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [5] [5] &= (arr_2 [i_1]);
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_18 &= (arr_8 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                        var_19 &= (((61627 == 12) ? (~var_10) : (((-2147483631 <= (arr_5 [i_0] [1] [i_2 + 1]))))));
                        var_20 = (min(var_20, (((-(((arr_7 [i_0] [i_2] [i_0] [i_2] [i_1] [17]) | (arr_8 [i_0] [i_0] [1] [1] [i_2 - 1]))))))));
                        arr_9 [i_3] &= ((((min(((61627 ? var_4 : var_1)), ((((arr_8 [i_0] [i_0] [i_0] [i_2 + 1] [i_3]) && 1)))))) || (((~((-(arr_2 [i_0]))))))));
                    }
                }
            }
            var_21 = (min(var_21, -1));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            var_22 &= ((~(var_1 == 18446744073709551591)));
            var_23 = (((arr_0 [i_0]) ? ((4294967295 >> (18446744073709551615 - 18446744073709551602))) : (arr_6 [i_4] [i_0] [i_0])));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_24 &= (arr_17 [i_0]);
                            var_25 = (arr_16 [i_6 + 1] [i_6 + 1] [i_5] [i_6 + 1] [i_7]);
                            var_26 = (min(var_26, (arr_14 [i_6 - 2])));
                            var_27 = (~4095);
                        }
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_28 = ((0 ? 20 : -8322));
            var_29 = 19;
            arr_24 [5] [5] = ((((min((arr_12 [i_8] [i_8]), 89064270))) ? ((var_11 ? ((4294967295 ? 0 : 1)) : 32764)) : ((((-5699 + 2147483647) >> (((((arr_7 [i_8] [i_8] [i_8] [i_8] [18] [18]) ? var_13 : (arr_16 [i_0] [i_8] [i_0] [i_0] [i_0]))) - 1779464878)))))));
            arr_25 [i_0] = (arr_7 [i_0] [17] [17] [i_0] [i_0] [i_8]);
        }
    }
    #pragma endscop
}
