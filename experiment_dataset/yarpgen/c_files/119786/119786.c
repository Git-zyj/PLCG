/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((230 ? (((min(240, 4)))) : 106));
    var_18 = ((var_12 ? (max((var_2 + 179), var_11)) : ((((255 ? var_0 : 192))))));
    var_19 = (min(var_4, (((((~195) + 2147483647)) >> ((((max(var_13, var_11))) - 157))))));
    var_20 = ((var_14 ? var_9 : (!128)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, (((((max(var_14, var_7))) ? (((arr_7 [8] [i_2 + 1] [i_2 - 2]) ? (arr_8 [i_2] [i_1] [i_2 - 2] [i_2 - 1]) : var_2)) : ((var_13 ? (arr_8 [i_2] [i_2] [i_2 - 1] [4]) : (arr_8 [i_0] [i_1] [i_2 - 2] [6]))))))));

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1 + 4] [i_2] [i_3] [i_3 - 1] [i_1] = arr_6 [i_0];
                        var_22 = 192;
                        var_23 = (((167 / 237) >> (((((min(27, 179))) < (~var_10))))));
                    }
                    for (int i_4 = 3; i_4 < 14;i_4 += 1)
                    {
                        var_24 += (((~144) ? (arr_10 [i_0]) : ((max(var_0, 64)))));
                        var_25 = (((arr_15 [i_0] [i_2] [i_1]) ? (((156 ? var_5 : 0))) : (max((var_2 ^ var_0), 100))));
                        arr_16 [i_1] = ((var_0 ? var_14 : (min((arr_8 [i_1] [i_4] [i_4 + 1] [i_1]), (~255)))));
                    }
                    var_26 = (253 || 33);
                    var_27 *= (min(105, ((((max(var_2, var_4))) ? (arr_14 [i_2 - 1] [i_0] [i_1 + 3] [i_1 + 1] [i_1]) : ((48 ? 112 : var_1))))));
                }
            }
        }
    }
    #pragma endscop
}
