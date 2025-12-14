/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (min(var_4, (arr_3 [11])))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
                        {
                            arr_13 [8] [i_3] [i_1] [i_0] [i_0] = (((arr_0 [i_0]) << (var_2 - 76)));
                            arr_14 [0] [i_1] [i_2 - 3] [1] [i_2 - 1] = (((((min(89, (arr_0 [i_1])))) != (min((arr_11 [2] [5] [5] [9] [i_1] [3] [5]), (arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_4 + 1]))))) ? var_7 : (((3916402360 ? (arr_1 [7] [7]) : var_2))));
                            var_20 -= (((3817727953 ? (~var_1) : (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [2] [2] [i_2]) : 47119)))));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                        {
                            var_21 = ((((((arr_1 [i_5 - 1] [i_1]) ? (arr_0 [i_5]) : var_8))) ? (var_15 * 9887418161078395161) : (((var_15 >> (var_11 - 12328290465038220880))))));
                            var_22 = (min(var_22, var_18));
                            arr_17 [i_0] [1] [i_0] [1] [7] [i_1] = ((((((arr_1 [10] [9]) ? var_18 : 378564933))) + var_18));
                        }
                        arr_18 [i_1] [5] [11] [i_1] [i_1] = ((((((!var_1) ? 255 : (arr_2 [i_0] [i_2 - 2])))) || 250));
                        var_23 = (min((arr_11 [1] [1] [i_2 - 3] [i_2 + 1] [i_1] [5] [5]), 58));
                    }
                }
            }
        }
    }
    var_24 = var_4;
    var_25 = 18417;
    var_26 = var_10;
    #pragma endscop
}
