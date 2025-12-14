/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [i_1] = (((65536 << (((arr_1 [i_0 + 1] [i_0 - 1]) - 45543)))) + ((max((arr_1 [i_0 - 1] [i_0 + 3]), (arr_1 [i_0 - 1] [i_0 + 2])))));
                        var_17 = (arr_0 [i_1]);
                        var_18 = (max(var_18, (arr_6 [i_2])));
                    }
                }
            }
        }
        var_19 = arr_4 [i_0 + 1] [i_0] [i_0];
    }
    for (int i_4 = 1; i_4 < 15;i_4 += 1)
    {
        arr_15 [1] = (((((!((min(75, 180)))))) | 75));
        arr_16 [i_4] [i_4 - 1] = (((((var_7 * (arr_1 [i_4 + 1] [i_4 - 1])))) ? (arr_13 [i_4 - 1]) : (min((arr_3 [10] [i_4]), 128))));
        arr_17 [i_4 - 1] = ((var_9 ? var_9 : (((62394 ? -122 : 31744)))));
        var_20 = (max((((((75 | (arr_6 [4]))) <= ((max((arr_14 [i_4]), (arr_5 [i_4] [14]))))))), ((~((var_6 ? (arr_2 [i_4 + 1] [11] [i_4 - 1]) : var_6))))));
        var_21 = (arr_9 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1]);
    }
    #pragma endscop
}
