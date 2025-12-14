/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_0, var_6));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 += (arr_1 [i_0] [16]);
        var_20 &= 2147483392;
        var_21 = ((805306368 ? ((((arr_0 [i_0]) <= 3))) : 102));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_2 - 2] [i_2] [i_2] [i_0] = ((-119 | (arr_7 [i_0])));
                    var_22 &= (arr_5 [i_2 - 2] [i_1] [i_1] [i_0]);
                    var_23 = 102;
                    var_24 = 2086915047;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_25 = var_17;
                    arr_20 [i_3] [i_4] [i_5] = var_6;
                }
            }
        }
        var_26 ^= ((1 ? 102 : ((max(127, (arr_11 [i_3] [i_3]))))));
        var_27 -= (min(-96, var_16));
        arr_21 [i_3] [i_3] = (96 >= ((max((arr_15 [i_3] [i_3] [i_3]), var_2))));
    }
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        arr_24 [i_6 + 1] = ((~(arr_0 [9])));
        var_28 &= ((((arr_5 [12] [22] [22] [i_6]) / var_11)));
        var_29 = (!-103);
    }
    #pragma endscop
}
