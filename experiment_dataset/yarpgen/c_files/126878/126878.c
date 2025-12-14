/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126878
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_11 % var_13);

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 = var_11;
        var_16 += var_11;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_17 = var_2;
            arr_6 [i_0] [i_1] = 1;
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_18 = 4610861012979720812;
            var_19 = (~1);
            var_20 = var_7;
        }
        var_21 = (max(var_21, -114));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] = (arr_3 [i_3] [0] [i_3]);
        arr_13 [i_3] = var_13;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_22 = (((max((max(var_11, -106)), (113 && 6964005583722304473)))) & (((106 ? var_0 : var_9))));
        arr_16 [i_4] [i_4] = ((((4194303 >= 64) > (max(var_4, 82)))));
    }
    var_23 = var_13;
    var_24 = (min(var_24, ((((((46918 ? -22971 : 6907631145619794231)) % (((var_7 ? 1718972395 : var_8)))))))));
    #pragma endscop
}
