/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_11, (((((var_18 ? var_2 : -84)) != (var_6 <= 9223372036854775807))))));

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 = (arr_0 [9]);
            arr_6 [1] = (((((-(arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])))) ? (((var_18 ? var_12 : (arr_1 [i_1] [i_1])))) : ((max(1787192702619500513, 1787192702619500513)))));
            var_21 = (max(var_21, 1));
        }
        var_22 = var_8;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_23 += (arr_11 [i_0] [i_2] [1] [i_3]);
                    var_24 = (min(var_24, (((-(arr_2 [i_0 - 3]))))));
                    var_25 = (max(var_25, (((60 < ((min((arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 4]), 46))))))));
                    arr_12 [i_0] = ((209 ? 1787192702619500513 : (max(((((arr_5 [i_0 - 4] [i_0 - 4] [i_0]) >= 1787192702619500513))), (max(210, 1787192702619500513))))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_26 = (-18 > 210);
        arr_17 [i_4] = (arr_16 [i_4] [i_4]);
    }
    #pragma endscop
}
