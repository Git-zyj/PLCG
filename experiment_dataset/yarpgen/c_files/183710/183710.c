/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] &= ((min(1633765242, (arr_6 [i_1] [i_1 + 1] [i_1]))));
                    arr_8 [i_1] [i_1] [i_2 + 3] &= var_14;
                    var_17 = (var_2 ? (((((max(var_16, var_11))) ? 45118 : (0 + 0)))) : -var_15);
                    var_18 = ((~((((max((arr_2 [i_0] [i_0] [i_0]), 143))) ? (!3995152004349284813) : ((max((arr_5 [i_0]), -46)))))));
                    arr_9 [i_2] [i_2] [i_2] = ((+((var_14 ? (arr_6 [i_2] [i_2] [i_1 - 1]) : var_11))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_19 = var_6;
                    var_20 = (arr_6 [i_3] [17] [i_5]);
                }
            }
        }
        var_21 = ((((max((arr_4 [i_3]), (arr_4 [i_3])))) / (arr_15 [i_3] [i_3] [i_3] [i_3])));
        arr_17 [i_3] [i_3] = (max((arr_15 [2] [i_3] [i_3] [2]), (max(((20419 ? 3890 : 61646)), 3355))));
        arr_18 [i_3] = ((!((max((max(var_4, 14451592069360266805)), 3918)))));
        arr_19 [i_3] [i_3] = (min(((((arr_0 [i_3] [i_3]) ? (arr_0 [i_3] [i_3]) : (arr_0 [i_3] [i_3])))), (((58328 - var_3) ? 2929141455 : (((var_9 ? 61652 : (arr_1 [i_3]))))))));
    }
    var_22 ^= (~var_0);
    #pragma endscop
}
