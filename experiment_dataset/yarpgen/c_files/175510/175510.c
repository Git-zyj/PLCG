/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    var_20 = var_9;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = -9223372036854775782;

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = (((arr_5 [i_0] [i_0]) ? (9223372036854775782 || 38260) : 1));
            var_21 = (arr_0 [i_0 + 1]);
            arr_7 [1] = ((((arr_4 [i_0] [i_0] [i_1]) ? -9223372036854775758 : 3399725526416054050)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        var_22 = ((9223372036854775788 ? 127 : 18446744073709551615));
                        arr_13 [i_0] [i_1] [i_1] = ((29 ? (arr_10 [i_0] [i_0 + 1] [i_0 + 1] [i_3]) : 1));
                        var_23 = (max(var_23, ((((((16137678633860522477 ? -7484692678290033247 : 8727998315790248012))) ? (((arr_2 [i_2]) ? (arr_11 [i_0]) : (arr_2 [9]))) : 1)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
