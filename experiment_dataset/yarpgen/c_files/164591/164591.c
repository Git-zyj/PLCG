/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= 63;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 += (((((arr_0 [i_0]) ? (~-63) : (var_10 * var_3))) << (57 - 44)));
        var_20 = (min(var_20, (arr_0 [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_21 = var_6;
            var_22 &= (arr_3 [i_0] [i_0]);
            var_23 += ((!(arr_1 [i_1])));
        }
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            var_24 += (((((!(~64))))) + var_9);
            arr_7 [i_2 + 2] &= var_14;
        }
        var_25 = (arr_1 [i_0]);
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_26 += (arr_2 [i_3] [i_3]);
        var_27 *= -32760;
    }
    #pragma endscop
}
