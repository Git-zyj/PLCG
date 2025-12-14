/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_16 &= (((min(-1255, 1776438911))) ? ((((max((arr_2 [i_0 - 1]), var_7))) ? var_6 : (min(var_10, (arr_2 [i_1]))))) : var_4);
                var_17 = ((+((-(((arr_1 [i_0]) ? -1218142278 : (arr_2 [i_1])))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        var_18 -= (((arr_5 [i_3 - 3] [i_0 - 1] [i_0] [i_0]) < (!-21277)));
                        var_19 *= (!(arr_3 [14] [i_1 - 1] [i_3 + 3]));

                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            arr_13 [i_1] [i_3] = ((!(arr_0 [i_0] [i_1])));
                            var_20 += var_12;
                        }
                        var_21 = ((var_11 ? (arr_0 [4] [4]) : var_5));
                    }
                    arr_14 [i_0 + 1] [14] [i_0 + 1] &= (((arr_7 [i_0 + 1] [1] [i_1 - 1] [i_0 + 1] [i_0]) ? (arr_7 [i_0] [i_1] [i_1 + 1] [i_1] [i_1]) : 0));
                    var_22 = (max(var_22, ((((arr_11 [i_0 + 1] [i_1 - 2]) ? (arr_5 [3] [i_1] [3] [i_0 + 1]) : (arr_11 [i_0 + 1] [i_1 - 2]))))));
                }
                var_23 = (min(var_23, var_14));
            }
        }
    }
    var_24 = -2956640711746409320;
    var_25 = ((max(var_11, ((1218142272 ? 8620224542315577732 : -1879977577)))));
    #pragma endscop
}
