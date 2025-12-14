/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 66;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_21 = ((min((var_2 & 1), ((var_14 ? var_1 : 2470447416928657547)))));
        var_22 = (max((min(2470447416928657549, 1)), -2470447416928657537));

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_23 = (((var_9 ? var_11 : var_1)));
            var_24 += ((1 ? ((var_15 ? var_1 : (min(15976296656780894067, var_4)))) : ((2470447416928657548 ? (((var_15 ? var_5 : 1))) : 2470447416928657552))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_25 = (((15976296656780894075 == 2470447416928657549) >> var_0));
                        var_26 ^= (max((max(var_11, (2470447416928657547 >> 1))), (!15976296656780894065)));
                        var_27 = ((((min(var_8, var_3))) ? var_11 : var_1));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_28 = (min(var_28, 0));
            arr_12 [i_4] = ((min(5007677979539394032, 2470447416928657535)));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_29 = (var_7 <= 0);
            var_30 = ((1 ? var_5 : var_17));
        }
        var_31 = 1;
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 8;i_6 += 1)
    {
        arr_19 [i_6] [i_6] = (((!var_12) ? 1 : 3764413624687335005));
        var_32 = var_19;
        var_33 &= var_16;
        var_34 = (15976296656780894064 == 2470447416928657552);
    }
    var_35 = var_2;
    #pragma endscop
}
