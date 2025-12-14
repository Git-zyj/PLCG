/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_2] = (!var_11);
                    var_20 = arr_2 [i_0 - 1] [i_0 - 1];
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_21 ^= var_0;
                            arr_19 [i_6] = (((12 ? 4452775637424363366 : 149)));
                            var_22 = ((((min((~var_17), (((arr_15 [i_4]) ? (arr_9 [i_3]) : var_4))))) ? (min(((max(251, var_16))), var_6)) : (~212)));
                            var_23 = ((+((((arr_16 [i_4 + 1] [i_5] [i_5] [i_5 - 1] [i_5]) > 13944)))));
                        }
                    }
                }
                arr_20 [i_4 - 1] [i_3] [i_3] = 18446181123756130304;
                var_24 = ((~((((max(var_14, (arr_11 [i_4] [i_3])))) ? ((1 ? 0 : var_17)) : 234))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            {
                arr_27 [i_7] [i_7] [i_7] = (max(124, (min((arr_17 [i_7] [i_7]), 64714))));
                var_25 = (min((-494273810792806335 ^ var_0), (~18446181123756130304)));
                arr_28 [i_7] [i_7] = (min(((~(arr_18 [i_8] [i_7] [i_7] [i_7]))), (((arr_18 [i_7] [i_7] [i_7] [i_7]) ^ (arr_18 [i_7] [i_7] [i_7] [i_8])))));
            }
        }
    }
    var_26 = var_7;
    var_27 = ((var_18 ? var_10 : -6784));
    #pragma endscop
}
