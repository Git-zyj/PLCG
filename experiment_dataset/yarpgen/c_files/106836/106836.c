/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_17 = (10363933866781630399 | -6870575794072037755);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = -2147418112;
                    var_19 = -4041909014;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_20 = (arr_2 [i_4] [i_3]);
                    var_21 = (7931321562460942597 && 248);
                    var_22 &= ((!(arr_1 [i_4] [23])));
                }
            }
        }
        var_23 = (((arr_0 [i_0] [i_0]) && var_15));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_24 = var_8;
        var_25 += var_1;
        arr_15 [i_5] [i_5] |= (((((arr_4 [i_5]) ? (min(var_10, (arr_2 [i_5] [i_5]))) : (min(var_9, 10363933866781630427)))) - 234));
        var_26 = (max(var_14, (((239 && (((27888 ? 1 : -1658938147))))))));
    }
    var_27 = (((((127 ^ 96) ? var_3 : ((var_5 ? 7931321562460942609 : var_9)))) ^ (((var_1 | ((var_1 << (var_12 - 18281286609535646593))))))));
    #pragma endscop
}
