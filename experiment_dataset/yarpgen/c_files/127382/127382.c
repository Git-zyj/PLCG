/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        var_17 = (((arr_9 [i_0] [i_1] [i_2] [i_3 - 2]) ? (arr_4 [i_2] [i_2]) : (arr_5 [i_0] [i_2] [i_0])));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_18 = (((((0 ? (arr_15 [i_0]) : 5629254199546676598))) ? ((var_0 ? var_8 : 886659912940013059)) : (((32761 ? (arr_9 [i_1] [4] [i_1] [i_1]) : (arr_3 [i_3]))))));
                            var_19 = ((47564 ? ((2147483647 ? (arr_1 [i_0] [i_0]) : var_11)) : (arr_8 [i_0] [i_1] [i_2 - 1] [i_4])));
                        }
                    }
                }
            }
        }
        var_20 = ((~(-127 - 1)));
        var_21 = ((var_14 ? 7 : (((var_3 ? (arr_11 [i_0] [i_0]) : 30005)))));
    }
    var_22 = ((var_3 ? (((2147483647 ^ var_6) - (var_1 | 14))) : (((((max(var_4, 127))) ^ ((var_0 ? 2147483647 : var_10)))))));
    #pragma endscop
}
