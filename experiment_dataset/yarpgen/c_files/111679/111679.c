/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((((var_2 ? var_3 : 13))) * (min(18446744073709551615, 13))))) || var_1));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [4] = var_8;
        arr_5 [i_0] = -89;
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] &= (((arr_3 [i_1 - 2]) | ((26 ? -14 : 1))));
        arr_9 [i_1] = ((((min(var_5, ((-1 * (arr_3 [i_1])))))) ? (arr_1 [i_1 + 1]) : (((((2 / (arr_0 [i_1])))) ? -124 : -1593094650))));
        arr_10 [i_1] = (arr_1 [i_1]);
        arr_11 [i_1] = ((-((~(max(var_8, (arr_0 [i_1])))))));
    }
    #pragma endscop
}
