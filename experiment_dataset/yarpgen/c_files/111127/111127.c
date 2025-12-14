/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_13 |= (min((max(-455281468191972255, (arr_7 [i_0] [i_0] [i_0] [i_0]))), (((arr_7 [i_0] [i_2] [i_2] [i_3]) * (arr_7 [i_1] [i_2] [i_2] [i_4 + 1])))));
                            var_14 = (max(var_14, ((min((((arr_8 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 2]) << (((arr_8 [i_4 + 1] [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 1]) - 214)))), (arr_8 [i_4 - 2] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 2]))))));
                            var_15 = (arr_10 [i_1] [i_4 - 2] [i_2] [i_3] [i_4 - 1] [i_3]);
                            arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] = ((~(arr_13 [i_4] [i_2] [i_1])));
                        }
                    }
                }
            }
            arr_15 [i_0] [i_0] = (arr_5 [i_0] [i_1]);
            var_16 += var_10;
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        var_17 = var_6;
                        var_18 = ((-(arr_4 [i_6 + 2])));
                        arr_27 [i_0] [i_0] [i_6 + 2] [i_6] [i_0] &= min(((((arr_10 [i_6 + 2] [i_6 - 1] [i_6] [i_6 + 1] [i_6] [i_6 + 1]) && var_0))), (max(var_8, (arr_3 [i_6 + 1] [i_6] [i_6]))));
                    }
                }
            }
        }
        var_19 = (arr_20 [i_0] [i_0] [i_0] [i_0]);
        arr_28 [i_0] = var_10;
    }
    var_20 = var_4;
    #pragma endscop
}
