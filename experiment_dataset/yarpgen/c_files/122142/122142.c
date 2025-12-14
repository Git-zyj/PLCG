/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((((!0) <= (384 && var_11))) ? (max(var_10, var_7)) : (var_8 > var_0));
    var_14 += (((((((((var_10 + 2147483647) << (((var_10 + 89) - 4))))) ? ((var_11 ? -31 : 134217727)) : var_9))) ? (var_11 * var_3) : 1148417904979476480));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_15 = 4086641285402205318;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_16 += ((~(arr_5 [i_0 - 1] [i_0])));
            var_17 -= var_9;
            arr_7 [i_0] [5] [i_1] = ((255 ? ((((arr_6 [i_0] [i_1]) ? var_10 : var_8))) : (arr_4 [i_0 + 1] [16] [5])));
            arr_8 [1] [i_0] = 12;
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_11 [i_0] [i_0] [i_0] = ((!(((~(!1148417904979476506))))));
            var_18 -= (((arr_3 [i_0 + 2] [i_2]) ? -var_3 : ((max(((-(arr_9 [i_0]))), (-111 != 1))))));
            var_19 ^= (arr_5 [i_0] [i_2]);
            var_20 = var_1;
        }
    }
    var_21 = (max(var_21, var_0));
    #pragma endscop
}
