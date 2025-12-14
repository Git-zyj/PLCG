/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_20 *= (arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0 - 1] = var_18;
        arr_3 [i_0] = ((((((arr_0 [i_0 + 2]) + 1))) ? -116 : 1));
        arr_4 [i_0] = (+((((!var_11) && ((((arr_0 [i_0]) << (-8419634650031447855 + 8419634650031447862))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = 18046600362764871643;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_22 *= ((((((-8419634650031447844 | (arr_5 [i_0 - 1] [i_1])))) && (~172))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (((arr_8 [i_1 - 1] [i_1 - 1]) % (((var_9 >= ((min(var_9, 119))))))));
                                var_23 = (max((8639925299999480234 - var_15), 576460752303423487));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = 1;
    var_25 = (((((6 ? 4189817584 : 1))) ? (34358 ^ -29982) : var_3));
    #pragma endscop
}
