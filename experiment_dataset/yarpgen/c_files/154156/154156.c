/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((-(((var_4 & 4294967274) ? var_11 : var_4)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = 255;
                    var_16 = (var_8 | var_0);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_17 = 4294967274;
                    var_18 ^= (~4294967282);
                }
                var_19 = (min((max(5, -645120108)), (15376668674993165850 + 1953816380)));
                arr_11 [i_0] [i_1] = ((~(max(var_8, var_0))));
                var_20 ^= ((!((max(2903455181238305659, var_0)))));

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_21 = (((((((var_3 ? 1868 : 1)) / 1922833508))) ? ((-((4294967295 ? var_7 : var_2)))) : (var_7 % 678102012)));
                    var_22 = (max((min(-106698007, 18446744073709551615)), 15580454063169856332));
                    arr_14 [i_0] [i_0] [i_0] = (((((-var_10 ? ((var_4 ? var_10 : 1880)) : ((((18446744073709551615 > (-2147483647 - 1)))))))) ? (!254) : (min((var_9 % 1), 1))));
                    arr_15 [i_4] [i_4] [i_4] [i_4] = (((~28) ? (max((!var_2), -70)) : var_0));
                }
            }
        }
    }
    var_23 = (max(var_23, var_7));
    var_24 = var_0;
    #pragma endscop
}
