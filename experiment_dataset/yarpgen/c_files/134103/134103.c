/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_17 = (max(((-(arr_5 [i_0] [i_1] [i_2 + 1]))), (arr_7 [i_0] [i_0] [i_0])));
                            var_18 = 2276917313695848927;
                            arr_8 [i_0] = (((((11697 ? ((~(arr_1 [i_1]))) : (((arr_0 [i_0] [i_1]) & (arr_4 [i_0] [i_1] [i_2] [i_3])))))) ? (((((var_7 ? (arr_3 [i_0] [i_2 + 1] [i_2 + 1]) : 11697)) <= ((var_6 ? (arr_7 [i_1] [i_2] [i_3]) : 53829))))) : (((((31 ? (arr_7 [i_0] [i_1] [i_2 - 2]) : -40))) ? (arr_7 [i_0] [i_2] [i_3]) : (~var_5)))));
                            var_19 = arr_5 [i_2 + 2] [i_2 - 1] [i_2 - 1];

                            for (int i_4 = 1; i_4 < 16;i_4 += 1)
                            {
                                var_20 = (((((var_7 - 95) + 2147483647)) << ((((87 ? (arr_10 [i_4] [i_4 + 3] [i_4] [i_4] [i_4]) : (arr_4 [0] [i_2 - 3] [i_4 + 2] [i_2 - 3]))) - 4237023565))));
                                var_21 |= ((((((arr_9 [i_4 - 1] [i_1] [i_2 - 1] [i_1] [i_4]) ? 121 : (arr_9 [i_4] [10] [i_4 + 2] [i_4 - 1] [i_4 + 3])))) ? 151 : 159));
                                var_22 = min(11693, var_11);
                            }
                        }
                    }
                }
                var_23 |= (((((max(-20, var_1))) > var_9)));
                var_24 = ((((max((arr_3 [i_0] [i_1] [i_1]), (arr_0 [i_1] [i_0])))) >> (((max(11707, ((((arr_9 [i_0] [16] [i_1] [16] [i_1]) >= var_7))))) - 11695))));
            }
        }
    }
    #pragma endscop
}
