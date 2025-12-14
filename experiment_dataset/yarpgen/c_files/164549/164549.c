/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 8064;
    var_11 *= var_8;
    var_12 += var_8;
    var_13 = var_6;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_14 = (min(((1 ? (8064 != var_4) : 1)), (arr_0 [i_0] [i_0])));
        var_15 = ((((-2258025044895691055 ? var_9 : (arr_0 [i_0 - 1] [i_0 - 1]))) < (((max((arr_0 [i_0 + 1] [i_0 - 1]), var_2))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_16 = ((((1 >= ((max(1, 1))))) ? (arr_6 [i_0] [8] [6] [8]) : var_0));
                        var_17 |= ((((max(7780253302100672503, (arr_8 [i_0 + 1] [i_0] [2])))) ? 1416220688 : -16));
                    }
                }
            }
        }
        var_18 = var_9;

        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 6;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        {
                            var_19 = (min(var_19, ((1089217466 ? (arr_23 [i_0 - 1] [i_6] [i_0 - 1] [i_0 + 1] [i_0]) : (arr_23 [i_0] [i_7] [i_7] [i_0 - 1] [0])))));
                            var_20 *= ((8054 ? 0 : 6236802009976343004));
                            var_21 |= ((~(arr_12 [i_5 + 3])));
                        }
                    }
                }
                var_22 ^= ((var_9 < (arr_6 [i_0 - 1] [i_4] [i_5 + 1] [i_0 - 1])));
            }
            var_23 = (((arr_17 [i_0 - 1] [i_0 - 1]) % (~0)));
            var_24 = 54077;
        }
    }
    #pragma endscop
}
