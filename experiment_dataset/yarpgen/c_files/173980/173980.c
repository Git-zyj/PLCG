/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-((((min(1152851135862669312, var_2))) ? var_0 : ((var_11 ? 1152851135862669312 : var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_14 |= (min(((-var_9 ? (-2147483647 - 1) : 4294967295)), var_5));

                for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 = (((max((((arr_12 [i_0] [1] [i_0] [1] [i_0] [i_0]) ? (arr_0 [15]) : (-2147483647 - 1))), (arr_4 [i_1] [i_3])))) ^ (~var_4));
                                var_16 |= (max((max(((var_12 ? 17873661021126656 : var_0)), (-2147483647 - 1))), ((min(2147483647, var_1)))));
                                var_17 = (max(var_17, (arr_7 [i_1 + 3] [i_1 + 3] [i_1 + 3])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_18 = 2147483647;
                                arr_20 [i_5] = (((!var_9) & var_1));
                                arr_21 [i_0] [i_5] = min(2177753569, (min(2147483641, (min(2147483621, var_4)))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                {
                    arr_25 [i_0] [i_0] [i_7] = max((((226 && (((1 ? (arr_4 [1] [i_1 - 2]) : 2161727821137838080)))))), ((((min((arr_7 [i_0] [i_0] [i_7]), (arr_22 [i_1] [i_1 - 2] [i_7])))) ? (119 & 65535) : 33776997205278720)));
                    var_19 = var_11;
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_20 = (max(var_20, var_3));
                                var_21 -= -2147483647;
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((!((max(((-17873661021126656 ? var_2 : 17293892937846882304)), 1152851135862669312)))));
    var_23 = (max(var_23, (((var_4 != ((((!(var_12 || var_7))))))))));
    #pragma endscop
}
