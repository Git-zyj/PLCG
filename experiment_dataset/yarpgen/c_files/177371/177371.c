/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((((!218) == var_8))), (min(((37 >> (57 - 43))), ((var_3 << (var_10 - 49232)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((((4294967289 + (arr_4 [i_0 - 4] [i_0 - 4])))))));

                    for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
                    {
                        var_15 -= ((-28383 ? -6086121085225712430 : (((max(56, 220))))));
                        var_16 = (max(var_16, (arr_5 [i_0])));
                        var_17 = ((+(((arr_2 [i_0 + 1]) ? (arr_2 [i_0 - 4]) : 196))));
                    }
                    for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_2] = (arr_4 [i_2] [i_4]);
                        var_18 = 60;
                        arr_15 [i_0] [18] [i_2] [i_2] = (((arr_5 [i_4]) ? (min(((var_11 ? (arr_9 [i_0] [i_1] [i_1] [i_4]) : (arr_12 [i_0 - 3] [i_1] [i_2] [i_1]))), (~196))) : (((((arr_10 [i_0] [i_1] [i_2]) != 34676))))));
                    }
                    for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_19 = (max((((min(28921, 54669)))), (!var_11)));
                        var_20 = (arr_18 [i_2] [i_0] [i_1] [i_5 - 1]);
                        var_21 = (!0);
                        var_22 = (arr_5 [i_2]);
                    }
                    var_23 = (~-106);
                    arr_19 [i_0] [i_2] = (max((arr_4 [i_0] [3]), ((min(196, 196)))));
                    var_24 ^= 9977159138778427556;
                }
            }
        }
    }
    #pragma endscop
}
