/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_16 = ((~((56 ? 592163228 : 3))));
        var_17 = (!(arr_0 [i_0]));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_18 -= (((max(((var_11 ? var_11 : 0)), ((((arr_5 [i_1]) ? 1255757212 : 255)))))) && ((!(arr_3 [i_1]))));
        var_19 = (arr_2 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_20 *= (arr_3 [i_2]);
        var_21 = ((((((max(1024, 3462076265))) || ((min((arr_2 [9] [i_2]), 15877737006936543368))))) || (arr_5 [i_2])));
        var_22 *= (arr_0 [i_2]);
    }
    var_23 = ((((max(20, (-1130764038 && 1756317001)))) ? var_11 : ((max(288230376151711232, var_11)))));
    #pragma endscop
}
