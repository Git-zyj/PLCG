/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_2;
    var_11 = 80;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((~(((((-(arr_0 [i_0])))) ? 175 : ((var_0 ? (arr_0 [i_0]) : var_9))))));
        var_12 *= (max(((-1008 ? 0 : ((~(arr_1 [i_0] [i_0]))))), (max((arr_1 [i_0] [i_0]), var_9))));
        var_13 = ((((arr_1 [i_0] [i_0]) == (arr_1 [i_0] [i_0]))));
        var_14 = 2192262701390903183;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = 1;
        arr_8 [i_1] |= (~2831);
    }
    #pragma endscop
}
