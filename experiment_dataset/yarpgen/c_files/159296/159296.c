/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (var_15 - 4294967289);
                arr_7 [0] |= ((var_9 - ((((4446187188983660487 >= 49858274120671266) || (~var_4))))));
                var_21 -= (((arr_2 [i_0] [i_0]) ? var_16 : -117));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_3] [i_2] [5] [i_1] = ((2964342703399893110 ^ (var_13 | 1253829166)));
                                arr_15 [i_4] [i_1] [1] [i_2] [i_1] [i_0] = 8529581140448148609;
                                var_22 = (max(var_22, ((max(((((((arr_13 [11] [i_1 - 3] [i_3]) % var_16))) ? ((809241887 ? -23582 : 4294967265)) : (((((arr_1 [i_1] [i_1 - 2]) != (arr_8 [i_1] [i_4] [i_3]))))))), ((max(((var_0 ? var_15 : (arr_5 [i_4] [10] [i_3]))), ((var_2 >> (((arr_1 [i_0] [i_3]) + 123))))))))))));
                            }
                        }
                    }
                }
                arr_16 [0] |= -969251443;
            }
        }
    }
    #pragma endscop
}
