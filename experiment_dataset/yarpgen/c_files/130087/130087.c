/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((!-63) ? (((61843 ? ((min(var_6, -63))) : -var_7))) : ((-(min(var_16, var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = (max(38862, 22905));

                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    var_19 = var_5;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 = (((((((arr_5 [i_0] [i_0] [i_2]) >= var_5)))) == var_8));
                                var_21 |= var_0;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            var_22 = ((0 ? ((~(((arr_6 [i_0] [i_1] [i_0] [i_6]) ? (arr_16 [i_0] [i_0]) : (arr_15 [i_0] [i_5] [i_1] [i_0]))))) : 470324990));
                            arr_20 [i_0] [i_1] [i_1] [i_1] [i_0] [16] &= ((~(((arr_0 [2] [i_0 + 2]) & (var_4 <= var_13)))));
                            arr_21 [i_0] [i_1] [i_5] = ((((min(12, ((-1 ? (arr_11 [i_0 + 2] [i_0]) : (arr_17 [i_0] [i_0] [i_0])))))) ? ((((min(var_16, var_4))) ? (((var_8 ? -63 : (arr_5 [i_0] [i_0] [i_6])))) : ((3555740089721208596 ? var_16 : var_14)))) : var_5));
                            var_23 = (min(-2803, 49642));
                        }
                    }
                }
                var_24 = (((((-var_11 / (((3824642306 ? var_0 : var_7)))))) + (min(var_9, (((-92 ? 498424689 : 12342)))))));
                arr_22 [i_0] [i_0 - 1] [i_0] = ((((~(arr_14 [i_0] [i_0] [i_1]))) >> (var_10 - 3339)));
            }
        }
    }
    var_25 = ((~((((~1) == var_4)))));
    var_26 -= var_12;
    #pragma endscop
}
