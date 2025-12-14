/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((~var_6) | (((-19968 ? var_5 : var_10)))))) ? ((((((var_7 >> (var_8 + 55549342)))) ? 19983 : var_0))) : var_6);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((var_8 ? (((((61923 - (arr_1 [i_0])))) ? var_5 : (arr_1 [i_0]))) : (arr_0 [i_0])));
        arr_3 [i_0] [i_0] = ((((var_11 ? var_7 : (arr_1 [i_0]))) >= (((177 % (arr_0 [i_0]))))));
        var_14 = var_5;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_1] = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_1] [i_4 - 2] = var_3;
                                arr_18 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [i_1] = (arr_14 [i_0] [0] [i_2] [i_3] [i_4] [i_1] [i_3]);
                                arr_19 [i_1] [i_4] [i_3] [i_2] [i_1] [i_1] = (((((arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [i_1] [1]) ? 3612 : var_6)) ^ var_9));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (((((var_0 ? var_6 : var_10))) ? var_5 : (~-428661953)));
    var_16 = var_11;
    #pragma endscop
}
