/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106572
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1 + 1] [i_0] [i_1] = (!32767);
                    arr_7 [i_1] [i_1] = (max(var_16, (((-1202103735 >= ((min(var_17, (arr_0 [i_0] [i_0])))))))));
                    arr_8 [i_0] [i_2] [i_2] &= (4121933864945227897 * 0);
                    var_20 |= ((1 ? (((var_15 >= (min(var_11, 2351365410))))) : ((min((-127 - 1), var_1)))));
                }
            }
        }
    }
    var_21 = var_6;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_22 += ((((28029 ? ((max(203, 144))) : var_1)) & (((!((max(-66, (arr_9 [i_3] [i_7])))))))));
                                var_23 ^= ((var_13 ? (((arr_18 [i_6] [i_4] [0]) ? -120 : -1362328446)) : 163));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_24 = (((((((max(78, var_2))) || ((max((arr_21 [1]), 32746)))))) <= (((~(arr_18 [7] [i_4] [i_3]))))));
                        var_25 = (max((max((arr_15 [i_5 - 3] [i_5 - 3] [i_5 + 2]), (arr_15 [i_5 - 3] [i_5 + 2] [i_5 - 3]))), (arr_15 [i_5 - 1] [i_5 - 1] [i_5 + 2])));
                        arr_22 [i_3] [i_3] = 607181221;
                        var_26 += var_6;
                        var_27 *= ((~(arr_21 [i_3])));
                    }
                    for (int i_9 = 4; i_9 < 16;i_9 += 1) /* same iter space */
                    {
                        arr_25 [i_3] [i_4] [i_3] [i_3] = 82;
                        arr_26 [i_3] [i_3] [i_5 + 1] [i_9] [i_9 - 1] = (((-2147483647 - 1) ? (((!133) ? ((max(1362328445, 0))) : (arr_19 [i_5] [i_3] [i_5 - 3] [i_5] [19]))) : 252));
                    }
                    /* vectorizable */
                    for (int i_10 = 4; i_10 < 16;i_10 += 1) /* same iter space */
                    {
                        arr_29 [i_3] [i_3] [i_3] = ((arr_28 [i_10 + 3] [i_10 + 2] [i_10 + 2] [i_5] [i_5 - 3]) ? (var_11 | 219194911) : (arr_24 [i_5 + 1]));
                        var_28 = 161;
                    }
                }
            }
        }
    }
    #pragma endscop
}
