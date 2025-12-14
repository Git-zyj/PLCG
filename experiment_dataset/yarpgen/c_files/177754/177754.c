/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = ((((!((min(-26049, (-9223372036854775807 - 1)))))) ? (!9041460425982038635) : (!var_3)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 1;
        var_12 = max((arr_0 [22] [i_0]), (((((min(77, var_2)))) + (-9223372036854775807 - 1))));
        var_13 = ((-(((((9223372036854775786 ? var_3 : var_4))) ? (arr_0 [i_0] [i_0]) : var_0))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_14 *= (~var_7);
            var_15 *= (((arr_3 [i_0] [i_1]) % (arr_4 [i_0] [i_1] [i_1])));
            var_16 = (!18446744073709551613);
        }
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            var_17 = var_4;
            var_18 &= (((1 ? var_8 : (((((arr_0 [i_0] [i_2]) >= (arr_4 [i_2] [6] [i_0]))))))));
            arr_9 [i_0] [i_2] = 4063081127;
        }
    }
    #pragma endscop
}
