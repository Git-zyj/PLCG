/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_13 ? var_13 : ((min(1, 22705))))) << (max((!var_12), ((var_11 ? var_11 : 4290772992))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = ((((((var_6 || 22705) ? (((arr_0 [i_0]) ? var_10 : var_5)) : ((var_5 ? var_10 : var_7))))) ? (((var_2 * ((min(var_2, var_14)))))) : ((((((arr_0 [i_0]) ? -88 : var_8))) ? var_10 : (7 ^ -22716)))));

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_18 += -42807;
            var_19 = (((~-32751) ? var_5 : (max(((var_2 ? (arr_0 [i_1]) : var_2)), var_1))));
        }

        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_20 = (arr_12 [i_0] [i_2] [i_2] [i_4]);

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_21 -= var_0;
                            var_22 = (42804 ? (arr_4 [i_0]) : (arr_4 [4]));
                            var_23 = ((8965423093451905323 ? (arr_4 [i_0]) : var_9));
                        }
                    }
                }
            }
            var_24 -= (-540197847675996785 ? 9349896863474008435 : 5649);
            var_25 = (max(var_13, (arr_7 [i_0] [i_2])));
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
        {
            var_26 = (~(max(9349896863474008409, 2758863915)));
            var_27 -= ((5667 ? ((((max(-10686, 22705))) ? var_3 : (1 / 1))) : (-226554084 ^ -51)));
        }
    }
    #pragma endscop
}
