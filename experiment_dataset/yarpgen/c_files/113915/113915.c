/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_1] [i_4] [i_3 - 1] [i_2] = (max(((min((arr_4 [i_0] [i_3] [i_2] [i_2]), (!6)))), ((-((1 | (arr_5 [i_1] [i_1] [i_2 + 1] [i_3])))))));
                                arr_13 [i_0] [i_2] [i_2 - 3] [18] [i_4] [i_0] = (((arr_2 [i_4] [i_3]) ? (!36703) : 36703));
                            }
                        }
                    }
                }
                arr_14 [i_0] = (arr_3 [i_1]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            arr_21 [i_6] [i_5] [i_1] [8] = -1849;
                            arr_22 [i_0] [i_1] [i_0] [i_5] [i_0] [i_0] = (-28 ^ var_6);
                        }
                    }
                }
                var_13 = (min(var_13, ((max(186, ((((arr_16 [i_0] [i_1] [i_0] [i_1]) != 0))))))));
            }
        }
    }
    var_14 = (var_0 ^ (76 != 65535));
    var_15 &= var_4;
    /* LoopNest 3 */
    for (int i_7 = 4; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 12;i_9 += 1)
            {
                {
                    arr_32 [i_7 + 3] [i_8] [i_9] [12] &= max(((max((((arr_7 [i_7] [i_7] [i_7 - 2] [7]) ? var_12 : (arr_29 [i_7] [i_7] [i_7] [i_7 - 3]))), ((max((arr_26 [7] [i_8]), (arr_24 [i_9] [i_8 - 1]))))))), ((~(((arr_31 [i_7] [i_8] [i_8] [i_9 + 1]) ? -100620914518805239 : (arr_28 [i_9 + 1] [i_8] [i_7 - 3] [i_7 - 3]))))));
                    var_16 = (max(var_16, (arr_8 [i_7] [i_7 + 2] [i_7] [i_8 - 1] [i_8] [i_9 - 1])));
                    var_17 = (max((min(var_0, (arr_9 [i_7 + 2]))), (arr_9 [i_7 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
