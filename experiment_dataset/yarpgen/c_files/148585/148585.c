/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_2;
    var_14 = (min(var_14, var_12));
    var_15 = var_10;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] &= (max((arr_1 [i_0 - 2]), ((max((arr_0 [i_0 - 2]), -32765)))));
        arr_3 [i_0] = (arr_0 [i_0 - 2]);
        arr_4 [i_0] = (!var_0);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_16 *= (arr_6 [i_1]);
        var_17 = (min(var_17, (((((max((arr_5 [i_1] [i_1]), (arr_6 [i_1])))) ? ((max(var_7, 2316451401))) : (arr_6 [2]))))));
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_1] [i_4] = (((min(var_5, (arr_13 [i_1] [5])))));

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            arr_18 [12] [i_4] = (arr_11 [i_2] [i_2 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_5]);
                            var_18 = (min(var_18, (((((!(!2316451401))) ? (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_9 [i_2] [18] [18] [7]))))));
                            var_19 &= ((2701851858 ? 655608120 : 1));
                            arr_19 [i_1] [i_1] [i_3] [i_4] [i_4] = ((((((arr_16 [i_5] [i_5] [i_5] [i_2 - 2] [i_4 + 1]) && (arr_16 [i_3] [i_3] [i_4] [i_2 - 4] [i_4 - 3])))) << (arr_16 [i_1] [i_1] [17] [i_2 - 1] [i_4 - 3])));
                        }
                        var_20 *= ((+((max((arr_14 [i_2 - 4] [i_2 + 1] [i_4 - 2] [i_4 - 2]), (arr_14 [i_1] [i_2 + 1] [i_4 + 2] [i_4]))))));
                        arr_20 [i_1] [i_1] [i_4] [i_4] = ((((min(2701851858, 0))) == (+-188)));
                    }
                }
            }
        }
    }
    var_21 = (max(var_0, (min((((4480253395434102339 << (var_8 - 1895444305)))), (min(2808256126, var_11))))));
    #pragma endscop
}
