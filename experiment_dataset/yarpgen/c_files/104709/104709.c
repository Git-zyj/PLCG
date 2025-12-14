/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_20 *= ((!(!var_15)));
        var_21 = ((-5324116 ? 1637586302 : (arr_0 [i_0])));
        var_22 = -5324098;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((4294967290 || ((min(32, var_18)))));
        var_23 = (((((arr_1 [i_1]) == 5)) ? ((((!(-2147483647 - 1))))) : ((1 ? 4294967292 : (arr_1 [i_1])))));
        var_24 = (((((((3192484937 ? (arr_0 [i_1]) : (arr_0 [i_1]))) >> (((var_9 | var_2) + 8197))))) ? ((((1517068144 < (arr_1 [i_1]))))) : (arr_4 [i_1])));
    }
    var_25 ^= ((((min((~var_0), 487074751))) ? (max(var_10, ((var_0 ? var_13 : var_10)))) : (max(var_17, (min(2147483647, var_17))))));
    #pragma endscop
}
