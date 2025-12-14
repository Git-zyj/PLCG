/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~70368677068800) ? (min(var_10, var_8)) : (((max(0, -2415338738244094091))))));
    var_14 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            var_15 = (((arr_4 [i_0] [i_1 - 4] [i_1]) ? 126 : ((var_10 ? (arr_3 [i_0] [i_0]) : 227))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_12 [i_2] [i_1] [i_0] = (arr_0 [i_2]);
                        var_16 = (~(arr_9 [i_0] [i_1] [i_2] [i_0]));
                    }
                }
            }
            var_17 = -1858305577;

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                arr_16 [i_0] [i_0] [i_1 - 4] [i_1 - 4] = var_7;

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_18 = ((((((arr_17 [i_1] [i_4] [i_1]) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_18 [i_0] [i_1 - 2] [i_4] [i_1 - 2])))) ? -var_5 : 0));
                    var_19 -= ((-(-70368677068800 == var_5)));
                }
            }
            var_20 *= (((arr_2 [i_0] [i_1 + 2]) + var_6));
        }
        var_21 = -398991002397867868;
    }
    #pragma endscop
}
