/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 &= ((((((max(1, var_1))) && (!var_7))) ? 1 : var_2));
    var_17 = ((var_7 != (((((1 ? var_0 : 60668))) ? (!var_0) : (var_2 ^ 16465424815171658237)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_18 = var_7;
                            var_19 = (min((arr_7 [i_0] [i_0]), (max(4294967295, 1061448214))));

                            for (int i_4 = 2; i_4 < 11;i_4 += 1)
                            {
                                var_20 = 1;
                                var_21 = (min(1, 1));
                            }
                            for (int i_5 = 0; i_5 < 12;i_5 += 1)
                            {
                                var_22 = (min(var_22, (min((((-((2909784901 ? 0 : 32767))))), (~0)))));
                                arr_18 [i_0] [i_1] = (((((0 ? 1 : 2577606731))) ? var_8 : var_14));
                                arr_19 [i_1] [i_1] = ((var_4 << var_7) ? (1 && var_8) : (max(0, var_9)));
                                arr_20 [i_0] [7] [i_2] = ((((arr_14 [i_0] [i_0] [9] [i_0] [i_0] [i_0] [i_0]) ? var_3 : (arr_14 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3] [i_1]))));
                            }
                            /* vectorizable */
                            for (int i_6 = 1; i_6 < 1;i_6 += 1)
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 4503599627370495;
                                var_23 = var_0;
                                arr_25 [i_0] [i_0] [9] [i_0] [i_0] = ((1 << (4294967280 - 4294967265)));
                                var_24 = ((var_5 ? var_9 : var_14));
                            }
                            arr_26 [i_3] = ((~((((!var_6) >= ((var_10 ? var_3 : var_13)))))));
                        }
                    }
                }
                var_25 = (((((-((65472 ? var_7 : 1326271882))))) ? (((arr_3 [i_1]) ? (arr_3 [i_1]) : 2577606733)) : (arr_0 [i_0])));
                arr_27 [i_1] = (~var_5);

                /* vectorizable */
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    var_26 = (~(~var_5));
                    var_27 ^= (!1);
                }
            }
        }
    }
    #pragma endscop
}
