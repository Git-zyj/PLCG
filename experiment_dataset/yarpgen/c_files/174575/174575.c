/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_1] = -var_8;
                        arr_10 [5] [5] [i_1] [i_2] [i_3] = ((!(!var_8)));
                        arr_11 [i_0] [i_1] [i_1] [i_3] [i_1] [i_3] = (min((0 % var_11), (((var_1 ? 6972359112213113579 : (arr_1 [i_2] [i_2 + 1]))))));
                        arr_12 [i_1] [i_1] = (max((arr_8 [i_2 + 1] [i_3 + 1]), 92));
                    }
                    for (int i_4 = 3; i_4 < 9;i_4 += 1)
                    {
                        arr_15 [4] [4] [i_1] &= var_6;
                        arr_16 [1] [i_1] [1] [i_4] &= (arr_6 [i_0] [i_0] [10]);
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        var_12 = ((-((var_6 ? -84 : 33554432))));
                        arr_21 [i_1] [3] [i_1] = (~-6972359112213113580);
                        var_13 = ((-2075289369 || (((-1 ? var_2 : -6972359112213113585)))));
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_1] [i_1] = 140737488355327;
                        var_14 = (min((((-(((arr_2 [i_0] [i_1]) | (arr_19 [i_6] [0] [i_1] [i_0])))))), var_2));
                        var_15 ^= (-((~((8388576 ? 0 : (arr_2 [i_0] [i_1]))))));
                    }
                    arr_25 [i_0] [i_1] = ((!((((arr_1 [i_2] [i_1]) ? (arr_13 [i_2 - 1] [i_2] [i_2] [i_2 + 1] [i_2 + 1]) : (((-(arr_17 [i_0] [i_1] [i_1] [i_2])))))))));
                    var_16 = ((-((~((6972359112213113584 % (arr_14 [i_1] [i_1] [i_1] [i_1] [7])))))));
                }
            }
        }
    }
    var_17 = (~var_3);
    #pragma endscop
}
