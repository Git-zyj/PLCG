/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((var_8 > (((((18446744073709551615 ? 18446744073709551584 : 18446744073709551613))) ? 18446744073709551607 : 0)))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_3 [1] [i_0] = ((~((-var_13 / ((var_2 ? 13 : 18446744073709551599))))));
        var_15 = (min(var_15, (((127 ? -534152858 : -61)))));
        var_16 = ((((((((~var_7) + 2147483647)) << ((((var_2 ? var_5 : var_0)) - 5615))))) ? -29 : -1881232395));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((((((1965653566 >= var_5) >= ((17 ? var_7 : var_11)))))) / ((((var_0 ? 19 : var_3)) >> (var_12 < 2270613362)))));
        var_17 = 0;
    }
    #pragma endscop
}
