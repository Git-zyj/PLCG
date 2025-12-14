/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = (!(var_0 >= 2301339409586323456));
        var_12 = var_7;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_13 += (!7359604006239870937);

            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                arr_6 [i_1] [i_1] [i_1] [i_2] = 11087140067469680678;
                arr_7 [i_0] [i_0] [i_1] [i_1] = (arr_3 [i_0] [i_1] [i_2 - 4]);
                var_14 += ((~(arr_4 [i_2] [i_2] [i_2 - 3] [i_2 - 4])));
                var_15 = (min(var_15, (((var_2 - (var_2 + 1717153566171467133))))));
            }
            var_16 = ((-9223372036854775807 - 1) >= 11087140067469680678);
            var_17 = 3253691326728044140;
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            arr_11 [i_0] [i_0] [i_0] = arr_10 [i_3] [i_3] [i_3];
            var_18 = var_4;
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_19 = (min(var_19, (~0)));
                            arr_19 [i_4] [i_3] |= (((arr_15 [i_6] [i_5 - 2] [i_3] [i_0]) < ((7359604006239870933 - (arr_3 [i_4] [i_5 - 3] [i_6])))));
                            var_20 = (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_21 = (max(var_21, ((((arr_8 [i_5 - 3] [i_0]) != -4766062841956606033)))));
                        }
                    }
                }
            }
        }
    }
    var_22 = var_1;
    #pragma endscop
}
