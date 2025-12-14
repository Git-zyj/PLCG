/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_1 << (var_6 - 1915863571)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((-2 ? (arr_1 [i_0] [i_1]) : (((((58 == (arr_2 [i_1])))) & 74))));
                var_17 = (min(var_17, ((((arr_5 [6] [i_1]) ? (((var_5 ? (arr_3 [i_0]) : (arr_3 [3])))) : (min((arr_5 [i_1] [i_0]), ((var_0 + (arr_5 [i_0] [i_1]))))))))));
                var_18 = (((~-1) ^ (min(10, 1))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 11;i_4 += 1)
            {
                {
                    arr_17 [8] [i_4] [i_4] = (max(64, 3673509390));
                    arr_18 [i_4] [i_3] [i_4] = ((((max((arr_12 [i_4] [i_4 - 2] [i_4]), (arr_13 [i_4 + 1] [i_2 - 1] [10])))) - (max(5025292449359961994, (arr_1 [i_2] [i_2])))));
                }
            }
        }
    }
    var_19 = 0;
    #pragma endscop
}
