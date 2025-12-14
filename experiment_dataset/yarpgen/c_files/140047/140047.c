/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = 512403192;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = var_1;
                            arr_11 [i_1] [i_1] [i_1] [i_1 - 1] = (((arr_7 [i_3] [i_2] [1] [i_0]) ? ((((((arr_1 [i_0]) ? var_13 : var_7))) ? (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? var_9 : 4114870527)) : (arr_7 [i_0] [i_0] [i_0] [i_0]))) : ((min(((min(8681, (arr_1 [i_0])))), (((arr_1 [i_0]) ? (arr_4 [i_1 - 3]) : var_11)))))));
                            var_16 = ((((var_4 ? (arr_2 [i_1 - 2] [i_2]) : 4114870538)) << (((((var_9 ? var_3 : -8681))) + 45))));
                            var_17 += -173496691;
                            var_18 = ((((((arr_1 [i_3]) ? 1155270100 : ((-8655 ? 8681 : 4114870537))))) ? 1155270095 : 32));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_19 *= (((var_13 * 4114870537) % (((((var_13 ? var_7 : var_3))) ? var_11 : (((-(arr_13 [18] [i_5]))))))));
                            arr_23 [i_7] [i_6] [i_6] [i_5 + 1] [i_4] = (min((min(var_7, (~var_10))), (arr_14 [i_4] [i_5])));
                            var_20 -= (max(((((~var_9) <= 4114870530))), var_13));
                            var_21 = (arr_21 [i_4] [i_5] [i_6] [i_7]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 21;i_9 += 1)
                    {
                        {
                            arr_29 [i_9 + 1] [i_8] [i_5] [i_4] = ((((max((arr_26 [i_8]), var_3))) ? ((var_0 ? var_5 : ((var_9 ? var_4 : (arr_20 [10] [i_5] [i_5 + 1] [i_5]))))) : (arr_26 [i_4])));
                            arr_30 [i_4] [i_4] [7] [7] = var_0;
                            arr_31 [i_9] [i_8] = ((~((3139697201 ? 8698 : 180096758))));
                            var_22 ^= var_13;
                        }
                    }
                }
                arr_32 [i_5] = ((((~(((arr_18 [i_4] [i_5 - 1] [i_5 - 1] [i_4]) | var_12)))) & ((((min((arr_28 [i_4] [i_4] [i_4] [i_4] [i_4]), var_12))) ? var_12 : (arr_18 [i_4] [i_4] [i_4] [i_4])))));
            }
        }
    }
    #pragma endscop
}
