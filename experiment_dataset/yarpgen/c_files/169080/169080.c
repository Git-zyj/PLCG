/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0 + 2] [i_0 + 2]);
        var_18 = ((43 ? ((var_13 ? (arr_0 [i_0 + 4] [i_0]) : var_14)) : -19908));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_19 = ((((58060 || (144 || 8101))) ? (min((((-32767 - 1) ? (arr_9 [i_1] [10] [i_1]) : -288969293)), (0 + var_4))) : (arr_7 [i_1] [i_2] [i_1])));
                    arr_11 [i_1] [i_2] [i_1] = var_3;
                }
            }
        }
        arr_12 [1] = 7;
    }
    var_20 = ((((min((max(var_9, var_15)), (max(var_12, var_8))))) && ((((((-91 ? 1386834862 : 288969292))) ? ((min(32, 255))) : var_4)))));
    #pragma endscop
}
