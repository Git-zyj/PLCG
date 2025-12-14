/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 += 0;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_18 = (arr_3 [i_1]);

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_19 |= (arr_1 [i_0] [i_2]);
                var_20 = ((~(arr_3 [i_0])));
            }
        }
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            var_21 = ((-19770 ? 22 : 15));
            var_22 = (min(var_22, 0));
        }
    }
    var_23 *= ((((min((max(var_13, var_2)), var_14))) ? ((25 & ((min(var_7, var_0))))) : var_7));
    var_24 = ((var_15 >> (var_11 - 61721)));
    #pragma endscop
}
