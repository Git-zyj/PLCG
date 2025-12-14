/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 -= 15;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] = 3967497645;
                    arr_8 [i_0] [0] [0] [i_2] = (arr_3 [i_0]);
                    arr_9 [5] [i_0] [5] [i_2] = 230;
                    arr_10 [i_0] = var_13;
                }
            }
        }
        arr_11 [i_0] = 15;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                {
                    var_19 = var_11;
                    var_20 = (((43935 - var_13) - var_1));
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_21 = (max(var_21, ((max(((0 ? var_3 : (-9223372036854775807 - 1))), (!-29337))))));
            var_22 -= ((max((arr_17 [i_5 - 1]), (arr_17 [i_5 + 1]))));
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_23 [i_5] = var_7;
            var_23 = max((var_12 & -127), ((max(var_10, var_14))));
            arr_24 [i_5] = 0;
            var_24 = var_9;
        }
        var_25 = 8026;
        var_26 = ((7 == (max(((max(var_15, var_7))), (min(var_14, 4294967282))))));
    }
    #pragma endscop
}
