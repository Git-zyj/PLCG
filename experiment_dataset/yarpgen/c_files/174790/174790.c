/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((1 ? var_8 : ((-var_14 - (max(var_0, var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {
                    var_17 -= ((min((arr_3 [2] [5]), ((142 ? (arr_3 [i_1] [i_1]) : var_5)))));

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_3] [i_4] = 142;
                            arr_17 [i_2 + 3] [i_1] [i_2 + 3] [i_2 + 1] = var_1;
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_18 |= var_10;
                            var_19 &= (((((142 ? 114 : ((var_7 | (arr_8 [i_2] [i_1])))))) ? var_8 : (~var_0)));
                            var_20 = (max(((4 ? (((((arr_2 [i_1]) != (arr_11 [i_0] [i_1] [i_1] [i_0]))))) : ((162 ? (arr_0 [i_0]) : var_11)))), var_12));
                        }
                        var_21 = ((-89 * ((min(0, 162)))));
                        var_22 = (max(var_22, 57629));
                        arr_22 [i_3] [i_3 - 1] [i_3 + 1] [i_3] [i_3 - 1] [i_1] = ((!(arr_11 [i_3 - 1] [i_1] [i_1] [i_0])));
                        arr_23 [i_1] [i_1] = (((arr_4 [i_1]) >= (((((((arr_9 [i_0] [i_1] [i_1] [i_2 - 1] [i_2 + 2] [i_3 + 1]) < var_14))) <= var_11)))));
                    }
                }
            }
        }
    }
    var_23 = ((((min((max(var_0, var_14)), 17))) ? (((-((56366 << (18446744073709551612 - 18446744073709551608)))))) : var_1));
    #pragma endscop
}
