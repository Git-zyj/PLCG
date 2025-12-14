/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= 3974895018;
    var_19 = 1128054438;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((853950076 ? 28 : -19793)))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = (~-5182627290718931872);
                                arr_13 [i_1] [i_1] [i_4] = 2817102289;
                            }
                        }
                    }
                    var_22 = 26;
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_23 = ((((min(543827615, var_6))) ? ((var_11 & (~-3927957596118372849))) : var_10));
                                var_24 = ((!(((408884707 ? 1713881244 : var_15)))));
                                var_25 = (max(var_25, ((((!var_17) ? 408884707 : -7725)))));
                            }
                        }
                    }
                    var_26 *= (~var_1);
                    arr_23 [i_1] [i_1] [i_5] [2] = ((((max(30, 4294967267))) ? -28 : (!-1920823378)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 3; i_8 < 19;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            {
                var_27 = 408884707;
                var_28 += ((((min(4294967269, 16))) ? ((min(4294967267, (-9223372036854775807 - 1)))) : (max(17476547363863574276, 29))));
                var_29 = ((1 ? (min((4294967269 * 17476547363863574276), (((-75 ? 107 : 354095481))))) : var_2));
                var_30 *= (max(((!(((var_13 ? 76 : 53))))), (!32767)));
                arr_28 [i_8] [i_9] [i_9] = 7474128426553710800;
            }
        }
    }
    #pragma endscop
}
