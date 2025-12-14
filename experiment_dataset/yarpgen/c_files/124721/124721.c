/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [13] = min(((var_3 ? ((0 ? var_10 : var_4)) : 645962558)), (((~(min(0, 4294967295))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_16 = (max(var_16, var_14));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_17 = ((((!(0 & 0))) ? (arr_8 [i_0]) : (~0)));
                var_18 = ((((max((min((arr_1 [i_0]), (arr_1 [i_2]))), ((max(52670, -114)))))) ? 1 : (min(((((-32767 - 1) & var_12))), (arr_2 [i_0 + 3] [i_0 - 1])))));
                var_19 = ((1 ? -27645 : ((max(3731857385, var_15)))));
                var_20 = (~0);
            }
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            var_21 = var_0;
            var_22 = ((((min(32767, (-32767 - 1)))) ? ((((!((((((arr_8 [i_0 + 2]) + 2147483647)) << (3961957485 - 3961957485)))))))) : ((65535 ? var_0 : (-7760811157154043126 && -27645)))));
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_4] [i_0] &= -64;
            arr_14 [i_0] [11] = (arr_6 [14] [i_4] [i_4] [i_4]);
        }
        var_23 = ((!((((arr_5 [i_0] [i_0 + 2]) ? (arr_7 [i_0] [i_0 - 2] [i_0]) : (-32767 - 1))))));
    }
    var_24 *= ((var_13 ? 3578589630 : 33));
    var_25 = ((((max(((min(var_15, var_5))), var_9))) % ((min((8394533804509955240 && var_13), (max(42740, var_4)))))));
    var_26 &= (max(var_4, ((var_8 ? ((-32767 ? 0 : var_2)) : (((var_8 ? -9333 : var_3)))))));
    #pragma endscop
}
