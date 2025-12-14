/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_16 = (max((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 + 1]))), ((max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))))));
        var_17 = (min(var_17, (((!(arr_2 [i_0 + 2]))))));
        var_18 = (min(((min(((!(arr_1 [i_0 + 1]))), (((arr_0 [i_0 + 2]) > (arr_1 [i_0])))))), (((arr_1 [i_0 + 1]) ? (arr_0 [i_0]) : ((var_6 / (arr_0 [i_0])))))));
        arr_3 [i_0] [i_0] = (arr_1 [i_0 + 2]);
    }
    var_19 = min((max((((var_2 ? 65 : 36837))), (max(var_14, var_9)))), (((((max(var_1, var_11))) || (((28699 << (28698 - 28697))))))));

    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_20 &= (min(((((((arr_4 [i_1]) ? 1 : (arr_5 [i_1 + 1] [i_1 - 1])))) % (min(13198130870258380353, 224)))), ((((arr_4 [i_1]) ? (arr_5 [i_1] [15]) : (36857 - 3061498580728240411))))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    {
                        var_21 = (arr_12 [i_1] [i_2]);

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            arr_18 [i_1] [i_2 - 2] [i_2 - 2] [i_4] [i_5 + 1] &= ((((var_13 ^ (arr_15 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1]))) & (arr_11 [i_1] [i_3 + 1] [i_5 - 1] [i_2 + 1])));
                            arr_19 [i_1] [i_1] [i_4] [i_4] = (((arr_9 [i_1 + 1] [i_1 + 2] [i_1 + 1]) % 1));
                            arr_20 [3] [4] = ((!(arr_16 [i_1 + 1] [1] [i_2 - 2] [i_3] [i_5 - 1] [i_5 - 1])));
                            var_22 = (min(var_22, ((((arr_9 [i_3] [1] [i_5 - 1]) << ((((36845 ? 13198130870258380350 : 5248613203451171263)) - 13198130870258380330)))))));
                        }
                        arr_21 [i_2] [i_3 + 3] [i_2] = (max((min((arr_6 [i_2]), (arr_9 [i_1] [i_1 + 1] [i_1 + 1]))), ((((arr_12 [i_1 - 1] [i_2 - 1]) ? (arr_12 [i_1 + 1] [i_2 - 1]) : 224)))));
                        arr_22 [i_1] [i_2 - 1] [i_3 - 1] [i_4] = ((((((arr_10 [i_1 + 2] [i_2 + 1] [i_4 - 2] [i_4]) / (arr_10 [i_1 + 2] [i_2 + 1] [i_4 - 2] [i_4 - 1])))) / (((min(17302, (arr_6 [i_2 + 1]))) / (((-(arr_4 [i_3]))))))));
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        var_23 = 255;
        arr_25 [i_6] = (min((((max(var_6, var_6)))), (max((30178 - var_2), (((arr_24 [i_6]) - -32763))))));
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 22;i_7 += 1)
    {
        var_24 = (((arr_26 [i_7] [i_7 - 3]) ? (arr_26 [i_7 - 1] [i_7 - 3]) : (arr_26 [i_7 - 1] [i_7 - 1])));
        var_25 = (((var_13 >= (arr_26 [i_7] [i_7 + 1]))) ? (((0 || (arr_26 [i_7] [i_7 - 2])))) : (arr_26 [i_7] [i_7 + 1]));
    }
    #pragma endscop
}
