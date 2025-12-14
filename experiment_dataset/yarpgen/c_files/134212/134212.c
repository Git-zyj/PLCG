/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min((var_0 && var_11), (-32767 - 1))));
    var_21 = ((max(var_4, (~var_18))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = var_11;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_22 += ((((46 <= ((max(var_6, -46))))) && (((-(((arr_0 [i_0]) ? var_14 : 0)))))));
            arr_6 [i_0] [i_0] [i_0] = (((2079550773 != (arr_3 [i_0] [i_1] [i_0]))));
        }

        for (int i_2 = 4; i_2 < 22;i_2 += 1)
        {
            var_23 |= ((46 ? (arr_4 [i_2 - 4] [i_2 + 2]) : 20));
            var_24 = (min(((max((arr_7 [i_2] [i_2] [i_2]), (arr_7 [i_0] [i_0] [i_2])))), -var_1));
            arr_9 [i_0] = var_7;
            var_25 += 0;
        }
        for (int i_3 = 3; i_3 < 23;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_26 = (min(var_26, (((((~(arr_8 [i_3] [i_4] [20]))))))));
                        var_27 = (min((~0), (max((arr_5 [i_3 + 1] [i_3 + 1]), (arr_5 [i_3 + 2] [i_3 + 2])))));
                        var_28 = (arr_5 [i_3] [0]);
                    }
                }
            }

            for (int i_6 = 2; i_6 < 23;i_6 += 1)
            {
                arr_21 [i_0] [i_0] [i_0] = 2;
                arr_22 [i_0] [i_0] [i_0] = var_15;
            }
            arr_23 [i_3 - 1] [i_3] [i_3 + 2] = (arr_20 [i_0] [i_0]);
            var_29 ^= 255;
        }
    }
    #pragma endscop
}
