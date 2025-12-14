/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max((var_1 && var_5), ((var_2 ? 18446744073709551615 : var_4))))) ? var_3 : (((((max(var_15, 20982))) ? 154 : ((var_12 ? 30046 : 60047)))))));
    var_19 = ((~(((((101 ? 533068961 : var_16))) ? (((max(var_8, var_5)))) : var_12))));
    var_20 = (((((-((max(var_13, var_16)))))) + (((var_0 / var_7) ? var_3 : 9344989727630111541))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 3] [i_1] = ((-32768 ? -3761898335 : ((((!(arr_2 [i_2] [i_0] [i_2])))))));
                    var_21 = (max((arr_7 [i_0] [i_1] [i_1] [i_1]), var_3));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = (arr_7 [i_0 - 3] [i_0] [i_0] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
