/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = 21519;
        arr_3 [i_0] = var_2;
        arr_4 [i_0] = (224 + 202);
    }
    var_12 -= var_3;

    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                {
                    arr_13 [0] [i_2] [i_2] [i_3] = (!18446744073709551615);
                    arr_14 [i_3] = ((-70368743915520 ? 16512854645447166316 : 1411919962872008629));
                }
            }
        }
        var_13 = ((-((var_9 ? -5193 : -85))));
        arr_15 [5] [1] = 3335664820;
        var_14 *= (!53);
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        arr_18 [6] = -8462702209849612060;
        var_15 ^= 1;
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] = min((max(-8192, 2032404767)), -var_0);
        arr_22 [i_5] = ((~(!34)));
        arr_23 [i_5] = (min(17198, -1718445580));
    }
    for (int i_6 = 1; i_6 < 12;i_6 += 1)
    {
        var_16 = ((var_1 ? (!1597939490) : -32763));
        var_17 = min((~-28455), -9223372036854775799);
        arr_26 [i_6 + 1] = (3335664821 % 3335664821);
    }
    #pragma endscop
}
