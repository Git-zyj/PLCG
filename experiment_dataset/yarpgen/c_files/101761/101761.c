/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_9));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-(((!(arr_0 [i_0] [i_0]))))));
        var_18 = ((!((max(16, (~var_11))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [4] [1] [i_1] = 8745062368153837748;
                        arr_16 [i_1] [i_2] [i_3] [i_1] = ((arr_4 [i_1]) != var_14);
                    }
                }
            }
        }
        arr_17 [i_1] = (((((arr_13 [i_1] [i_1] [i_1]) + 2147483647)) << (((((arr_13 [i_1] [i_1] [i_1]) + 64)) - 7))));
    }
    #pragma endscop
}
