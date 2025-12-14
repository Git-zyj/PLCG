/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += -var_1;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 = min((((arr_8 [i_3 + 1] [i_1 + 4] [i_0 - 1]) ? (arr_8 [i_3 + 1] [i_1 + 4] [i_0 - 1]) : (arr_8 [i_3 + 1] [i_1 + 3] [i_0 + 2]))), (arr_7 [i_0]));
                                var_18 = (((min((arr_2 [i_1 + 1]), (arr_2 [i_1 + 2]))) ? (min((arr_2 [i_0]), (max((arr_1 [i_1] [6]), 3340396158)))) : (3340396158 <= 1251994244)));
                            }
                        }
                    }
                    var_19 = 13942282652033063624;
                    var_20 = (min(var_20, -8802748410936325469));
                    var_21 = ((-(((arr_0 [i_0]) ? (arr_6 [i_1]) : (min((arr_4 [i_0 - 1] [i_0 - 1] [i_0]), var_5))))));

                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        var_22 = (max(4504461421676487969, (+-4294967295)));
                        var_23 = (arr_9 [6] [4] [i_2] [i_5 + 2]);
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        var_24 = (((((arr_13 [i_2]) ? 222184747 : var_2)) << (1785092518 - 1785092497)));
                        var_25 = (arr_2 [i_1]);
                        var_26 = var_13;
                        var_27 = arr_0 [i_1];
                    }
                }
            }
        }
    }
    #pragma endscop
}
