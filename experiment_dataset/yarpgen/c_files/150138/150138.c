/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((65523 ? -7359565709178088914 : 2147483647));
    var_18 = (max(var_8, (((max(var_9, var_10)) - var_12))));
    var_19 |= -4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = (((arr_1 [i_0]) ? ((((((arr_0 [i_1]) ? var_0 : var_9))) ? (min(var_4, var_9)) : (((0 << (var_13 - 80)))))) : var_7));

                for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1 + 1] [i_2] = var_1;
                                arr_14 [i_0] [i_1] [4] [i_3] [1] = ((((((min(var_12, (arr_10 [i_3] [i_1] [i_1 - 1] [1] [6]))) != (((var_6 ? var_15 : var_0)))))) << (var_15 + 1212602045)));
                                var_21 = (((var_5 ? ((var_4 & (arr_12 [i_0] [8] [i_0] [2] [i_0] [i_4]))) : (var_10 ^ var_6))));
                            }
                        }
                    }
                    var_22 = (min(var_22, var_11));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 6;i_6 += 1)
                        {
                            {
                                var_23 = 16384;
                                arr_19 [8] [8] [i_2] [i_5] [i_0] [i_0] [i_6] = (((((((var_13 ? 109 : 427082613)) > var_6))) ^ (arr_11 [i_2])));
                                var_24 ^= max(((18 + (arr_8 [i_0] [i_5] [i_2 - 1]))), -var_13);
                                var_25 ^= var_2;
                            }
                        }
                    }
                }
                for (int i_7 = 2; i_7 < 9;i_7 += 1) /* same iter space */
                {
                    var_26 ^= 4;
                    var_27 = var_10;
                    var_28 = 16366;
                }
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    var_29 = (arr_21 [i_0] [i_1 - 1] [2] [i_8]);
                    var_30 ^= (((((((((arr_20 [i_8] [i_1 + 1]) ^ (arr_21 [i_0] [6] [i_8 + 1] [i_1])))) ? ((var_7 ? -2 : var_2)) : (arr_15 [i_0] [i_0] [i_0] [8] [i_8])))) | (max((arr_20 [i_0] [i_1]), -2867094518820566171))));
                    var_31 = (max(((((~(arr_1 [i_8]))))), (175 ^ 9285627994650638733)));
                }
            }
        }
    }
    #pragma endscop
}
