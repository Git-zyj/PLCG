/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = ((1925441336 / (arr_2 [i_0] [i_1 + 2])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [6] [i_1] [i_0] [i_0] = ((65535 ? ((180 ? (min(65535, (arr_5 [i_0] [i_2] [i_3]))) : (((21 ? var_2 : 1015808))))) : 9));
                            arr_14 [i_0] [i_1] [i_2] [i_3] = (((1 || 2147483647) - (arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3])));
                            arr_15 [i_3] [8] [1] [8] [8] [8] = var_13;
                            arr_16 [i_0] [i_0] [i_0] [1] [i_0] [i_3] = ((-(min((arr_11 [i_0] [4]), (var_0 % var_7)))));
                        }
                    }
                }
                arr_17 [i_0] [i_0] = (((((1336555855 ? 1 : 47279))) ? (((((min(var_4, (arr_8 [i_0] [i_1 + 1] [i_0] [i_1 + 2]))) + 9223372036854775807)) << (arr_4 [8]))) : ((((((arr_0 [i_1]) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_3)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {
                arr_22 [i_4] [i_4] [i_4] = (var_6 ^ (min(var_6, (((arr_10 [i_4]) ? (arr_19 [i_5] [1]) : var_1)))));
                arr_23 [i_5] [3] [10] = (((!var_0) ? (((arr_9 [i_4] [i_4] [i_4]) ? var_9 : (arr_9 [i_4] [i_5] [i_4]))) : ((-(arr_9 [i_4] [i_4] [1])))));
            }
        }
    }
    var_18 = ((!((max(var_14, (~var_17))))));
    #pragma endscop
}
