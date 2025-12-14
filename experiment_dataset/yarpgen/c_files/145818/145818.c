/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (var_12 ? (!-359316642) : (arr_1 [i_0]));
        arr_3 [i_0] [6] = (arr_0 [i_0]);
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_15 = (arr_5 [i_1] [i_1]);
        var_16 = (max(var_16, var_11));
        var_17 += (arr_4 [i_1]);
    }
    var_18 = (((var_6 * (var_10 < var_9))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 24;i_3 += 1)
        {
            {
                arr_14 [6] = ((!(((arr_6 [i_2]) < ((104 ? 1247102732 : (arr_7 [i_3])))))));
                var_19 = ((((-9223372036854775797 ^ (arr_12 [i_3 - 2]))) % 459462765));
                arr_15 [22] = var_9;
                var_20 *= ((((((max(-9223372036854775797, var_7))) ? (-9223372036854775797 ^ -9223372036854775797) : (12 % -9223372036854775797))) % (arr_7 [i_3 - 1])));
            }
        }
    }
    #pragma endscop
}
