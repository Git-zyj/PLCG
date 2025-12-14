/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = ((((!((min(0, (arr_3 [i_1] [i_0]))))))));
                arr_4 [16] [16] = 55967;
            }
        }
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_13 = (min(var_13, ((((((arr_2 [i_2] [i_2]) << (((arr_2 [i_2] [i_2]) - 5093885911741721026)))) / (max((arr_2 [16] [i_2]), (arr_2 [i_2] [i_2]))))))));
        arr_9 [i_2] = ((((min(var_7, (arr_6 [i_2] [i_2])))) ? (max((min(3836, (arr_8 [i_2] [i_2]))), (arr_6 [i_2] [i_2]))) : (((-((min(65532, (arr_5 [i_2])))))))));
        var_14 = (min(var_14, ((((arr_3 [i_2] [i_2]) | ((min(var_11, var_11))))))));
        var_15 = (min(var_15, (((((min((((arr_5 [14]) >> (2996 - 2986))), var_2))) + (min((arr_5 [i_2]), (arr_6 [i_2] [i_2]))))))));
    }
    for (int i_3 = 2; i_3 < 22;i_3 += 1)
    {
        var_16 = var_11;
        arr_12 [i_3] = (min(((((var_9 != (arr_10 [i_3]))) ? ((2737509755497892966 ? (arr_11 [i_3]) : 135)) : ((((arr_10 [i_3]) >= var_10))))), ((((min((arr_11 [17]), (arr_10 [i_3]))) == var_0)))));
        arr_13 [i_3] = (arr_10 [i_3 + 2]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 24;i_5 += 1)
            {
                {
                    var_17 = -8224155892893779236;
                    var_18 = ((((max(((max(126, 121))), (arr_19 [i_3] [i_3] [11] [i_3])))) && 12485));
                }
            }
        }
    }
    for (int i_6 = 3; i_6 < 7;i_6 += 1)
    {
        arr_22 [i_6] [i_6] = var_6;
        arr_23 [i_6] = var_2;
        arr_24 [i_6 + 1] = (min(((-((5 ? 1190233580 : (arr_15 [i_6]))))), (((-(arr_18 [i_6] [i_6] [i_6]))))));
    }
    #pragma endscop
}
