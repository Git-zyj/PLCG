/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_11 = (max(var_11, (!9)));
            var_12 = (var_7 / 108824168);
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_13 |= (1548836222749335647 >= var_4);
            var_14 = (max((((((min(var_3, var_10))) && var_6))), (min(var_7, var_5))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_15 = ((max(1548836222749335647, 1548836222749335647)));
            var_16 = (-(max((var_6 * var_8), -196423946)));
        }
        for (int i_4 = 4; i_4 < 18;i_4 += 1)
        {
            var_17 = ((144115188075855871 - ((-var_2 * ((max(var_3, 196423946)))))));
            var_18 |= ((-(max(var_4, var_1))));
            var_19 = (min((max(var_5, var_10)), ((((var_2 && 196423951) || var_8)))));
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_20 = (max(var_0, ((~(max(0, var_0))))));
                                var_21 = (max(var_21, ((max((max(var_2, var_8)), (!636005831))))));
                                var_22 -= ((-(max((max(var_0, var_6)), (~4098543349)))));
                            }
                        }
                    }
                    var_23 += (max(var_7, (~0)));
                    var_24 = var_9;
                }
            }
        }
        var_25 = (((~var_9) + (((-1 >= (~var_6))))));
    }
    var_26 = (max((((var_10 - var_6) / (max(14, 18073917336469546630)))), (((var_10 - (196423922 && var_8))))));
    var_27 = ((((!(var_6 || var_3))) || var_10));
    #pragma endscop
}
