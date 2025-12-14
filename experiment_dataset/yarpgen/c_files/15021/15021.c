/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((24423 ? var_13 : -7245679609012711657));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = ((((var_15 ? (~59) : 0))) ? (~7966271410685751401) : var_4);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_14 [i_1] = 7966271410685751408;
                            arr_15 [i_1] [i_2 - 1] [i_1] [i_1] = ((var_5 ? 0 : 12148));
                            var_21 = 8968578941852516372;
                        }
                    }
                }
            }
        }
    }
    var_22 = var_8;

    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                {
                    var_23 = (((2038727344 ? 1 : 0)));
                    arr_23 [i_4] [i_4] [i_6 - 2] [i_5] = (~1);
                }
            }
        }
        var_24 = (min(var_24, ((((((134217728 ? (((15872 ? var_7 : 7966271410685751391))) : ((var_17 ? var_17 : var_5))))) ? 9661 : var_12)))));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        arr_26 [i_7] [i_7] = (((((1 ? ((19537 ? -3097530417836570096 : 0)) : var_18))) ? (((((var_16 ? 5507655333117936551 : 15031753890730846960))) ? 15872 : 3414990182978704655)) : -13180));
        var_25 = (min(var_25, ((((((23 ? ((146 ? 0 : -2038727345)) : -11))) ? (((((var_4 ? 157 : 771248364))) ? -19537 : -11464)) : 1)))));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 19;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_26 += 1;
            var_27 = (min(var_27, 255));
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            var_28 = (min(var_28, -197));
            arr_37 [i_8] [i_8] [4] = ((!-25216) ? 2038727344 : (~52979));
            arr_38 [i_8] [i_8] = var_6;
        }

        for (int i_11 = 1; i_11 < 18;i_11 += 1)
        {
            var_29 *= (((!-25216) ? var_17 : 15031753890730846968));
            var_30 = var_10;
        }
    }
    #pragma endscop
}
