/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = ((!((((arr_2 [i_1 + 1] [i_1 + 2]) ? (((arr_3 [i_0] [i_1 + 2]) ? var_7 : (arr_4 [i_0] [i_0] [i_1]))) : 31139)))));
                var_15 = 31457280;
            }
        }
    }
    var_16 = 0;
    var_17 = var_2;

    /* vectorizable */
    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {
        var_18 += ((!(arr_8 [i_2 + 1])));

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_11 [i_2] [i_2] [i_3] = var_6;
            var_19 = var_0;
        }
        var_20 = (min(var_20, (arr_4 [i_2 - 3] [i_2] [4])));
        arr_12 [i_2] = ((!var_13) ? var_2 : 7300581505135243250);
        var_21 = (arr_5 [i_2 - 3]);
    }
    #pragma endscop
}
