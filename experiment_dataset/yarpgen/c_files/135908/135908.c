/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((0 ? (((var_6 != (((((-32767 - 1) + 2147483647)) << var_10))))) : var_9));
    var_15 = ((~(~var_11)));

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_16 = (arr_1 [i_0 + 1]);
        var_17 *= (min(((((6138 == var_8) + var_0))), (4294967270 + var_12)));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        var_18 ^= (arr_2 [10]);
        var_19 = (max(((min(553675317, (((-32767 - 1) ? 2371510914 : 64))))), ((32757 ? 9895652371636553447 : 4917))));
        var_20 = var_7;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
    {
        var_21 = 3748477855;
        var_22 = var_0;
        var_23 = (((arr_8 [i_2 + 1]) ? (((-26562 != (-32767 - 1)))) : var_1));
    }
    var_24 = (((((max(-32753, var_13)))) - 192));
    var_25 = (~232);
    #pragma endscop
}
