/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((1780233069 ? 44401 : var_10)) == (!var_4))) ? ((var_7 ? (var_9 & var_10) : var_0)) : (max((max(var_0, var_3)), var_9)));
    var_12 = (~1);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_1] = ((14384 ? (min((((-455359923572058959 ? 64932 : (arr_1 [i_1])))), (min((arr_3 [i_1] [i_1] [10]), 10729579113392270488)))) : (((((min(45978, -5760))) * var_7)))));
            var_13 = 56;

            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                var_14 = (max((~var_8), ((5739 ? 5739 : var_3))));
                arr_8 [i_1] = ((((min(var_9, -5))) && var_3));

                /* vectorizable */
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    var_15 = ((56 ? ((((arr_0 [i_3]) && (arr_5 [i_0] [i_0] [i_0] [i_0])))) : (!-5760)));
                    arr_12 [i_1] [i_1] [i_2] = ((!(((arr_3 [i_0] [i_1] [i_2 + 1]) <= (arr_0 [i_0])))));
                    arr_13 [i_1] [i_1] [i_1] [i_3 - 1] = (((((81 ? 3866536377 : 66))) ? (~20462) : 2247981250));
                    arr_14 [i_1] [i_2] [i_3] = (arr_9 [i_0]);
                }
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_18 [i_0] [i_0] [i_1] = 4264806767226707678;
                arr_19 [i_0] [i_1] = min((((-var_9 ? (((arr_6 [i_0] [i_0] [i_4]) ? (arr_17 [i_1] [i_1]) : (arr_16 [i_1] [i_1] [i_1] [i_0]))) : (((arr_15 [i_0] [i_0]) ? (arr_17 [i_1] [1]) : -5157))))), ((-var_6 + (((arr_0 [i_4]) ? var_8 : var_7)))));
            }
        }
        var_16 = (min(0, 21668));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_23 [i_5] [i_5] = (min(-67, 9177006056705084104));
        var_17 = ((+((min((arr_5 [i_5] [i_5] [i_5] [0]), (arr_5 [i_5] [i_5] [i_5] [i_5]))))));
        arr_24 [i_5] = (min((min((arr_6 [i_5] [i_5] [i_5]), (arr_11 [i_5] [i_5] [i_5]))), (186 < 64650)));
    }
    #pragma endscop
}
