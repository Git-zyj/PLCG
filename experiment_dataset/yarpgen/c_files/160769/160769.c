/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] = (((!1) * ((-13817 ? -19 : ((var_11 ? (arr_0 [i_3]) : 1))))));
                                arr_15 [i_4] [i_1 + 3] [i_4] [i_3] [i_4] = -19;
                            }
                        }
                    }
                    arr_16 [i_0] [i_0] = ((((min((!var_5), var_6))) >= var_3));
                    arr_17 [i_0] [i_0] [i_0] [i_0] = (max((((((var_10 ? 11 : (arr_7 [i_1] [i_1] [i_0] [i_1])))) ? ((var_0 ? -19 : 16252928)) : ((max((arr_11 [i_0] [i_0 - 2] [i_1] [i_1] [i_1]), (arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1] [i_2])))))), (1 <= 158)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        {
                            arr_27 [i_5] [i_5] [i_6] [i_5 + 1] = (((((-21463 && (((var_3 ? var_8 : 274341036032)))))) >> (((min(-1, 39298)) + 1))));
                            arr_28 [0] [i_6] [0] [i_8] &= (((!-34) ? (min(((var_6 - (arr_24 [i_5] [i_6] [i_6] [i_8]))), ((var_5 ? var_3 : (arr_23 [12] [12]))))) : ((65527 ? (!8) : 1743487791))));
                        }
                    }
                }
                arr_29 [i_5 + 2] [i_6] [i_5] = 16128;
                arr_30 [i_6] = ((-((19 ? ((65527 ? (-2147483647 - 1) : var_7)) : 1073737728))));
            }
        }
    }
    var_12 = var_9;
    /* LoopNest 2 */
    for (int i_9 = 2; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 4; i_10 < 17;i_10 += 1)
        {
            {
                arr_38 [i_10] [i_10] = ((1 ? 16128 : 40308));
                arr_39 [i_10] [i_9] [i_10] = (arr_33 [i_10 - 4]);
            }
        }
    }
    #pragma endscop
}
