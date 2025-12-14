/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((!((((1 - 1) ? var_7 : ((var_0 ? var_8 : var_11)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = var_3;
            var_14 ^= (((arr_3 [i_1 + 2] [i_1 - 2]) ? (arr_3 [i_1 - 3] [i_1 + 1]) : (arr_3 [i_1 + 1] [i_1 + 2])));
        }
        arr_7 [i_0] = var_5;
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_15 = 2568489844;
                    arr_14 [i_0] [i_2 + 1] [i_3] [4] &= 1;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_19 [i_5] [15] [i_3] [i_4] [i_5 - 1] = ((3583611431901539033 * (!1)));
                                var_16 -= ((1 ? (arr_11 [i_2 + 3] [i_2 + 1] [i_2 + 1] [5]) : (arr_11 [i_2 + 3] [i_2 + 4] [i_2 + 2] [i_2 + 4])));
                                arr_20 [8] [i_3] [i_5] [i_4] [i_5 + 1] [i_5 - 1] [i_4] = ((4220167479 ? 56 : 1));
                                var_17 += -var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (~-9172);
    var_19 = 110;
    #pragma endscop
}
