/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 9223372036854775791;
    var_11 = ((((var_6 ? (~93) : var_6)) >= var_3));
    var_12 = (min((min(((-10393 ? var_4 : -9223372036854775803)), var_5)), var_9));
    var_13 = (max(((var_6 ? var_1 : var_6)), var_6));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_9 [i_2] [i_2] [i_1 + 1] [i_1] [i_2] = ((-55021 ? (((arr_5 [i_0 + 1] [i_1 + 2] [i_2 - 1] [i_2 - 1]) * (arr_5 [i_0 + 1] [i_1 + 2] [i_2 + 2] [i_2 - 1]))) : ((max((arr_5 [i_0 + 1] [i_1 + 1] [i_2 - 1] [i_2 + 3]), (arr_5 [i_0 + 1] [i_1 + 2] [i_2 + 3] [i_2 + 1]))))));
                        var_14 = 12288;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = (min((arr_10 [i_5]), ((max((arr_11 [i_0 + 1]), (arr_17 [10] [i_4] [i_0 + 1] [13]))))));
                        arr_21 [i_6] [i_4] [i_5] [0] [i_5] = ((((max((((arr_11 [i_0]) ? 1630244543 : (arr_10 [1]))), (min((arr_19 [12] [i_5] [2]), (arr_5 [i_0 + 1] [i_0 + 1] [i_5] [i_5])))))) ? (arr_12 [i_0] [i_5] [i_5]) : (((arr_16 [i_0] [i_4 + 2] [3] [i_0] [i_6]) ? -54 : (((arr_7 [i_0] [i_0 + 1]) ? (arr_0 [i_0]) : (arr_18 [i_0] [2] [i_5])))))));
                        arr_22 [i_6] [i_4] [i_5] [i_6] |= (arr_11 [i_0 + 1]);
                    }
                    var_15 ^= ((!((((arr_4 [i_4] [i_4] [i_5]) ? ((10504 ? 9223372036854775807 : 255)) : 1630244516)))));
                }
            }
        }
        var_16 = (min(var_16, (((4064 ^ ((((((arr_16 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0]) + 2147483647)) << (((arr_5 [i_0] [i_0 + 1] [12] [i_0]) - 16669))))))))));
        arr_23 [i_0] = (63 ? 17912 : 6344808450695638943);
    }
    #pragma endscop
}
