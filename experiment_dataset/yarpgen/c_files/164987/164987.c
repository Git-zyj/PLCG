/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_13 &= (+-2718848347297202044);
                            var_14 = (~7987458826447106846);
                            arr_12 [i_2] = (((var_0 ? (arr_10 [i_0] [i_1] [10] [i_2] [i_3] [6]) : (!3048073824707223223))));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                var_15 = 13918755487892551963;
                                var_16 = (25089 - 9824019083101867723);
                            }
                            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                            {
                                var_17 = (arr_3 [i_0] [i_1]);
                                var_18 = 250;
                            }
                            for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                            {
                                var_19 = (((((max((arr_2 [i_6]), 773252760496224439))) ? (arr_13 [i_0] [i_1] [i_2] [i_3] [i_6] [i_3]) : (arr_9 [i_2] [i_1] [1] [i_3] [9]))));
                                arr_20 [i_0] [i_1] [i_2] [i_3] [6] = (arr_3 [i_6] [i_3]);
                                var_20 = (max((((((var_1 ? (arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [14]) : var_10)) < var_0))), (max(var_6, (arr_6 [i_0] [13])))));
                                arr_21 [i_2] = (arr_0 [i_6]);
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                            {
                                var_21 = (arr_15 [i_2] [i_3] [i_2] [i_3] [i_7]);
                                var_22 = (((((arr_15 [i_1] [i_1] [i_2] [i_1] [4]) ^ (arr_19 [i_0] [i_1] [i_2] [i_3] [10]))) * 0));
                                var_23 = (min(var_23, (((var_10 < (~16547718338899639953))))));
                            }
                            arr_24 [4] [i_2] [i_2] [i_3] [6] = (-(1994754577156146536 && var_7));
                        }
                    }
                }
                var_24 = (min(var_24, (((-(~7912150350649186498))))));
                arr_25 [i_0] [i_0] = max((min(8779988490760692098, 3211051796539716512)), -6064110307681421878);
                var_25 = (max(var_25, (((~(max(var_11, (max((arr_0 [11]), (arr_16 [i_0] [i_0] [i_1] [i_1] [2] [i_1]))))))))));
            }
        }
    }
    var_26 = -var_2;
    #pragma endscop
}
