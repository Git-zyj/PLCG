/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= 1;
    var_20 = (min(var_20, (((((1 || (var_13 | var_8))) ? 1956216134 : (((-474666897 ? var_5 : (-16 || var_18)))))))));
    var_21 = var_13;

    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        var_22 = ((((432656009 < (((var_7 ? 66 : 1))))) ? 7140066443178515292 : (min((var_4 < var_5), (((arr_2 [i_0 - 2]) & var_16))))));
        var_23 = (max((((((((arr_2 [9]) ? var_4 : 1))) || (!16814008213963521140)))), ((~(arr_0 [i_0 - 4])))));
        var_24 = (min(var_24, var_13));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_25 = (((1 + 1) && 3862311287));
        var_26 = (min(var_26, ((((arr_2 [i_1 + 1]) >= (arr_4 [i_1 - 3]))))));
    }
    for (int i_2 = 4; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_27 = 536347962;
        arr_8 [i_2 - 1] = (((-43 + var_2) ? (arr_0 [i_2 - 1]) : 1));
    }
    #pragma endscop
}
