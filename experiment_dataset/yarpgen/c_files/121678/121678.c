/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = ((-(arr_2 [i_0 + 1])));
        var_17 = ((((1 != (arr_0 [i_0 - 1]))) ? ((1 ? 69 : (arr_0 [i_0 + 1]))) : ((var_16 ? var_15 : 63))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (arr_5 [i_1])));
        var_19 &= ((((((arr_1 [i_1]) + 31))) ? (arr_5 [i_1]) : (arr_4 [20])));
        arr_7 [i_1] [i_1] = ((arr_0 [i_1]) | (arr_0 [i_1]));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] &= ((var_7 ? ((65496 << (65505 - 65498))) : (((arr_5 [i_2]) / var_15))));
        var_20 &= ((((((arr_2 [i_2]) ? (arr_4 [2]) : 1))) ? var_15 : -1));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_21 *= 0;
                        arr_22 [i_2] [i_4] [i_2] [i_2] = (!var_2);
                        var_22 = (arr_6 [i_3] [i_3]);
                    }
                }
            }
        }
    }
    var_23 = ((((max((max(10256, 65505)), (min(var_14, var_16))))) * (4539628424389459968 < 699823504)));
    var_24 = (max(var_24, ((min(((((max(var_13, var_6))) & var_6)), var_2)))));
    #pragma endscop
}
