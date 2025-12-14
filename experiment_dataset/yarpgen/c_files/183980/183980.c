/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_20 -= ((((var_10 ? var_14 : 6114)) + 653560086));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [2] [i_1] [i_2] [i_0] [i_4] = ((-((~(((arr_8 [i_4] [15] [i_3 + 2] [i_2] [i_1] [11]) ? var_16 : -56))))));
                                arr_16 [i_1] [i_1 - 2] [i_1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_0 - 3] = ((-((((-1 / -1) <= (8455366083495365352 ^ var_0))))));
                                var_21 = (min(var_21, (((min(6114, 1017958494))))));
                                var_22 |= ((-(var_3 >= 8139)));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_28 [i_7] [i_1] [17] [15] [i_1 - 1] [i_1] [i_0] = (((((((min(var_16, 39901))) != var_16))) >= (~var_1)));
                                arr_29 [i_1] [i_6] [i_5] [i_0] [i_1] = -21792;
                            }
                        }
                    }
                    var_23 = ((-(((!(!-15036))))));
                }
            }
        }
    }
    var_24 = ((((max((~0), 6114))) ? (((23489 >= 17289) * (var_13 >= var_3))) : ((((min(var_7, var_13))) ? (var_5 | -10011) : var_5))));
    var_25 = (min((min((max(var_6, 111)), var_1)), (((-3833 ? 111 : var_14)))));
    #pragma endscop
}
