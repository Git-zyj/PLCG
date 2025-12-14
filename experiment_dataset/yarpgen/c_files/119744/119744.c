/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [14] &= (((((arr_1 [14]) ? (arr_1 [12]) : (arr_1 [4])))) ? ((-(arr_1 [12]))) : (((arr_1 [0]) ? (arr_1 [1]) : 6742)));
        var_12 = (max(12685396956085530115, 6743));
        var_13 = (arr_1 [i_0]);
        var_14 = ((~(((arr_1 [i_0]) ? -6742 : (arr_1 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_15 = (max(var_15, (((((14427646976460284305 ? 255 : 18446744073709551603)) == ((max(2, 4176482934))))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_1 - 1] [i_4] [i_3] [i_4 + 1] = (var_7 ? 0 : (arr_14 [i_1 - 1] [i_1 - 1] [i_4] [i_1 - 1] [i_3] [10]));
                        var_16 = (((arr_1 [i_4]) > 1));
                        var_17 = -0;
                    }
                }
            }
            var_18 ^= ((6724 ? (-9223372036854775807 - 1) : 734807776));
            var_19 |= (((arr_1 [8]) & (arr_11 [10] [10] [i_1 - 1])));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            arr_18 [i_1] [i_5] [14] = ((1 - (arr_0 [i_1] [18])));
            var_20 = (arr_13 [i_1] [i_1] [16] [i_1] [i_1] [i_1]);
            var_21 = (max(var_21, (((3560159520 & (-9223372036854775807 - 1))))));
            var_22 -= (0 != 1569137522);
        }
    }
    var_23 = (((((-(min(var_9, 13))))) ? (((var_3 ? -var_4 : var_5))) : ((((min(var_6, 6742))) ? var_2 : (!var_11)))));
    #pragma endscop
}
