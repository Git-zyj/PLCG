/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    var_21 = (((~var_2) + var_13));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] [i_0 - 1] = ((((min((max(0, -2147483645)), 68))) ? (((((arr_1 [i_0 - 1]) && (((var_2 ? 511 : var_17))))))) : (((min(-10723, 15254765703493540851)) >> ((((arr_0 [i_0] [i_0]) || (arr_1 [i_0]))))))));
        arr_4 [i_0] = (((((~(min(4158386639, -7937400766787640328))))) ? ((~(~var_9))) : (((((var_10 ? var_9 : var_14)) == 48112)))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_9 [i_0] = (((0 ? -8883270448999646993 : 1)));
            arr_10 [2] [i_1] [i_0 + 1] = ((18446744073709551615 == ((max((~var_10), (~var_12))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_15 [i_2] = var_3;
            arr_16 [i_0 + 2] = ((-(arr_14 [i_2])));
            arr_17 [i_2] [i_0] [i_0] = (247 || 21319);
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {

            for (int i_4 = 3; i_4 < 15;i_4 += 1) /* same iter space */
            {
                arr_24 [i_3] [i_3] [i_3] = ((var_5 << (10972 - 10961)));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_31 [i_6] [i_5 + 3] [2] [i_3 - 1] [12] = -8883270448999647003;
                            arr_32 [i_3] [i_3] = ((var_14 || (arr_30 [i_6] [i_3] [i_4] [i_3] [i_0])));
                            arr_33 [16] [4] [12] [i_5] [i_6] = -8883270448999646993;
                        }
                    }
                }
                arr_34 [1] [i_3] [i_3] [i_4] = ((((var_6 ? var_11 : (arr_5 [i_0] [14] [i_4]))) * var_7));
                arr_35 [i_0] [i_3] [12] = -27654;
            }
            for (int i_7 = 3; i_7 < 15;i_7 += 1) /* same iter space */
            {
                arr_40 [i_3] [i_3] [i_3] [i_3] = ((var_18 && (arr_12 [9] [i_3])));
                arr_41 [1] [i_7 + 2] [i_3] [1] = (arr_11 [i_0] [i_3] [i_7]);
                arr_42 [i_3] [i_3] [7] [16] = ((var_12 != (arr_2 [i_3 - 1] [i_7 - 2])));
                arr_43 [i_3] [i_3] [3] [i_3] = ((22268 ? 148 : (~32747)));
            }
            arr_44 [i_3] = (var_13 == 1601440197);
            arr_45 [i_3] = (((arr_8 [i_0 + 1]) || (arr_8 [i_0 + 1])));
            arr_46 [8] [8] = ((2693527098 ? (var_5 && var_11) : (arr_6 [i_0 + 1] [i_0 - 1])));
            arr_47 [i_3] [12] [i_3] = (arr_14 [i_0]);
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            arr_50 [i_8] [15] = ((!(((var_1 ? 2693527082 : var_15)))));
            arr_51 [4] [i_8] = (min(((((8883270448999646993 && var_7) || 9269216399439222399))), var_12));
            arr_52 [i_0] [i_8] |= (((arr_13 [i_0]) || ((max((((var_14 >> (var_3 - 4927750683338928173)))), -1601440212)))));
        }
        arr_53 [i_0] = -8883270448999647005;
        arr_54 [i_0] = ((((((((var_11 ? 122 : var_17))) ? 90 : (((arr_23 [i_0] [i_0]) ? var_15 : 1601440204))))) ? ((var_15 * (arr_37 [8] [8] [i_0] [8]))) : 2693527103));
    }
    #pragma endscop
}
