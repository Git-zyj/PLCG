/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((var_9 ? var_11 : ((-925921240 ? var_5 : var_11)))) == 4076842656));
    var_14 = (((((!147193061) ? (min(2097120, var_2)) : 124)) != ((((var_0 >= (~113)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [1] [7] = ((4292870150 ? (((arr_0 [i_0]) ^ (arr_1 [12] [12]))) : var_7));
        var_15 += (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    var_16 = var_5;
                    var_17 ^= var_11;
                }
            }
        }
        arr_10 [i_1] = (((((var_2 ? var_5 : 106))) <= ((402496513 ? (arr_7 [i_1] [i_1]) : -40))));
    }
    var_18 = var_10;
    var_19 = ((var_4 % var_2) ? var_8 : (((var_8 ? 6 : 49))));
    #pragma endscop
}
