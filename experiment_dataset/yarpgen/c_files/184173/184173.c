/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 = ((((min(var_11, (min(var_8, var_10))))) * 224));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_15 -= max(108, 32);

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_16 = (min(138, (--221)));
                            arr_11 [i_4] [i_1] [i_2] [i_3] = max((max((arr_3 [i_1]), (((var_5 && (arr_5 [i_0] [i_0])))))), (max((arr_6 [i_0] [i_3] [i_2] [i_3] [i_1]), (arr_6 [i_0] [i_1] [i_2] [16] [i_1]))));
                        }
                    }
                }
                var_17 = (((arr_8 [i_2] [i_1]) ? ((max(var_6, (arr_9 [i_1] [i_1] [i_2] [i_1 + 1] [i_0])))) : (((arr_8 [i_2] [i_1]) * 169))));
                var_18 = (min(var_18, ((((((-(arr_8 [i_1 + 1] [i_0])))) ? ((max((arr_7 [i_1] [14] [i_2]), 153))) : var_4)))));
                var_19 += (((var_6 ? ((var_3 ? 233 : 153) : var_6))));
            }
            var_20 = min((min((arr_8 [i_0] [i_1]), (arr_8 [i_0] [i_1]))), (((((7 >> (193 - 168))) < var_5))));
            var_21 = (min(var_21, (((((((((arr_7 [i_0] [2] [i_0]) >> (((arr_6 [i_0] [i_1] [4] [12] [i_0]) - 153)))) < ((((arr_7 [i_1 - 1] [4] [i_0]) < var_3)))))) >> ((((var_6 ? ((var_9 ? var_12 : var_6)) : -var_9)) - 101)))))));
        }
        var_22 = (((arr_1 [i_0]) >> ((((max((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_5 [i_0] [2]))), (max((arr_10 [i_0] [i_0] [2] [i_0] [i_0]), var_10))))) - 155))));
    }
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        var_23 -= var_6;
        arr_14 [i_5] = ((((min((arr_13 [i_5 + 2]), (arr_12 [i_5 - 1])))) ? var_12 : (min(((196 >> (var_9 - 173))), (((arr_13 [i_5 - 2]) >> (((arr_12 [11]) - 121))))))));
        arr_15 [i_5] = ((((((239 ? 223 : 128) < var_6)))));
    }
    var_24 = var_12;
    var_25 -= var_3;
    #pragma endscop
}
