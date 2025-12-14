/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_13 -= arr_1 [i_0 + 4];
        arr_2 [i_0] = var_7;
        arr_3 [6] |= var_10;
    }
    for (int i_1 = 4; i_1 < 12;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            arr_9 [i_1] = (((arr_8 [i_2 + 2] [i_2] [i_1]) <= ((min(((max(0, 1))), (((arr_4 [i_1] [i_2 + 1]) & var_4)))))));
            var_14 = ((((((arr_4 [i_2] [i_1]) ? (!1) : ((var_6 ? (arr_7 [i_1 - 1] [i_2]) : (arr_0 [i_1 - 1] [i_1 - 1])))))) ? ((((-1972673566 ? (arr_6 [i_2 + 1] [i_1] [i_1]) : (arr_5 [i_2]))) | (~var_6))) : (!1)));
        }
        arr_10 [i_1] = (arr_8 [i_1] [i_1] [i_1]);
        arr_11 [i_1 - 4] [i_1 - 4] |= (((((((max((arr_6 [i_1] [3] [i_1]), var_3))) ? var_10 : ((-(arr_4 [i_1] [i_1])))))) != ((1 ? 18446744073709551615 : -439))));
    }
    var_15 = var_0;
    var_16 &= (max((((!(var_3 >> var_10)))), ((max(var_2, var_6)))));
    var_17 *= min(var_2, ((var_2 ? var_3 : (-23228 || 1119917514))));
    #pragma endscop
}
