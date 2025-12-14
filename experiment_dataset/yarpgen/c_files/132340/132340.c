/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((((4294967295 ? 12572107218841712978 : 7181080706892466183))) || (((12572107218841712978 - ((((arr_3 [i_0] [9]) ? 1648578951 : (arr_1 [i_0])))))))));
        var_10 = (min((((((((!(arr_3 [11] [11]))))) <= 12572107218841712967))), 215));
    }
    var_11 &= ((((var_5 ? var_3 : var_2))));

    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        var_12 &= var_3;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_13 = (((((49 ? var_1 : 10393402377592312330))) ? var_7 : 208));
            arr_9 [i_2] = (arr_5 [i_2]);
            arr_10 [7] [7] = ((var_3 ? 18446744073709551615 : var_0));
            var_14 -= (var_1 % var_0);
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_2] [i_1] [i_4] = (0 > 10393402377592312326);
                        var_15 -= ((var_8 ? ((var_0 ? (arr_12 [i_1 - 4] [i_1 - 4]) : var_2)) : (var_8 / var_5)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
