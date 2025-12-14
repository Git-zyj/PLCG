/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_13 = 54;
        var_14 = var_8;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_15 = (!var_5);
        var_16 = (((~3993246897) == (((~-2938165978445677526) ? (~var_8) : (~-2938165978445677513)))));
        var_17 = ((max(2925008159371935878, 316096558)));
        arr_5 [i_1] [i_1] = (((((1 ^ (~2938165978445677526)))) ? ((~(-3 & 60538))) : (((~(~var_5))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_8 [i_2] = var_10;
        arr_9 [i_2] = (!-8);
        var_18 = var_1;
        var_19 *= (~-1);
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_20 = (max(var_20, 3938812616));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_21 = 9119;
                    arr_19 [i_3] [i_3] [i_3] = (max((((max(39757, var_2)) ^ -3)), (~1)));
                    var_22 &= (-1 <= (!-74));
                    var_23 = -316096576;
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            var_24 ^= 1;
            arr_23 [i_6] = (((~var_8) | 1));
            var_25 = (((~25779) ? (((8 ? 2242594613 : var_5))) : 18446744073709551608));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        var_26 = (3 + 1);
                        var_27 = (max(var_27, (!3)));
                        var_28 = (-2147483647 - 1);
                        arr_30 [i_3] [18] [i_3] [i_3] [i_8] [i_6] = (((-316096548 - -2938165978445677526) ? (!-6) : 74));
                        var_29 = (!0);
                    }
                }
            }
            arr_31 [i_6] [14] [i_6] = -316096542;
        }
    }
    var_30 &= var_10;
    #pragma endscop
}
