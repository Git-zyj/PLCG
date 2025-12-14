/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_10 += (max((-9223372036854775807 - 1), (((arr_1 [i_1]) ? 4284749017 : (((arr_1 [i_1]) ? 3172585732 : 9223372036854775790))))));
                var_11 = (max((max((((arr_3 [i_1] [i_0]) ? var_0 : var_3)), (var_3 >= 1))), (((((((arr_1 [i_0]) ? (arr_0 [i_0]) : var_4))) <= (min(var_5, var_0)))))));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            arr_10 [i_2] [i_3] [i_3 - 1] = (((arr_4 [i_3 - 1]) - 9223372036854775794));
            arr_11 [i_2] [i_3] = 1;
            var_12 = (min(var_12, ((((arr_7 [i_2] [4] [i_3 - 1]) <= (arr_8 [0]))))));
            arr_12 [i_3] [i_3] [i_3 - 1] = (arr_9 [i_3 - 1] [i_3 - 1] [i_3]);
        }
        arr_13 [i_2] [i_2] = (arr_8 [12]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    var_13 = (max(var_13, (~var_2)));
                    var_14 = (min(var_14, var_4));
                    arr_21 [i_5] [i_4] [i_4] [i_2] = (((((67108864 ? var_2 : var_7))) ? var_5 : (!var_8)));
                    arr_22 [i_4] [i_4] = (var_7 && 4294967295);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_15 = (arr_25 [i_2] [i_6 + 3] [i_7] [i_2]);
                    arr_27 [i_2] [i_2] [i_2] [i_2] &= ((-(arr_6 [i_6 + 4] [i_7] [i_6 - 3])));
                }
            }
        }
    }
    #pragma endscop
}
