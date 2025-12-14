/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 *= max((((!(((8787503087616 ? var_5 : -30867)))))), var_4);
                var_14 = (var_5 * (arr_2 [i_0] [i_0]));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_15 = (~0);
                    var_16 = (((arr_0 [i_0]) ? (((7919 - (arr_4 [i_0] [i_1] [i_1] [5])))) : (arr_1 [i_0])));
                }
                var_17 = (max(var_17, ((((((+(((arr_3 [i_0] [4] [0]) / 28755))))) | (max((arr_5 [i_0] [i_0] [i_0]), 0)))))));
                var_18 = (((((~(arr_2 [i_1] [i_1])))) ? 0 : (((arr_1 [i_1]) ? var_4 : (((arr_3 [i_1] [i_0] [i_0]) ? var_0 : var_12))))));
            }
        }
    }
    var_19 = var_1;
    #pragma endscop
}
