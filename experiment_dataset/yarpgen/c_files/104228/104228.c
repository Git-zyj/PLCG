/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_1] [i_2] = ((max((arr_4 [i_0] [i_0]), ((min(1, (arr_5 [i_0])))))));

                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_3] [i_1] [i_2] = (max(32985348833280, 7));
                        arr_13 [i_2] [0] [i_2 + 3] [i_3] [i_2] [i_1] = ((min((max(18446711088360718316, 2147483647)), (((18446744073709551615 != (arr_3 [i_1] [7] [i_1])))))));
                    }
                    arr_14 [i_2] = ((((max(32985348833280, var_3))) ^ (((var_4 != (min(var_14, (arr_1 [i_0]))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    var_18 = (min(var_18, (((max((max((arr_16 [i_4] [i_5 - 1]), 18446744073709551607)), ((((arr_17 [i_5 - 1]) && var_6)))))))));
                    arr_23 [i_4 + 2] [i_5 - 1] [i_5 - 1] = (max(1, 67076096));
                }
            }
        }
    }
    var_19 = (((((min(1649267441664, var_12)) & 240)) != (max((var_3 && var_4), (max(48, var_5))))));
    #pragma endscop
}
