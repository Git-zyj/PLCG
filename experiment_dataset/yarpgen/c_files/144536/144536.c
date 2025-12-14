/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = (((max(((24 ? 3651278336373029682 : var_8)), 3651278336373029682)) >> (((((((var_11 >> (var_1 - 108)))) ? var_9 : ((max(var_1, var_4))))) - 106))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    var_15 &= -47;
                    var_16 |= (var_3 + -var_11);
                    var_17 = (~var_8);
                    var_18 = ((-(var_3 ^ var_13)));
                }
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    var_19 = ((((((var_6 << (var_3 - 22705))) + ((var_13 ? var_11 : var_9)))) > var_11));
                    var_20 = -var_1;
                    var_21 = (((((~237) | var_4))) ? (max((max(var_2, var_8)), (78 < 19))) : ((((!(1 % 54036))))));
                    arr_10 [i_1] [i_1] [i_3] = var_13;
                }
                arr_11 [13] = -var_9;

                /* vectorizable */
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    var_22 = var_7;
                    var_23 |= ((53868 << (53 - 53)));
                    var_24 = (max(var_24, (237 ^ var_13)));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_25 *= var_5;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_5] [i_6] [i_7] = ((~((1 ? -126 : -5846))));
                                var_26 = (((2678 * -5840) ? (!1) : ((min((-5854 < 230), (!var_6))))));
                                arr_23 [i_7] [i_7] [2] [12] [i_0] [i_0] = (((--3651278336373029680) ? ((max(((min(var_2, var_1))), var_12))) : (max((var_7 | var_7), ((var_10 ? var_6 : var_7))))));
                            }
                        }
                    }
                    var_27 = (0 / -3651278336373029683);
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_28 = (((((var_4 ? (var_13 ^ 51) : ((var_13 ? var_11 : var_1))))) ? ((((max(var_3, var_12))) ? -var_4 : var_1)) : (~18506)));
                    arr_27 [i_8] = (~85);
                    arr_28 [i_8] [i_8] [i_8] = var_5;
                }
                var_29 *= (((((var_0 && var_13) | var_8)) << ((((94 ? 7131511391682124460 : 3985)) - 7131511391682124438))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 17;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 19;i_11 += 1)
            {
                {
                    var_30 = (min(-2692645038694988243, 42587));
                    arr_36 [8] [i_10] [i_11] = (~234);
                    var_31 = (~var_12);
                    arr_37 [i_9] [i_9] [i_9] [i_9] = 3186567447;
                    var_32 = -18499;
                }
            }
        }
    }
    var_33 = (min(var_12, (7592 | 1)));
    var_34 = var_5;
    #pragma endscop
}
