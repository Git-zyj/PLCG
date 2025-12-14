/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((~(min(((var_6 ? var_3 : var_14)), var_6)))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_20 ^= (((-22461 + 2147483647) << ((((var_13 ^ (arr_0 [10] [10]))) - 907464299))));
        var_21 = (((((arr_1 [i_0] [i_0]) < var_13))) << (var_15 + 1818457379));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                var_22 = (-23098 & 32763);
                var_23 = var_4;
                arr_6 [i_0] [4] [i_1] [i_2] = 4812;
            }
            arr_7 [i_0] [i_0] [i_0] = (~(arr_2 [i_0]));
            arr_8 [i_0] = (i_0 % 2 == 0) ? (((((-4812 + 2147483647) << (((((arr_2 [i_0]) + 95)) - 16)))))) : (((((-4812 + 2147483647) << (((((((arr_2 [i_0]) + 95)) - 16)) - 197))))));
            var_24 = (min(var_24, 9));
        }
        var_25 = ((((((arr_2 [i_0]) ? var_14 : var_2))) ? 260046848 : (((var_12 + 2147483647) >> (37795 - 37793)))));

        for (int i_3 = 3; i_3 < 9;i_3 += 1) /* same iter space */
        {
            arr_11 [i_0] = 1;
            var_26 -= (arr_1 [0] [0]);
        }
        for (int i_4 = 3; i_4 < 9;i_4 += 1) /* same iter space */
        {
            arr_14 [i_0] = (arr_2 [i_0]);
            arr_15 [i_0] [i_0] [i_0] = (arr_13 [i_0] [i_4 - 3] [i_4 + 2]);
            arr_16 [i_0] [i_0] = (arr_4 [i_4]);
        }
    }
    #pragma endscop
}
