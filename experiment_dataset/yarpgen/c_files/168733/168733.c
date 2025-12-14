/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_12));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_19 = (((7 ? var_13 : (arr_5 [5] [i_1 + 3]))));
            arr_6 [i_1 + 2] = var_2;
        }
        var_20 = 61;
        var_21 = (max(var_21, ((((var_12 < ((0 ? (arr_4 [13] [i_0]) : 6491912083330550722))))))));
    }
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        arr_10 [i_2] = ((!(arr_4 [i_2] [i_2])));
        var_22 &= (~-3805759733921568383);
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_23 = 8900;
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_24 = (min(var_24, ((var_0 ? (arr_5 [i_3] [i_3]) : 13032841168084513928))));
                                var_25 -= (((((arr_23 [4] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1]) ? (arr_23 [i_6 + 1] [i_6 + 1] [i_6] [21] [i_6 - 1]) : -91))) || ((!((min(1792, (arr_14 [15])))))));
                            }
                        }
                    }
                    var_26 = ((((2450652054635974510 ? (arr_3 [i_4]) : 89))));
                    var_27 = (max(var_27, (min((arr_20 [i_3] [i_3] [i_3] [i_3]), ((0 ? var_9 : 18230334149105044670))))));
                }
            }
        }
    }
    var_28 += ((((((!(((9920115001039253131 ? var_8 : var_1))))))) | var_15));
    #pragma endscop
}
