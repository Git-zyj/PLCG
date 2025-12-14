/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = (min((min((3641879729 || var_6), (arr_4 [i_1] [i_1]))), ((min(var_16, (((arr_4 [i_1] [i_1]) ? (arr_7 [i_1] [i_1]) : var_11)))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 = (max(var_18, (((((((~var_1) ^ var_11))) ? (arr_8 [i_0] [i_2] [i_2] [i_3]) : (((((arr_6 [i_0] [i_2] [i_0]) && (arr_6 [i_0] [i_2] [i_0]))))))))));
                        arr_11 [i_2] |= (((((653087575 ? 127 : var_11))) ? ((max((arr_4 [i_2] [i_1]), ((2137830710 >> (((arr_7 [i_2] [i_3]) - 3229))))))) : ((198 ? (((var_16 ? var_11 : (arr_10 [i_0] [i_1] [i_1] [i_2])))) : (max((arr_9 [i_0] [i_2]), var_9))))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_19 = (~1531145111);
                        arr_14 [i_1] [i_1] [3] [9] = ((min((arr_5 [i_1] [i_2]), (arr_5 [i_1] [i_4]))) & (min((arr_5 [i_1] [i_4]), (arr_5 [i_1] [i_4]))));
                        var_20 |= var_10;
                    }
                    var_21 = ((((((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1])))) ? (((arr_4 [i_1] [6]) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_2]))) : ((var_16 ? var_0 : (arr_4 [i_1] [i_1])))));
                }
            }
        }
    }
    var_22 = 3;
    var_23 |= var_7;
    #pragma endscop
}
