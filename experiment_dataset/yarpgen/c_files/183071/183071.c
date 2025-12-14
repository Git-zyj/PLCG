/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((((min((~2147483647), ((2147483647 ? (-2147483647 - 1) : -2147483642))))) ? 0 : 3931013292));
    var_13 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = -2147483642;
                                var_15 = (((0 / var_0) < (arr_1 [i_0])));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_4;
                                var_16 = var_2;
                                var_17 = (min(var_17, (((11677757107834856709 < (arr_10 [i_3] [i_4 + 1] [i_1 + 1] [i_4 + 1] [i_4 + 1] [i_2] [i_1 + 1]))))));
                            }
                        }
                    }
                    var_18 = -var_8;
                }
            }
        }
        var_19 = (max(var_19, var_6));
        var_20 ^= (!(arr_7 [i_0] [i_0] [i_0]));
        arr_12 [i_0] [i_0] = var_11;
    }
    #pragma endscop
}
