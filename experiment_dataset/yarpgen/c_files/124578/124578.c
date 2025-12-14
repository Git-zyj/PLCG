/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_19 = ((-(((arr_0 [i_0]) / 1))));
                    arr_10 [i_2] [i_1] [6] &= (max((arr_3 [i_1] [i_1]), (((2007 * var_12) * (65535 / var_4)))));
                }
                var_20 = (min(var_20, -1003750859));
                arr_11 [i_0] [i_1] = ((-(~2343)));

                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_21 = -1003750859;
                    var_22 ^= 1003750852;
                    var_23 = (arr_14 [i_0 - 1] [i_0] [i_3]);
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    var_24 = max(((var_8 ? ((var_15 * (arr_3 [i_0] [i_1]))) : (1003750859 == 1003750839))), (((~((-(arr_9 [i_0] [i_0] [i_4])))))));
                    var_25 = (((((-1003750871 ? var_15 : (arr_15 [i_0 - 1] [i_0 + 3] [i_0])))) ? (!-1003750846) : ((((~(arr_6 [i_0] [i_1] [i_1])))))));
                    var_26 *= (!114);
                    arr_18 [i_0] [i_0] [i_0] [i_0] = 1003750842;
                }
            }
        }
    }
    #pragma endscop
}
