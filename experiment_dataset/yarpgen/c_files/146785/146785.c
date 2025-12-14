/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = ((1791991512 ? -19 : -14419));

        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [4] [i_1] |= ((((-4250110727485219353 ? 13 : 8889065262472778792))) ? ((-19 ? -6528789109213701802 : 718886541)) : ((1 ? 32762 : -4884002752692670659)));
            var_15 = 69;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_16 = ((35790 ? 58 : -28811));
            arr_11 [i_0] = (32762 ? 69 : ((0 ? 7797972363687739021 : 0)));
            var_17 = (min(var_17, 69));
        }
    }
    var_18 = -34;
    var_19 = -123;
    #pragma endscop
}
