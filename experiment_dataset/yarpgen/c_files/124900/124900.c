/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [0] = (((~var_6) ? var_0 : ((0 ? (~-9223372036854775799) : var_1))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_12 = (~var_4);
                    arr_9 [i_2] [1] = ((629027222244527157 ? ((-7894 ? 166 : 11148139865487279402)) : (!-7894)));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    var_13 = (((~15389831458186115825) ? -464483281 : ((90 ? 28846 : var_8))));
                    arr_13 [i_0] = ((166 - ((1 ? 120 : 13254))));
                    arr_14 [i_1] [i_0 + 1] = (((~0) ? 5415636492555065784 : var_5));
                    var_14 = (min(var_14, ((-22101 ? (((11010 ? var_3 : var_3))) : 10382260273404541885))));
                }
            }
        }
    }
    var_15 = ((!(~-22101)));
    #pragma endscop
}
