/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((min(161, (arr_1 [i_0]))));
        var_12 += 4736;
        var_13 = (min(var_13, ((((arr_3 [i_0]) / 255)))));
        var_14 |= ((-(((((var_11 ? var_8 : (arr_0 [i_0]))) < 169)))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_15 = ((((max((max(var_11, 2147483647)), (((-1 ? 1 : -30612)))))) ? var_11 : 1));
        arr_7 [i_1] = ((169 ? 211 : ((192 ? ((max(-1595520665, var_7))) : ((-(arr_5 [i_1])))))));
        arr_8 [i_1] [i_1] = 33488896;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_14 [i_3] [i_1] [i_3] [i_1] = 4736;
                    var_16 = (max(var_16, (1 <= 48074)));
                    var_17 = (max(var_17, (!var_1)));
                    var_18 = (((((225 + (arr_13 [4] [i_1] [i_1 + 3])))) ? (((-(arr_11 [i_1] [i_2] [i_3])))) : (!4606386231751590526)));

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_17 [i_1] [i_1] [i_1] [i_1] [13] = (min((max(11852649142295287092, 413243479)), 33488891));
                        var_19 = 10094645028582570581;
                    }
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_20 = (min(var_20, (arr_18 [i_5 - 1])));
        arr_20 [i_5] = max(33488895, ((249 >> (var_0 - 3848721741))));
        arr_21 [i_5] &= ((-(((arr_18 [i_5]) ? (((~(arr_19 [i_5] [i_5])))) : 9123487273719407868))));
        var_21 = (min(var_21, (((-(arr_18 [i_5]))))));
    }
    var_22 = (min(-33488895, -33488911));
    var_23 = var_6;
    #pragma endscop
}
