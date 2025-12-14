/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_0 && ((max((~var_16), var_16)))));
    var_19 = ((((var_7 ? 2908609138 : var_5))) * (((((1 ? -71 : 2908609121))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (!((var_4 <= (arr_0 [i_0]))));
        var_20 = (min(var_20, var_15));
        arr_3 [i_0] = (((((1386358165 << (-32748 + 32778)))) ? (arr_1 [i_0]) : (((3084889710 >> (-1 + 10))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_21 = (max(var_21, ((((((var_6 ? (arr_1 [i_1]) : (arr_6 [2])))) ? ((((arr_6 [i_1]) && var_4))) : (arr_6 [i_1]))))));
        arr_7 [i_1] = -7201239397462873733;
    }
    for (int i_2 = 4; i_2 < 9;i_2 += 1) /* same iter space */
    {
        var_22 = ((((arr_9 [i_2 + 1]) ? (arr_9 [i_2 + 1]) : (arr_9 [i_2 - 1]))) * (((arr_9 [i_2 - 1]) - (arr_9 [i_2 + 1]))));
        arr_10 [i_2] = (((((arr_0 [i_2 - 4]) / (arr_0 [i_2 - 2]))) == -var_14));

        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            var_23 = (arr_6 [0]);
            var_24 = arr_11 [3] [3];
            var_25 = (arr_8 [i_2] [i_3]);
            var_26 = (min(var_26, (((((2030912293 ^ (arr_1 [i_3]))))))));
        }
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                {
                    var_27 = ((((~(arr_6 [i_2 - 2]))) - (((arr_1 [i_2 - 2]) >> (((arr_6 [i_2 - 2]) - 647802801))))));
                    arr_17 [i_2] [i_2] [i_2] [7] = ((((((var_16 / -32753) + ((2601028576417254148 << (32751 - 32691)))))) ? var_7 : (((((8388606 << (var_3 - 4123427474)))) ? ((6588614621514225738 ? 1 : 1284446235732889410)) : (arr_8 [i_4] [0])))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 7;i_7 += 1)
                        {
                            {
                                arr_23 [i_2] [i_4] [0] [i_5] [i_6] [1] [2] = ((!(arr_22 [1] [1] [i_5] [i_6] [i_6] [i_6] [7])));
                                arr_24 [i_2] [i_2] [i_2] = (((!2908609143) ^ (!2601028576417254148)));
                                arr_25 [i_7] [i_6] [i_5] [i_4] [i_2] = ((0 ? 65535 : (((2147483647 == 2908609140) ^ 4))));
                            }
                        }
                    }
                    arr_26 [5] = ((((((var_9 ? 536869888 : (arr_18 [i_2] [i_2] [i_2] [i_2] [i_2])))) ? -10 : ((((arr_1 [i_2]) < 15845715497292297465))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 9;i_8 += 1) /* same iter space */
    {
        var_28 = (arr_9 [i_8]);
        var_29 = 17808;
        arr_30 [4] = (((var_1 ? (arr_16 [i_8] [5] [i_8]) : -1343195400)));
    }
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 13;i_10 += 1)
        {
            {
                arr_39 [i_9] [i_10] [i_9] = var_6;
                var_30 = (min(var_30, (((((var_10 / 10669505973771648394) ? (var_14 * var_10) : ((17945705447331089777 ? var_10 : var_15))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 2; i_11 < 16;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            {
                arr_45 [i_11] [i_11] = (arr_40 [1]);
                arr_46 [i_11] [i_12] [i_12] = var_13;
                var_31 = var_1;
            }
        }
    }
    #pragma endscop
}
