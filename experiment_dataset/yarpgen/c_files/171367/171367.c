/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_20 = 4294967286;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_3] = ((((4294967293 % (arr_5 [i_0] [i_1] [i_1]))) & 2398972266));
                        var_21 = (arr_1 [i_1]);
                    }
                }
            }
        }
        var_22 = arr_11 [i_0] [i_0] [i_0] [i_0] [10] [i_0];
        var_23 = (((max((arr_7 [i_0] [i_0] [i_0]), 7)) <= ((-(arr_9 [i_0])))));
    }
    var_24 = max((((!(2147483647 != -3119844479494410868)))), (((var_19 / var_8) + var_6)));
    var_25 = ((406213547 ? (((var_6 & 5) ? (~7) : -17)) : var_12));
    #pragma endscop
}
