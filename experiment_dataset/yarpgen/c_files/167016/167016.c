/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    var_17 = (max((((arr_1 [i_0 - 2]) & (arr_0 [i_2 - 2]))), -1145626768));
                    var_18 = ((1423730148 ? 17 : 554153860399104));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    arr_10 [i_0 + 1] [0] [i_1 - 3] [i_1] = (((((-(arr_4 [i_1 - 2])))) ? (min(4064, 1)) : (max((arr_3 [i_3]), (min(4294967295, (arr_7 [i_0] [i_0] [i_3])))))));
                    arr_11 [i_1] [i_3] = ((((18446744073709551591 ? 37023 : (arr_8 [15] [i_1])))) - (((((max(var_2, var_7))) ? ((min(var_3, 1))) : (max(var_13, 6))))));
                }
                var_19 = 17;

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_15 [i_0] [i_1 - 1] [i_1] = (8 >= -27703710);
                    var_20 ^= ((min((arr_14 [i_1 + 2]), 16130094763624411965)));
                    var_21 = (max((((max(32758, 1449041496)) & (((arr_3 [15]) + (arr_0 [i_0]))))), ((((var_1 ^ (arr_13 [i_4] [i_4] [i_4] [i_4])))))));
                }
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    var_22 ^= 1;
                    arr_18 [i_1] [i_1] [i_1] = 3781886574520876601;
                    arr_19 [i_1] [i_1] [i_5 + 1] [i_1 + 1] = (((arr_1 [i_0 - 3]) ? (16 & 3709835457) : (252 | 48)));
                }
            }
        }
    }
    #pragma endscop
}
