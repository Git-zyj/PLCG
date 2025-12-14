/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = 65535;
        arr_3 [i_0] [i_0] = (((--608662997798805270) || (~4095)));
        var_21 = (min(var_21, (47 ^ 140)));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_22 = (min(var_22, (((((((arr_0 [i_1]) ? (arr_5 [0] [0]) : 30821))) ? 30821 : (arr_5 [i_1] [5]))))));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_1] = ((+((((arr_0 [i_1]) == (arr_0 [i_1]))))));
                            var_23 = ((((arr_5 [i_0] [i_0]) ? -11023 : (arr_14 [i_0] [i_0] [i_2] [i_0]))));
                            arr_16 [i_1] [i_1] [1] [9] [i_4] = ((-(!4294967295)));
                            var_24 -= (((((60 ? 2944466683414365809 : (arr_11 [i_0] [i_2] [i_3] [i_2])))) ? ((~(arr_2 [i_4]))) : ((-(arr_12 [i_0] [i_0] [i_3] [12] [i_0] [2])))));
                        }
                    }
                }
            }
        }
    }
    var_25 = (min(var_25, var_13));
    #pragma endscop
}
