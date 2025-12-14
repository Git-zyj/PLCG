/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    arr_7 [i_2] = ((max(1332614389, var_16)));
                    var_20 = (+((((((arr_3 [i_0]) ? var_16 : 4353))) ? (~-1) : (((0 == (arr_5 [i_1 - 1])))))));
                    arr_8 [i_0] [i_1] [i_0] |= ((((min(64512, -var_3))) ? -117 : 1));
                }
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    arr_13 [11] [i_1 + 1] [i_0] = (~11050);
                    arr_14 [i_1] [i_0] = ((~(((arr_9 [i_0] [i_0] [i_1 + 1] [i_3 - 1]) ? (min(var_3, (arr_0 [i_0]))) : ((~(arr_9 [i_0 + 1] [i_1] [i_3] [i_0])))))));
                    var_21 ^= (min((arr_9 [i_0] [i_0] [i_1] [11]), (arr_6 [i_1 + 1])));
                    arr_15 [i_0] = ((((arr_0 [8]) || (arr_12 [i_1] [i_1 - 4] [i_1 - 4]))));
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 15;i_6 += 1)
                            {
                                var_22 = (min(var_22, (arr_4 [i_1 - 4] [i_1 - 4])));
                                var_23 = (~(max(((min(19, 23879))), -11037)));
                            }
                            arr_25 [i_0] [i_1] [i_0] [i_5] = ((((max(-1, (arr_2 [i_1] [i_4] [0])))) << ((((((max((arr_11 [i_0] [0] [i_5]), 1))) ? (arr_0 [3]) : -11051)) + 1659788600))));
                        }
                    }
                }
                arr_26 [i_0] [i_1 - 4] [i_1] = ((0 ? ((((max(1008, (arr_9 [i_0] [i_1] [i_0] [i_1])))) ? 1 : (max((arr_16 [i_0]), (arr_21 [i_1]))))) : ((max((((arr_22 [i_0 + 2] [i_0 + 2] [i_1] [i_1]) ? (arr_1 [i_0 + 1] [i_1]) : (arr_4 [i_0] [i_0]))), (0 << 1))))));
            }
        }
    }
    var_24 = (min(var_24, var_13));
    var_25 = (~var_1);
    #pragma endscop
}
