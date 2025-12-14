/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((-((1711 ? -1711 : 0))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= (max((!1), ((var_7 <= (((min((arr_0 [i_0]), (arr_0 [i_0])))))))));
        arr_3 [i_0] &= min(((var_2 ? var_1 : (arr_1 [i_0]))), var_13);
        arr_4 [i_0] [i_0] = ((!((((arr_1 [i_0]) << (arr_1 [i_0]))))));
        arr_5 [i_0] [i_0] = ((-((((arr_0 [i_0]) && ((max(-4572037160557361638, (arr_1 [i_0])))))))));
        arr_6 [i_0] [i_0] = (((min(((var_2 ? (arr_1 [i_0]) : var_6)), (arr_1 [i_0]))) % (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_8))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] = (max(var_1, var_0));
        arr_11 [i_1] = -58;
        arr_12 [i_1] = (((((var_7 && var_1) * -4572037160557361638)) << ((((((min((arr_0 [i_1]), 1))) ? (arr_0 [i_1]) : (((4294967295 > (arr_0 [i_1])))))) + 114))));

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            arr_16 [i_2] [i_1] [i_1] = (arr_1 [i_1]);
            var_16 = (arr_15 [i_1]);
        }
    }
    #pragma endscop
}
