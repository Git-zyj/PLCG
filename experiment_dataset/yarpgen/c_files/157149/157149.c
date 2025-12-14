/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (((((42402 ? (arr_2 [i_0] [i_0] [i_1]) : 42406))) ? 116 : (((~var_7) - (((min(1, var_3))))))));
                var_19 -= 111;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_20 = ((((((var_0 - var_4) ? (((1 ? var_0 : var_1))) : var_4))) ? (((min(var_13, 15801258476499218529)))) : ((((1 ? var_10 : var_14))))));
                                var_21 = (max(var_21, (((~(var_0 - var_8))))));
                            }
                        }
                    }
                }
                var_22 += (((((var_7 ? (arr_10 [i_0] [i_0] [i_1]) : (max(var_10, var_13))))) ? (((var_3 ? (arr_8 [i_0] [i_0] [13] [i_1] [i_1] [i_0] [i_1]) : var_15))) : ((var_14 ? (((var_17 ? var_6 : 42399))) : (arr_10 [i_0] [14] [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 19;i_6 += 1)
        {
            {
                var_23 = ((((max(var_13, var_13))) << ((((var_14 ? var_10 : var_17)) - 1407534100459596060))));
                var_24 = (min(var_24, ((max((max(((var_13 ? var_11 : var_5)), (116 ^ var_11))), ((-17864 ? -78 : 1)))))));
                arr_19 [i_5] = ((-80118637 ? 4294967295 : 7153305621803047556));
                var_25 = (min(var_25, ((((var_7 ? (arr_14 [i_6 + 3] [i_6 - 2]) : var_15))))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_26 -= ((-(arr_21 [i_9 - 1] [i_7] [i_6 - 1])));
                                arr_27 [i_5] [i_8] [i_5] [i_6] [i_5] [i_5] = (max((arr_25 [i_5] [i_6 - 2] [i_9 + 1] [i_8] [i_6 - 2]), -var_8));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = ((((max((var_14 & var_10), (((var_13 ? var_16 : 1)))))) ? var_2 : ((max((-1 + var_9), (~4294967276))))));
    #pragma endscop
}
