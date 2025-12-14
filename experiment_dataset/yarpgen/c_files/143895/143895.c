/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((-var_2 * (!var_2))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((-(arr_1 [i_0]))) | (-1878685363 | 11210)));
        var_21 &= (max((arr_0 [i_0] [i_0 - 2]), var_9));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_22 *= var_3;
        var_23 = (max(var_23, (((~((0 ? -3033887767895424234 : 4866069639580648632)))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_24 = ((((16955084755990179517 ? 1491659317719372099 : 13))) ? 16955084755990179494 : 154);
        var_25 = 16955084755990179517;
    }
    #pragma endscop
}
