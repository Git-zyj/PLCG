/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_13 + (((~112) ? ((40 ? var_4 : 282820135)) : (~var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 1] [i_0] [i_1] [i_2 - 1] = (~var_1);

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_20 = 144;

                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            var_21 = ((~(!268435455)));
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] [i_0 - 2] = var_0;
                            var_22 = 8876927811389548269;
                        }
                        for (int i_5 = 3; i_5 < 17;i_5 += 1)
                        {
                            arr_17 [i_1 - 1] [i_0] [i_3] = (!var_0);
                            arr_18 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = (((((var_7 == (((var_9 ? var_15 : var_3))))))) + (max(((-1474111872 ? (arr_5 [i_2 + 1]) : var_4)), (((var_13 ? var_15 : 0))))));
                            var_23 = ((var_6 ? 40 : ((min(var_8, var_5)))));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            arr_21 [17] [17] [i_2] [i_0] = (((((((1792 ? var_17 : 0))) ? (((arr_15 [i_0 - 1] [i_0] [i_0 - 2] [i_0] [i_0]) ? var_17 : 1)) : (15 + 1))) == ((-(arr_16 [i_3] [i_3] [i_2] [i_1 - 1] [i_6] [i_2] [i_0])))));
                            var_24 = ((((((1065353216 ? var_15 : 491520)) << ((((max(-6794, var_8))) - 31965))))) ? 0 : -491520);
                            var_25 = (~var_9);
                            var_26 = ((((((var_18 == (((0 << (var_10 - 1493243179)))))))) == (min(((((arr_16 [i_0 + 1] [1] [i_6] [i_2] [i_0] [13] [i_0]) ? -15 : 52))), var_14))));
                        }
                    }

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_27 = (((((arr_22 [i_0] [i_0 - 1] [i_1 + 3] [i_2] [i_0] [i_7]) ? (arr_12 [1] [8] [i_1 - 1]) : (var_6 > var_8))) + var_1));
                        var_28 = (arr_24 [i_0] [i_0] [i_1] [i_2] [1]);
                        var_29 = (min(var_29, (((!(arr_13 [i_0] [i_7] [8] [i_0 - 1] [i_2]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
