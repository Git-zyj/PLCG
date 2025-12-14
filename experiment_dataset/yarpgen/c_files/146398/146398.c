/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                var_10 = (min(var_10, (((~(((arr_2 [i_0 - 2] [i_1]) % -170)))))));
                arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] = 0;
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_11 ^= ((!(arr_1 [i_0] [i_0 - 4])));
                            var_12 *= -var_9;
                        }
                    }
                }
            }
            arr_14 [i_0] [i_1] = ((var_1 >> 1) != (var_8 ^ 16923174298006429420));
            var_13 = ((-(arr_8 [i_0] [i_1] [i_1])));
        }
        var_14 |= (var_6 % (arr_3 [i_0 - 4] [i_0] [i_0]));
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        var_15 ^= 58743;
                        var_16 ^= ((((max((~58718), ((var_7 ? 406424671993800807 : (arr_23 [i_8] [i_7] [i_6] [i_5] [i_5])))))) ? (~182) : 255));
                        arr_26 [i_5] [i_6] [i_7] [i_8] = (!-16923174298006429420);
                        var_17 = (max(var_17, (!7408972446641804118)));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_9 = 1; i_9 < 21;i_9 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        {
                            var_18 = (min(var_18, ((((((var_9 ? (arr_34 [i_5] [i_9 - 1] [i_10] [i_11] [i_12] [i_11]) : 1))) ? (((~(arr_35 [i_5 - 2] [i_5 - 1] [i_5] [i_5 + 1] [i_5] [i_5])))) : ((-3460 ? 1 : 5306958628533760013)))))));
                            var_19 = (min(var_19, (~18040319401715750793)));
                        }
                    }
                }
            }
            var_20 ^= (arr_23 [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9] [i_9]);
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 21;i_13 += 1) /* same iter space */
        {
            var_21 = var_8;
            arr_39 [i_5 + 1] [i_13] [i_13] = ((-((1 ? var_2 : 977294937))));
        }
    }
    var_22 += -660146073;
    var_23 = ((((((max(var_3, -3481)) << var_5))) ? var_8 : var_7));
    var_24 = (((((var_6 / var_6) ? var_9 : var_0)) / var_0));
    #pragma endscop
}
