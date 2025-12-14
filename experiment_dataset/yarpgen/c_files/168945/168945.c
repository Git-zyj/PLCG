/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((2104418287412317592 && 7843578119424316574), (max(953250726, 8177187173599747905))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_19 = (((((var_11 ? var_5 : 18446744073709551615)) << 31)));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_20 = (min(var_20, var_8));
                var_21 = var_17;
            }
            var_22 = (-var_3 - var_15);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_23 = (((var_16 || -191800689) ? (18446744073709551609 && 1946742570) : var_13));
            var_24 = (((arr_4 [i_0] [8] [i_3] [i_3]) + 2439334365446649377));
        }
        var_25 = (arr_0 [i_0]);
    }
    #pragma endscop
}
