/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_13;
        var_15 = -5256040217719410841;
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_16 = (min((arr_1 [i_1]), 3072));
        var_17 -= (((max((((arr_3 [i_1] [i_1]) ? (arr_3 [1] [i_1]) : 9)), (min(-6534143048383775440, 1))))) && (arr_1 [i_1]));
        var_18 = ((max(1, (arr_1 [i_1]))));
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_19 = (min(((var_10 * (9 || -91))), (arr_3 [i_2] [i_2])));
        var_20 *= ((-3174209319037002144 == (((max(-91, 1993319819))))));
    }
    var_21 *= (min(((~(min(var_2, var_6)))), var_6));
    #pragma endscop
}
