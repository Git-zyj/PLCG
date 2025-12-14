/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(-10687, 48));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = arr_0 [i_0] [i_1];
                    arr_7 [i_0] [i_0] [i_1] [i_2] = (!-36028797018963968);
                    var_16 = var_1;
                    var_17 = (min(var_17, (!var_3)));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        arr_12 [i_3] = ((((((68719476735 - (arr_11 [i_3] [i_3])))) ? (~49275) : ((var_14 ? (arr_10 [i_3]) : var_2)))));
        arr_13 [i_3] = -1918510409;
    }
    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        var_18 = (((arr_5 [i_4] [i_4] [i_4] [i_4]) << (((arr_5 [21] [i_4] [i_4 - 3] [i_4]) - 2627726238))));
        var_19 = (min(var_19, ((min(((40216 ? 36028797018963968 : 0)), ((max(((505039049 - (arr_0 [i_4] [i_4]))), (((-6885532928373911273 ? var_14 : (arr_10 [23]))))))))))));
        var_20 = (((arr_15 [i_4 + 4]) % (~4931909442788824151)));
    }
    var_21 ^= 16246;
    #pragma endscop
}
