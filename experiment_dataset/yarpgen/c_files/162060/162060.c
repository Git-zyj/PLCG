/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_2 [1] = ((!(arr_1 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        var_12 |= var_9;
                        arr_10 [i_1] [i_1] [i_2] [i_3 + 1] [i_2] [i_3] &= ((arr_1 [i_0 - 2] [i_3 + 1]) ? 161 : 450668047);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_14 [i_4] = ((-((max((arr_11 [1]), (40586 || 23))))));
        arr_15 [i_4] = 3;
    }
    var_13 = ((((min((var_3 + 0), 18446744073709551615))) ? (((189 - 18446744073709551605) + ((max(7862007932882787137, var_2))))) : (((min(65533, 189))))));
    #pragma endscop
}
